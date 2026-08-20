#!/usr/bin/env python3
"""calibrate.py — fit P(match | signals) on the rig's own logged outcomes.

The scheduler used to rank by a hand-weighted score with no size term, so it
optimised match *count*. Bytes is the honest metric, and expected bytes is
`P(match) x size` — which needs a real P, not a hand-weight. Every attempt the
rig has ever made is already on disk as a summary.json, so fit on that.

    python3 tools/rig/calibrate.py              # fit, report, write the model
    python3 tools/rig/calibrate.py --report     # fit and report, write nothing

Logistic regression by plain gradient descent on numpy — a few thousand rows
and six features do not justify a dependency. The model is written to
docs/rig/pmatch.json as plain coefficients so it is reviewable and diffable.

Honest limits: the training rows are what the *scheduler chose*, so the fit is
conditioned on past policy (rows it never picked are unobserved). Treat it as
a better ranking signal, not as a calibrated probability of solving an
arbitrary function.
"""
from __future__ import annotations

import argparse
import json
import math
import sys
from pathlib import Path

import numpy as np

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rigcommon as rc  # noqa: E402

MODEL_PATH = rc.ROOT / "docs" / "rig" / "pmatch.json"
FEATURES = ["twin", "named", "arity", "layout", "leaf", "log_size"]


def rows() -> list[dict]:
    """Every logged attempt, with the features the scheduler knows at pick time."""
    out = []
    for sp in list((rc.RIG_OUT / "rounds").glob("*/*/summary.json")) + \
              list((rc.RIG_OUT / "runs").glob("*/*/summary.json")):
        try:
            s = json.loads(sp.read_text())
        except (OSError, ValueError):
            continue
        addr, size = s.get("addr"), s.get("size")
        if not addr or not size:
            continue
        out.append({"addr": addr, "size": int(size),
                    "matched": 1.0 if s.get("result") == "matched" else 0.0})
    return out


def featurise(recs: list[dict], queue_feats: dict) -> tuple[np.ndarray, np.ndarray, list[dict]]:
    X, y, kept = [], [], []
    for r in recs:
        f = queue_feats.get(r["addr"])
        if f is None:
            continue
        X.append([f["twin"], f["named"], f["arity"], f["layout"], f["leaf"],
                  math.log(max(r["size"], 1))])
        y.append(r["matched"])
        kept.append(r)
    return np.array(X, dtype=float), np.array(y, dtype=float), kept


def fit(X: np.ndarray, y: np.ndarray, iters: int = 4000, lr: float = 0.08,
        l2: float = 1e-3) -> np.ndarray:
    """Gradient descent with an intercept column and standardised features."""
    n, d = X.shape
    mu, sd = X.mean(0), X.std(0)
    sd[sd == 0] = 1.0
    Z = np.hstack([np.ones((n, 1)), (X - mu) / sd])
    w = np.zeros(d + 1)
    for _ in range(iters):
        p = 1.0 / (1.0 + np.exp(-Z @ w))
        g = Z.T @ (p - y) / n + l2 * np.r_[0.0, w[1:]]
        w -= lr * g
    return w, mu, sd


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--report", action="store_true", help="do not write the model")
    args = ap.parse_args()

    # features come from the scheduler itself, so training and serving agree
    from scheduler import queue_features
    recs = rows()
    feats = queue_features()
    X, y, kept = featurise(recs, feats)
    if len(kept) < 200:
        print(f"calibrate: only {len(kept)} usable rows; keeping the hand weights")
        return 1
    def brier_of(cols) -> tuple[float, np.ndarray, np.ndarray, np.ndarray]:
        Xs = X[:, cols]
        w_, mu_, sd_ = fit(Xs, y)
        Z = np.hstack([np.ones((len(Xs), 1)), (Xs - mu_) / sd_])
        p_ = 1.0 / (1.0 + np.exp(-(Z @ w_)))
        return float(((p_ - y) ** 2).mean()), w_, mu_, sd_

    # Held-out honesty: the training rows are the ones the scheduler *chose*, so a
    # feature it favoured is over-represented among failures simply because it was
    # tried more. Compare the full fit against a size-only fit; adopt the extra
    # features only if they actually buy accuracy, rather than importing
    # coefficients that a selection effect could have flipped negative.
    size_col = [FEATURES.index("log_size")]
    b_size, w_size, mu_size, sd_size = brier_of(size_col)
    w, mu, sd = fit(X, y)
    p = 1.0 / (1.0 + np.exp(-(np.hstack([np.ones((len(X), 1)), (X - mu) / sd]) @ w)))
    base = y.mean()
    # Brier score against the "everyone gets the base rate" null; lower is better
    brier, null = float(((p - y) ** 2).mean()), float(((base - y) ** 2).mean())
    print(f"calibrate: {len(kept)} rows, {int(y.sum())} matched ({100*base:.1f} %)")
    print(f"  brier {brier:.4f} vs null {null:.4f} "
          f"({'better' if brier < null else 'NO BETTER — do not use'})")
    for name, coef in zip(FEATURES, w[1:]):
        print(f"  {name:9s} {coef:+.3f}")
    print(f"  size-only brier {b_size:.4f} (full model buys {b_size - brier:+.4f})")
    # 0.002 Brier on 1,160 rows is inside the noise; without a clear win the
    # size-only model is the one to serve, because it is the only part of the fit
    # no selection effect can invert.
    use_full = (brier < null) and (b_size - brier) > 0.002
    feats = FEATURES if use_full else ["log_size"]
    ww, mm, ss = (w, mu, sd) if use_full else (w_size, mu_size, sd_size)
    print(f"  serving: {'full' if use_full else 'size-only'} model "
          f"({'extra features earn their place' if use_full else 'extra features do not beat noise'})")
    if args.report or brier >= null:
        return 0
    MODEL_PATH.write_text(json.dumps(
        {"features": feats, "intercept": ww[0], "coef": list(ww[1:]),
         "mean": list(mm), "std": list(ss), "rows": len(kept),
         "base_rate": base, "brier": float(brier if use_full else b_size),
         "brier_null": null, "brier_size_only": b_size, "brier_full": brier,
         "note": ("training rows are the ones the scheduler chose, so non-size "
                  "coefficients are confounded by past policy")}, indent=1))
    print(f"wrote {MODEL_PATH}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
