// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edac asm("D_0035edac");
extern "C" u32 D_0035edb0 asm("D_0035edb0");
extern "C" u32 D_0035edb4 asm("D_0035edb4");
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_0024be68() asm("func_0024be68");
extern "C" void func_0024bfb8() asm("func_0024bfb8");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x0024bd90 func_0024bd90
u32 func_0024bd90() asm("_ZN2Tz4HBTE7ControlEv");
u32 func_0024bd90() {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    s0 = func_00287bc0();
    func_00287d68();
    if (((s32)(func_00287db0()) != 0)) {
        if (((s32)(func_0028acc8(*(u32*)(&D_0035eda8))) == 0)) {
            if (((s32)(func_0028acc8(*(u32*)(&D_0035edac))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035edb0))) == 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035edb4))) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035edb8))) == 0)) {
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
                v0_2 = 0;
            }
            v0_3 = v0_2;
        } else {
            v0_3 = 0;
        }
        v0_4 = v0_3;
    } else {
        if (((s32)(s0) != 0)) {
            if ((s0 == 1)) {
                func_0024bfb8();
            }
        } else {
            func_0024be68();
        }
        v0_4 = 0;
    }
    return v0_4;
}
