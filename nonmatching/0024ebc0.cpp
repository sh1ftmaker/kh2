// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee04 asm("D_0035ee04");
extern "C" u32 D_0035ee08 asm("D_0035ee08");
extern "C" u32 D_0035ee10 asm("D_0035ee10");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_0024eb50() asm("func_0024eb50");
extern "C" void func_0024ec50() asm("func_0024ec50");
extern "C" void func_0024f2d0() asm("func_0024f2d0");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x0024ebc0 func_0024ebc0
u32 func_0024ebc0() asm("_ZN2Tz4TTMY7ControlEv");
u32 func_0024ebc0() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    func_00287d68();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035ee04))) == 0)) {
            if (((s32)(func_00139d78(*(u32*)(&D_0035ee08))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ee10))) == 0)) {
                    func_0024eb50();
                    func_0024f2d0();
                    func_001039f8();
                    v0 = 1;
                } else {
                    v0 = 0;
                }
                v0_0 = v0;
            } else {
                v0_0 = 0;
            }
            v0_1 = v0_0;
        } else {
            v0_1 = 0;
        }
        v0_2 = v0_1;
    } else {
        func_0024ec50();
        v0_2 = 0;
    }
    return v0_2;
}
