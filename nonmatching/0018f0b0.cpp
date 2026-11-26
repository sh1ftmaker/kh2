// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60cd0 asm("D_01c60cd0");
extern "C" u32 D_01c60cd8 asm("D_01c60cd8");

// 0x0018f0b0 func_0018f0b0
// minilink-rodata 0x0036ccd8   (float literals live here in the original)
void func_0018f0b0(u32 a0, u32 a1) asm("func_0018f0b0");
void func_0018f0b0(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_01c60cd0) = 0.7853981256484985f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u32*)(&D_01c60cd8) = 0;
                *(u32*)(((u32)&D_01c60cd8 + 4)) = 0;
            }
        }
    }
    return;
}
