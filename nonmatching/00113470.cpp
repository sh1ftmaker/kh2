// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341720 asm("D_00341720");
extern "C" u32 D_00341750 asm("D_00341750");
extern "C" u32 D_003417b0 asm("D_003417b0");
extern "C" u32 D_003a9040 asm("D_003a9040");
extern "C" void func_0010b450(u32, u32) asm("func_0010b450");
extern "C" void func_00190128(u32) asm("func_00190128");

// 0x00113470 func_00113470(int, int)
void lift_00113470(u32 a0, u32 a1) asm("_Z13func_00113470ii");
void lift_00113470(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t6;
    u32 t7;
    u32 sp;
    u32 sp_0;
    u32 sp_1;
    u32 t6_2;
    u32 t7_3;
    u32 s0;
    u32 t6_4;
    u32 t7_5;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_0010b450((u32)&D_003a9040, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00190128((u32)&D_003417b0);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_00341750) != 0)) {
                t6 = (u32)&D_00341750;
                t7 = ((u32)&D_00341750 + 0x30);
                do {
                    t7 = (t7 + -0x10);
                } while ((t7 != t6));
            } else {
                sp = (u32)frame;
            }
            sp_0 = sp;
        } else {
            sp_0 = (u32)frame;
        }
        sp_1 = sp_0;
    } else {
        sp_1 = (u32)frame;
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            if (((s32)((u32)&D_00341720) != 0)) {
                t6_2 = (u32)&D_00341720;
                t7_3 = ((u32)&D_00341720 + 0x30);
                do {
                    t7_3 = (t7_3 + -0x10);
                } while ((t7_3 != t6_2));
            }
        }
    }
    if ((s0 == 0xffff)) {
        if ((a0 == 0)) {
            if (((u32)&D_003a9040 != 0xfffffff0)) {
                t6_4 = ((u32)&D_003a9040 + 0x10);
                t7_5 = ((u32)&D_003a9040 + 0x210);
                do {
                    t7_5 = (t7_5 + -0x10);
                } while ((t7_5 != t6_4));
            }
        }
    }
    return;
}
