// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00370b74 asm("D_00370b74");
extern "C" f32 func_0021efa8(u32, u32, u32) asm("func_0021efa8");

// 0x0021f908 func_0021f908
// minilink-rodata 0x00370b74   (float literals live here in the original)
f32 func_0021f908(u32 a0, u32 a1, u32 a2) asm("func_0021f908");
f32 func_0021f908(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 t6;
    u32 s1;
    u32 s0;
    f32 f0;
    u32 t6_0;
    f32 f0_1;
    u32 sp;
    u32 t5;
    u8 t7;
    u32 t7_2;
    u32 t6_3;
    u32 t5_4;
    u32 s1_5;
    f32 f1;
    u32 t7_6;
    *(u32*)((a0 + 4)) = a1;
    t6 = *(u8*)((a0 + 8));
    if (((s32)((t6 & 0xff)) != 0)) {
        s1 = 0;
        s0 = (a0 + 0x10);
        do {
            func_0021efa8(s0, a1, a2);
            s1 = (s1 + 1);
            t6_0 = *(u8*)((a0 + 8));
            s0 = (s0 + 8);
            f0 = func_0021efa8(s0, a1, a2);
            t6 = t6_0;
        } while (((s32)(((s32)(s1) < (s32)((t6_0 & 0xff)))) != 0));
        f0_1 = f0;
    } else {
        sp = (u32)frame;
    }
    t5 = *(u8*)((a0 + 9));
    t7 = (t5 & 1);
    if ((t7 == 0)) {
        if (((s32)((t6 & 0xff)) != 0)) {
            t7_2 = (u32)&D_00370b74;
            t6_3 = (a0 + 0x14);
            t5_4 = 0x80d;
            s1_5 = 0;
            f1 = 65535.0f;
            do {
                t7_2 = (a2 * t5_4);
                s1_5 = (s1_5 + 1);
                t7_2 = (t7_2 + 7);
                a2 = (t7_2 & 0xffff);
                *(f32*)(t6_3) = ((f32)((s32)(a2)) / f1);
                t7_6 = *(u8*)((a0 + 8));
                t7_2 = ((s32)(s1_5) < (s32)(t7_6));
                t6_3 = (t6_3 + 8);
                f0_1 = ((f32)((s32)(a2)) / f1);
            } while (((s32)(t7_2) != 0));
            t5 = *(u8*)((a0 + 9));
        }
        *(u8*)((a0 + 9)) = (t5 | 1);
    }
    return f0_1;
}
