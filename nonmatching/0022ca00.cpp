// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" u32 D_0035de50 asm("D_0035de50");
extern "C" u32 func_001ba028(u32) asm("func_001ba028");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_00227d58(u32) asm("func_00227d58");

// 0x0022ca00 sa::EVENT::light_ctrl()
void lift_0022ca00() asm("_ZN2sa5EVENT10light_ctrlEv");
void lift_0022ca00() {
    u32 t6;
    u32 t5;
    u32 s1;
    u32 s0;
    u32 s3;
    u32 s4;
    u32 v0;
    u32 t7;
    t6 = *(u32*)(&D_0035de50);
    if (((s32)(t6) != 0)) {
        t5 = *(s16*)((t6 + 4));
        if (((s32)(t5) > 0)) {
            s1 = (t6 + 8);
            do {
                s0 = *(s16*)((s1 + 2));
                s3 = *(s16*)((s1 + 4));
                s4 = *(u32*)(&D_0035de20);
                if (((s32)(func_00225b00(s0)) == 0)) {
                    if (((s32)(s4) >= (s32)(s0))) {
                        if (((s32)(s4) < (s32)(s3))) {
                            v0 = func_00227d10(*(s16*)(s1));
                            if (((s32)(v0) != 0)) {
                                t7 = *(u32*)((v0 + 8));
                                if (((s32)(t7) != 0)) {
                                    if ((func_001ba028(t7) != 0)) {
                                        *(u32*)((*(u32*)((v0 + 8)) + 0x6a8)) = func_00227d58(*(s16*)(s1));
                                        *(u32*)((*(u32*)((v0 + 8)) + 0x770)) = (s1 + 8);
                                    }
                                }
                            }
                        }
                    }
                }
                s1 = (s1 + 0x5c);
                t5 = (t5 + -1);
            } while (((s32)(t5) != 0));
        }
    }
    return;
}
