// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00352ad0 asm("D_00352ad0");
extern "C" u32 D_01d5bab0 asm("D_01d5bab0");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");

// 0x001dbcd0 func_001dbcd0
void func_001dbcd0() asm("_ZN2YS11CROWDEFFECT7PreExecEv");
void func_001dbcd0() {
    u32 v0;
    if (((s32)(func_0019ba60(*(u32*)(&D_0034e948))) != 0)) {
        v0 = func_0016c028(*(u32*)(&D_0034e948));
        if ((v0 != (u32)&D_01d5bab0)) {
            *(Q16*)((u32)&D_01d5bab0) = *(Q16*)(v0);
        }
    }
    *(f32*)(&D_00352ad0) = (*(f32*)(&D_00352ad0) - *(f32*)(&D_00349e10));
    return;
}
