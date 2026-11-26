// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed50 asm("D_0035ed50");
extern "C" u32 D_0035ed54 asm("D_0035ed54");
extern "C" u32 D_0035ed58 asm("D_0035ed58");
extern "C" u32 D_0035ed5c asm("D_0035ed5c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287db0() asm("func_00287db0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_001039f8() asm("func_001039f8");
extern "C" void func_002489d8() asm("func_002489d8");
extern "C" void func_00248b38() asm("func_00248b38");
extern "C" void func_00287d68() asm("func_00287d68");

// 0x00248900 func_00248900
u32 func_00248900() asm("_ZN2Tz4MUMI7ControlEv");
u32 func_00248900() {
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
        if (((s32)(func_0028acc8(*(u32*)(&D_0035ed4c))) == 0)) {
            if (((s32)(func_0028acc8(*(u32*)(&D_0035ed50))) == 0)) {
                if (((s32)(func_00139d78(*(u32*)(&D_0035ed54))) == 0)) {
                    if (((s32)(func_00139d78(*(u32*)(&D_0035ed58))) == 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035ed5c))) == 0)) {
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
                func_00248b38();
            }
        } else {
            func_002489d8();
        }
        v0_4 = 0;
    }
    return v0_4;
}
