// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035dcf8 asm("D_0035dcf8");

// 0x00232db0 sa::EVENT::clearMotionCtrlWk(int)
void lift_00232db0(u32 a0) asm("_ZN2sa5EVENT17clearMotionCtrlWkEi");
void lift_00232db0(u32 a0) {
    u32 t3;
    u32 t7;
    t3 = 0;
    t7 = *(u32*)(&D_0035dcf8);
    do {
        if ((*(u32*)(((t3 << 6) + t7)) != 0xffffffff)) {
            if ((*(u32*)((((t3 << 6) + t7) + 4)) == a0)) {
                *(u32*)(((t3 << 6) + t7)) = 0xffffffff;
                *(u32*)((((t3 << 6) + *(u32*)(&D_0035dcf8)) + 4)) = 0xffffffff;
                *(u32*)((((t3 << 6) + *(u32*)(&D_0035dcf8)) + 8)) = 0;
                return;
            }
        }
        t3 = (t3 + 1);
        t7 = *(u32*)(&D_0035dcf8);
    } while (((s32)(((s32)(t3) < (s32)(0x40))) != 0));
    return;
}
