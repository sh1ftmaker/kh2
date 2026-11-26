// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }


// 0x002fb460 func_002fb460
// minilink-rodata 0x00377764   (float literals live here in the original)
f32 func_002fb460(u32 a0, f32 fa0, f32 fa1) asm("func_002fb460");
f32 func_002fb460(u32 a0, f32 fa0, f32 fa1) {
    if (((s32)(((s32)(0x31ffffff) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
        if (((s32)((s32)(fa0)) != 0)) {
            if (((s32)(a0) == 0)) {
                return (fa0 + (((fa0 * fa0) * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * 1.5896908789336806e-10f) + -2.5050759688838298e-08f)) + 2.755731202341849e-06f)) + -0.00019841270113829523f)) + 0.008333333767950535f)) + -0.1666666567325592f)));
            } else {
                return (fa0 - ((((fa0 * fa0) * ((fa1 * 0.5f) - (((fa0 * fa0) * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * 1.5896908789336806e-10f) + -2.5050759688838298e-08f)) + 2.755731202341849e-06f)) + -0.00019841270113829523f)) + 0.008333333767950535f)))) - fa1) - (((fa0 * fa0) * fa0) * -0.1666666567325592f)));
            }
        } else {
            return fa0;
        }
    } else {
        if (((s32)(a0) == 0)) {
            return (fa0 + (((fa0 * fa0) * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * 1.5896908789336806e-10f) + -2.5050759688838298e-08f)) + 2.755731202341849e-06f)) + -0.00019841270113829523f)) + 0.008333333767950535f)) + -0.1666666567325592f)));
        } else {
            return (fa0 - ((((fa0 * fa0) * ((fa1 * 0.5f) - (((fa0 * fa0) * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * 1.5896908789336806e-10f) + -2.5050759688838298e-08f)) + 2.755731202341849e-06f)) + -0.00019841270113829523f)) + 0.008333333767950535f)))) - fa1) - (((fa0 * fa0) * fa0) * -0.1666666567325592f)));
        }
    }
}
