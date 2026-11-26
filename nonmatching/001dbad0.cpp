// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00352a60 asm("D_00352a60");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001c2578(u32) asm("func_001c2578");
extern "C" void func_001dbcd0() asm("func_001dbcd0");

// 0x001dbad0 func_001dbad0
u32 func_001dbad0(u32 a0) asm("_ZN2YS8CROWDOBJ9_OVR_execEv");
u32 func_001dbad0(u32 a0) {
    u32 v0;
    if (((s32)(func_0019ba60(*(u32*)(&D_0034e948))) != 0)) {
        v0 = func_0016c028(*(u32*)(&D_0034e948));
        if ((v0 != (u32)&D_00352a60)) {
            *(Q16*)((u32)&D_00352a60) = *(Q16*)(v0);
        }
    }
    func_001dbcd0();
    return func_001c2578(a0);
}
