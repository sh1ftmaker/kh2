// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2d8 asm("D_0035f2d8");
extern "C" u32 D_0035f2dc asm("D_0035f2dc");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x00285760 func_00285760
u32 func_00285760() asm("_ZN2Tz6Ending7SelCtrlEv");
u32 func_00285760() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    v0 = func_00289380(*(u32*)(&D_0035f2dc));
    if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035f2dc))) != 0)) {
        if (((s32)(func_0028ae28(*(u32*)(&D_0035f2dc), 0)) == 0)) {
            func_00138c10(*(u32*)(&D_0035f2d8), 5);
            func_0028ab20(*(u32*)(&D_0035f2dc));
        }
    }
    func_00287df0(v0, func_00289310(*(u32*)(&D_0035f2dc)), 0, 0, 1);
    if (((s32)(v0) != 0)) {
        if (((s32)(v0) <= 0)) {
            if ((v0 == 0xfffffffe)) {
                v0_0 = 0;
            } else {
                v0_0 = 0xffffffff;
            }
            v0_2 = v0_0;
        } else {
            if ((v0 != 1)) {
                v0_1 = 0xffffffff;
            } else {
                v0_1 = 1;
            }
            v0_2 = v0_1;
        }
        v0_3 = v0_2;
    } else {
        v0_3 = 0;
    }
    return v0_3;
}
