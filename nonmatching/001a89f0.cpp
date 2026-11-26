// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_01c6cc08 asm("D_01c6cc08");
extern "C" u32 D_01c6cc10 asm("D_01c6cc10");
extern "C" u32 func_0016fab0(u32, u32) asm("func_0016fab0");
extern "C" u32 func_001a8930(u32, u32, u32) asm("func_001a8930");

// 0x001a89f0 func_001a89f0
void func_001a89f0() asm("func_001a89f0");
void func_001a89f0() {
    u32 t7;
    u32 s6;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    u32 t7_0;
    u32 t6;
    u32 s1_1;
    u32 s0;
    u32 t4;
    u32 t5;
    u32 t6_2;
    u32 t3;
    u32 t5_3;
    u32 t7_4;
    t7 = ((u32)&D_01c6cc10 + 0x10);
    s6 = (u32)&D_0032bae0;
    s4 = *(u8*)(&D_0032bae0);
    s3 = 0;
    s2 = 0;
    s1 = 0x11;
    do {
        *(u16*)(t7) = 0;
        s1 = (s1 + -1);
        t7 = (t7 + 2);
    } while (((s32)(s1) >= 0));
    t7_0 = *(u32*)(&D_01c6cc08);
    t6 = *(u32*)((t7_0 + 4));
    if (((s32)(t6) > 0)) {
        s1_1 = 0;
        s0 = (t7_0 + 8);
        do {
            if (((s32)(func_001a8930(s0, s4, *(u8*)((s6 + 1)))) != 0)) {
                t4 = *(u32*)((s0 + 8));
                t5 = *(u32*)((s0 + 0xc));
                s2 = (((s32)(0) < (s32)(t4)) ? t4 : s2);
                s3 = (((s32)(0) < (s32)(t5)) ? t5 : s3);
                t6_2 = (0 << 1);
                t3 = 0;
                do {
                    t3 = (t3 + 1);
                    t5_3 = *(u16*)(((t6_2 + s0) + 0x10));
                    t6_2 = (t6_2 + (u32)&D_01c6cc10);
                    if (((s32)((t5_3 & 0xffff)) != 0)) {
                        *(u16*)((t6_2 + 0x10)) = t5_3;
                    }
                    t6_2 = (t3 << 1);
                } while (((s32)(((s32)(t3) < (s32)(0x12))) != 0));
            }
            s1_1 = (s1_1 + 1);
            t7_4 = *(u32*)((*(u32*)(&D_01c6cc08) + 4));
            s0 = (s0 + 0x34);
        } while (((s32)(((s32)(s1_1) < (s32)(t7_4))) != 0));
    }
    func_0016fab0(s2, s3);
    return;
}
