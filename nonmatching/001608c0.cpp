// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016b0d0() asm("func_0016b0d0");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_00144908(u32, u32) asm("func_00144908");

// 0x001608c0 func_001608c0
void func_001608c0(u32 a0) asm("_ZN2dk5BgObj4drawEv");
void func_001608c0(u32 a0) {
    u8 frame[16];
    u32 v0;
    f32 f1;
    func_00144908(a0 + 0x290, (u32)frame);
    if (((a0 + 0x280) != (u32)frame)) {
        *(Q16*)((a0 + 0x280)) = *(Q16*)((u32)frame);
    }
    v0 = func_0016b0d0();
    if ((v0 != 0)) {
        f1 = *(f32*)((func_0016c028(v0) + 4));
        if ((*(f32*)((a0 + 0x294)) <= f1)) {
            if ((f1 <= *(f32*)((a0 + 0x2a0)))) {
                *(f32*)((a0 + 0x284)) = f1;
            }
        }
    }
    return;
}
