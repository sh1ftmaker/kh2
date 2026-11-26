// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d7f40(u32, u32) asm("func_001d7f40");

// 0x001ce0a8 func_001ce0a8
void func_001ce0a8(u32 a0) asm("func_001ce0a8");
void func_001ce0a8(u32 a0) {
    u32 a0_0;
    u32 s0;
    u32 t3;
    u32 t4;
    u32 t7;
    u32 s2;
    u32 t7_1;
    u32 v0;
    u32 v0_2;
    u32 v0_3;
    u32 t7_4;
    u32 t7_5;
    u32 s0_6;
    if (((s32)(*(u32*)(*(u32*)((a0 + 0x44)))) > 0)) {
        a0_0 = *(u32*)((a0 + 0x44));
        s0 = 0;
        t3 = 0;
        t4 = *(u32*)((a0 + 0x44));
        do {
            t7 = ((s0 >> 5) << 2);
            s2 = (a0 + 0x60);
            t7_1 = (t7 + s2);
            if (((s32)((*(u32*)(t7_1) & (1 << (s0 & 0x1f)))) != 0)) {
                v0 = ((s0 * 0x44) + a0_0);
                if ((*(s8*)((v0 + 6)) == *(u8*)((v0 + 4)))) {
                    return;
                }
                if ((*(u16*)((v0 + 0xc)) != *(u32*)((*(u32*)((a0 + 0x40)) + 0x154)))) {
                    return;
                }
                if ((t3 == 0)) {
                    if (((s32)(*(s8*)((v0 + 6))) >= 0)) {
                        v0_2 = func_001d7f40(a0_0, *(s8*)((v0 + 6)));
                        v0_3 = (v0_2 * 0x44);
                        t3 = ((*(u32*)((a0 + 0x44)) + v0_3) + 4);
                        t4 = *(u32*)((a0 + 0x44));
                        t7_4 = *(u32*)(*(u32*)((a0 + 0x44)));
                    } else {
                        t7_4 = *(u32*)(t4);
                    }
                    t7_5 = t7_4;
                } else {
                    t7_5 = *(u32*)(t4);
                }
                t7_1 = t7_5;
            } else {
                t7_1 = *(u32*)(t4);
            }
            s0_6 = (s0 + 1);
            a0_0 = t4;
            s0 = s0_6;
        } while (((s32)(((s32)(s0_6) < (s32)(t7_1))) != 0));
    }
    return;
}
