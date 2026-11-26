// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019c218(u32, u32) asm("func_0019c218");
extern "C" void func_0019ba60(u32, u32, u32) asm("func_0019ba60");

// 0x001b8f10 func_001b8f10
void func_001b8f10(u32 a0, u32 a1, u32 a2) asm("_ZNK2YS12COMMAND_ELEM10can_decideEPNS_3OBJEPKNS_6TARGETE");
void func_001b8f10(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t7_6;
    t6 = *(u8*)((a0 + 0x1f));
    if ((t6 != 1)) {
        if (((s32)(t6) < (s32)(2))) {
            if (((s32)(t6) != 0)) {
                t7_0 = 0;
            } else {
                if (((s32)(func_0019c218(a1, a0)) == 0)) {
                    t7 = 0;
                } else {
                    t7 = 1;
                }
                t7_0 = t7;
            }
            t7_4 = t7_0;
        } else {
            if ((t6 == 2)) {
                if (((s32)(a2) != 0)) {
                    func_0019ba60(*(u32*)(a2), a1, a2);
                }
                if (((s32)(func_0019c218(a1, a0)) != 0)) {
                    if (((s32)(func_0019c218(*(u32*)(a2), a0)) == 0)) {
                        t7_1 = 0;
                    } else {
                        t7_1 = 1;
                    }
                    t7_2 = t7_1;
                } else {
                    t7_2 = 0;
                }
                t7_3 = t7_2;
            } else {
                t7_3 = 0;
            }
            t7_4 = t7_3;
        }
        t7_6 = t7_4;
    } else {
        if ((a2 != 0)) {
            func_0019ba60(*(u32*)(a2), a1, a2);
        }
        if (((s32)(func_0019c218(*(u32*)(a2), a0)) == 0)) {
            t7_5 = 0;
        } else {
            t7_5 = 1;
        }
        t7_6 = t7_5;
    }
    return;
}
