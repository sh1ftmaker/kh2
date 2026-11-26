// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f2e4 asm("D_0035f2e4");
extern "C" u32 D_003743d8 asm("D_003743d8");
extern "C" u32 D_003743e8 asm("D_003743e8");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001a36e0(u32) asm("func_001a36e0");
extern "C" u32 func_002859a0() asm("func_002859a0");

// 0x00286298 u_call0_00286298()
u32 lift_00286298() asm("_Z16u_call0_00286298v");
u32 lift_00286298() {
    u32 v0;
    u32 s0;
    u32 t7;
    u32 v0_0;
    u32 s0_1;
    u32 t4;
    u32 s1;
    u32 t7_2;
    u32 t3;
    u32 t6;
    u32 t6_3;
    u32 s0_4;
    u32 t7_5;
    u32 v0_6;
    u32 t5;
    u32 t4_7;
    u32 s2;
    u32 t5_8;
    u32 t6_9;
    u32 t6_10;
    u32 s2_11;
    u32 s0_12;
    u32 t7_13;
    v0 = func_002859a0();
    if (((s32)(*(s16*)(&D_003743d8)) >= 0)) {
        s0 = 0;
        t7 = (u32)&D_003743d8;
        do {
            v0_0 = func_001a3570(func_001a36e0(*(s16*)(t7)));
            s0_1 = (s0 + 1);
            t4 = ((s0 >> 5) << 2);
            s1 = (v0 + 0xcc);
            t7_2 = (s0_1 << 1);
            if (((s32)(v0_0) != 0)) {
                t3 = (1 << (s0 & 0x1f));
                if (((*(u32*)((t4 + s1)) & t3) == 0)) {
                    t6 = (*(u32*)(&D_0035f2e4) + 0xc8);
                    t6_3 = (t6 + t4);
                    *(u32*)(t6_3) = (*(u32*)(t6_3) | t3);
                }
            }
            s0 = s0_1;
            t7 = (t7_2 + (u32)&D_003743d8);
            v0 = v0_0;
        } while (((s32)(t7) >= 0));
    }
    if (((s32)(*(s16*)(&D_003743e8)) >= 0)) {
        s0_4 = 0;
        t7_5 = (u32)&D_003743e8;
        do {
            v0_6 = func_001a3570(*(s16*)(t7_5));
            if (((s32)(v0_6) != 0)) {
                t5 = (s0_4 + 5);
                t4_7 = ((t5 >> 5) << 2);
                s2 = (v0 + 0xcc);
                t5_8 = (1 << (t5 & 0x1f));
                if (((*(u32*)((t4_7 + s2)) & t5_8) == 0)) {
                    t6_9 = (*(u32*)(&D_0035f2e4) + 0xc8);
                    t6_10 = (t6_9 + t4_7);
                    *(u32*)(t6_10) = (*(u32*)(t6_10) | t5_8);
                }
                s2_11 = s2;
            } else {
                s2_11 = (v0 + 0xcc);
            }
            s0_12 = (s0_4 + 1);
            t7_13 = (s0_12 << 1);
            s0_4 = s0_12;
            t7_5 = (t7_13 + (u32)&D_003743e8);
            v0 = v0_6;
        } while (((s32)(t7_5) >= 0));
    }
    return v0;
}
