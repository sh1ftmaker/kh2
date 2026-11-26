// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00146088(u32, u32, u32) asm("func_00146088");
extern "C" u32 func_001461f0(u32, u32) asm("func_001461f0");
extern "C" u32 func_00146390(u32, u32, u32) asm("func_00146390");
extern "C" void func_00146100(u32, u32, u32) asm("func_00146100");

// 0x00146390 func_00146390
u32 func_00146390(u32 a0, u32 a1, u32 a2) asm("func_00146390");
u32 func_00146390(u32 a0, u32 a1, u32 a2) {
    u32 s3;
    u32 v0;
    u32 s4;
    u32 s1;
    u32 s0;
    u32 t7;
    u32 t7_0;
    u32 t6;
    u32 v0_1;
    u32 s1_2;
    u32 t7_3;
    u32 t7_4;
    u32 v0_5;
    s3 = (*(u32*)((a0 + 4)) + (a1 * 0x30));
    v0 = func_00146088(a0, (*(u32*)((a0 + 4)) + (a1 * 0x30)) + 0x10, a2);
    if ((v0 != 1)) {
        s4 = *(s16*)((s3 + 0x2a));
        s1 = *(s16*)((s3 + 0x28));
        if (((s32)(((s32)(s1) < (s32)(s4))) != 0)) {
            s0 = (s1 * 0x1c);
            t7 = *(u32*)((a0 + 8));
            do {
                t7_0 = *(u32*)((a0 + 8));
                t7 = (s0 + t7_0);
                s0 = (s0 + 0x1c);
                t6 = *(u8*)(t7);
                if (((s32)(t6) != 0)) {
                    func_00146100(a0, a2, (s32)((s1 << 0x10)) >> 0x10);
                }
                s1 = (s1 + 1);
                t7 = ((s32)(s1) < (s32)(s4));
            } while ((t7 != 0));
        }
        v0_1 = func_001461f0(a0, s3);
        s1_2 = 0;
        t7_3 = *(s16*)(s3);
        do {
            s3 = (s3 + 2);
            t7_4 = *(s16*)(s3);
            if ((t7_4 == 0xffffffff)) {
                break;
            }
            s1_2 = (s1_2 + 1);
            v0_5 = func_00146390(a0, t7_4, a2);
            t7_3 = ((s32)(s1_2) < (s32)(8));
            v0_1 = v0_5;
        } while ((t7_3 != 0));
        v0 = v0_1;
    }
    return v0;
}
