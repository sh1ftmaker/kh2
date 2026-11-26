// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d5ba28 asm("D_01d5ba28");
extern "C" u32 func_00170cd0() asm("func_00170cd0");
extern "C" u32 func_001d3c78(u32) asm("func_001d3c78");
extern "C" u32 func_001d3de0(u32) asm("func_001d3de0");
extern "C" u32 func_001d4808(u32) asm("func_001d4808");
extern "C" void func_00170320(u32) asm("func_00170320");
extern "C" void func_00170888(u32) asm("func_00170888");
extern "C" void func_001d3c18(u32) asm("func_001d3c18");

// 0x001d4180 func_001d4180
void func_001d4180() asm("_ZN2YS11LIMIT_TABLE9CheckReadEv");
void func_001d4180() {
    u8 frame[16];
    u32 t5;
    u32 t7;
    u32 s2;
    u32 s4;
    u32 s6;
    u32 s7;
    u32 t6;
    u32 t7_0;
    u32 t7_1;
    u32 t5_2;
    u32 t7_3;
    u32 s6_4;
    u32 s7_5;
    u32 s0;
    u32 s2_6;
    u32 t6_7;
    u32 t7_8;
    u32 a0_9;
    u32 sp;
    u32 sp_10;
    u32 sp_11;
    if (((s32)(func_00170cd0()) == 0)) {
        t5 = *(u32*)(&D_01d5ba28);
        t7 = *(u32*)((t5 + 4));
        if (((s32)(t7) > 0)) {
            s2 = 0;
            s4 = 0;
            s6 = 0;
            s7 = 0;
            t6 = (0 << 6);
            do {
                t7_0 = *(u8*)(((t5 + t6) + 8));
                if (((s32)((s4 & (1 << t7_0))) == 0)) {
                    if (((s32)(func_001d4808((t5 + t6) + 8)) == 0)) {
                        if (((s32)(func_001d3c78((t5 + t6) + 8)) != 0)) {
                            t7_1 = *(u8*)(((t5 + t6) + 8));
                            *(u8*)(((u32)frame + s6)) = s2;
                            s4 = (s4 | (1 << t7_1));
                            s6 = (s6 + 1);
                            s7 = (func_001d3de0((t5 + t6) + 8) ? s7 : 1);
                        }
                    }
                }
                t5_2 = *(u32*)(&D_01d5ba28);
                t7_3 = *(u32*)((t5_2 + 4));
                s2 = (s2 + 1);
                t5 = t5_2;
                t6 = (s2 << 6);
            } while (((s32)(((s32)(s2) < (s32)(t7_3))) != 0));
            s6_4 = s6;
            s7_5 = s7;
        } else {
            s6_4 = 0;
            s7_5 = 0;
        }
        if (((s32)(s7_5) != 0)) {
            func_00170320(0x1388);
            if (((s32)(s6_4) > 0)) {
                s0 = 0x1d60000;
                s2_6 = 0;
                t6_7 = (u32)frame;
                do {
                    t7_8 = *(u8*)(t6_7);
                    a0_9 = *(u32*)((s0 + -0x45d8));
                    func_001d3c18((a0_9 + (t7_8 << 6)) + 8);
                    s2_6 = (s2_6 + 1);
                    t6_7 = ((u32)frame + s2_6);
                } while (((s32)(((s32)(s2_6) < (s32)(s6_4))) != 0));
            } else {
                sp = (u32)frame;
            }
            func_00170888(0);
            sp_10 = sp;
        } else {
            sp_10 = (u32)frame;
        }
        sp_11 = sp_10;
    } else {
        sp_11 = (u32)frame;
    }
    return;
}
