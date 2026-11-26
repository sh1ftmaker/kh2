// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036dc48 asm("D_0036dc48");
extern "C" u32 func_001bd988(u32) asm("func_001bd988");

// 0x001bcc28 func_001bcc28
void func_001bcc28(u32 a0) asm("_ZN2YS12COMMAND_MENU13exec_shortcutEv");
void func_001bcc28(u32 a0) {
    u32 t1;
    u32 t2;
    u32 a3_0;
    u32 t5;
    u32 t4;
    u32 t6;
    u32 t6_1;
    u32 t6_2;
    u32 t3;
    u32 t7;
    u32 t4_3;
    u32 t6_4;
    u32 t7_5;
    u32 t6_6;
    u32 t7_7;
    u32 t6_8;
    u32 t7_9;
    u32 t7_10;
    u32 t6_11;
    u32 t7_12;
    u32 t7_13;
    t1 = *(u32*)((a0 + 4));
    *(u32*)((a0 + 0x6c)) = 0xffffffff;
    t2 = *(u32*)((a0 + 8));
    a3_0 = *(u32*)((t1 + 0x9e4));
    if (((s32)(t2) > 0)) {
        t5 = (a0 + 0x12);
        t4 = 0;
        t6 = *(u8*)(t5);
        do {
            t6_1 = *(u8*)(t5);
            t6_2 = (t6_1 << 3);
            t3 = *(u64*)((a3_0 + 8));
            t7 = *(u64*)(((t6_2 + (u32)&D_0036dc48) + -8));
            if (((s32)((t3 & t7)) != 0)) {
                *(u32*)((a0 + 0x6c)) = t4;
                break;
            }
            t4_3 = (t4 + 1);
            t4 = t4_3;
            t5 = (t5 + 0xc);
            t6 = (t6_2 + (u32)&D_0036dc48);
        } while (((s32)(t4_3) < (s32)(t2)));
    }
    t6_4 = *(u32*)((a0 + 0x6c));
    if (((s32)(t6_4) >= 0)) {
        t7_5 = (t6_4 * 0xc);
        t6_6 = *(u16*)(((a0 + t7_5) + 0xe));
        if (((s32)(t6_6) != 0)) {
            if ((t6_6 == 0x1c6)) {
                t7_7 = *(u32*)((t1 + 8));
                *(u32*)((t1 + 8)) = (t7_7 | 2);
                return;
            } else {
                func_001bd988(*(u32*)((a0 + 4)));
                return;
            }
        } else {
            t6_8 = *(u64*)((a3_0 + 8));
            if (((t6_8 & 0x100) == 0)) {
                if (((s32)((t6_8 & 0x200)) != 0)) {
                    t7_9 = *(u32*)((t1 + 8));
                    *(u32*)((t1 + 8)) = (t7_9 | 8);
                }
            } else {
                t7_10 = *(u32*)((t1 + 8));
                *(u32*)((t1 + 8)) = (t7_10 | 2);
            }
            return;
        }
    } else {
        t6_11 = *(u64*)((a3_0 + 8));
        if (((t6_11 & 0x100) == 0)) {
            if (((s32)((t6_11 & 0x200)) != 0)) {
                t7_12 = *(u32*)((t1 + 8));
                *(u32*)((t1 + 8)) = (t7_12 | 8);
            }
        } else {
            t7_13 = *(u32*)((t1 + 8));
            *(u32*)((t1 + 8)) = (t7_13 | 2);
        }
        return;
    }
}
