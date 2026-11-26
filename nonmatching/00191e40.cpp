// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 func_00181930() asm("func_00181930");
extern "C" u32 func_00191ab8() asm("func_00191ab8");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001a6850() asm("func_001a6850");
extern "C" u32 func_001c8db8(u32, u32) asm("func_001c8db8");

// 0x00191e40 YS::STATUS::IsDisableCampMenu()
void lift_00191e40() asm("_ZN2YS6STATUS17IsDisableCampMenuEv");
void lift_00191e40() {
    u32 s0;
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    u32 t5_2;
    u32 t5_3;
    u32 t5_4;
    if (((s32)(func_00191ab8()) == 0)) {
        if (((s32)(func_001c8db8((u32)&D_00351ec0, 0)) == 0)) {
            if (((s32)(func_00181930()) == 0)) {
                t5_2 = 1;
            } else {
                s0 = *(u32*)(&D_0034e948);
                if (((s32)(func_0019ba60(*(u32*)(&D_0034e948))) != 0)) {
                    if ((*(u32*)((s0 + 0xb50)) != 0xc)) {
                        if (((s32)((*(u32*)((s0 + 0x160)) & 0x4000)) == 0)) {
                            t5 = ((u32)(0) < (u32)(func_001a6850()));
                        } else {
                            t5 = 1;
                        }
                        t5_0 = t5;
                    } else {
                        t5_0 = 1;
                    }
                    t5_1 = t5_0;
                } else {
                    t5_1 = 1;
                }
                t5_2 = t5_1;
            }
            t5_3 = t5_2;
        } else {
            t5_3 = 1;
        }
        t5_4 = t5_3;
    } else {
        t5_4 = 1;
    }
    return;
}
