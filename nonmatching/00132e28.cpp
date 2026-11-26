// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001325c8(u32, u32, u32) asm("func_001325c8");
extern "C" u32 func_00132720(u32, u32) asm("func_00132720");
extern "C" u32 func_00132c68(u32, u32) asm("func_00132c68");

// 0x00132e28 func_00132e28
void func_00132e28(u32 a0, u32 a1) asm("_ZN2kn10TEXAnmWork3setEj");
void func_00132e28(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 t7;
    u32 t6;
    v0 = func_00132c68(a0, a1);
    if (((s32)(v0) != 0)) {
        v0_0 = func_001325c8(a0, 0xffff, a1);
        if (((s32)(v0_0) >= 0)) {
            t7 = *(u32*)((v0 + 0x1c));
            t6 = *(u32*)((a0 + 0x14));
            *(u32*)((a0 + 0x14)) = (t6 | 4);
            func_00132720(a0, v0 + *(u32*)(((v0_0 << 2) + (v0 + t7))));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
