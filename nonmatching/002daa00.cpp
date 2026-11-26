// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016c028(u32, u32) asm("func_0016c028");
extern "C" u32 func_002bc188(u32, u32) asm("func_002bc188");

// 0x002daa00 func_002daa00
void func_002daa00(u32 a0, u32 a1) asm("_ZN2Ti18MGHachimitsuPlayer13player_pod_seEi");
void func_002daa00(u32 a0, u32 a1) {
    if (((s32)(*(u32*)((a0 + 0xbf4))) != 0)) {
        func_002bc188(a1 + 0x56ab8, func_0016c028(*(u32*)((a0 + 0xbf4)), a1));
        return;
    } else {
        return;
    }
}
