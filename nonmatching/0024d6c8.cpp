// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035edd0 asm("D_0035edd0");
extern "C" u32 D_0035edd4 asm("D_0035edd4");
extern "C" u32 D_0035edd8 asm("D_0035edd8");
extern "C" u32 D_0035eddc asm("D_0035eddc");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_0024d7a0() asm("func_0024d7a0");
extern "C" void func_0024d910() asm("func_0024d910");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x0024d6c8 func_0024d6c8
u32 func_0024d6c8() asm("_ZN2Tz4TTPT7ControlEv");
u32 func_0024d6c8() {
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
        if (((s32)(func_0028acc8(*(u32*)(&D_0035edcc))) == 0)) {
            if (((s32)(func_0028acc8(*(u32*)(&D_0035edd0))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035edd4))) == 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035edd8))) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035eddc))) == 0)) {
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
                func_0024d910();
            }
        } else {
            func_0024d7a0();
        }
        v0_4 = 0;
    }
    return v0_4;
}
