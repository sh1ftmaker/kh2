// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dc9c asm("D_0034dc9c");
extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 D_0034dcb0 asm("D_0034dcb0");
extern "C" u32 D_004fa440 asm("D_004fa440");
extern "C" u32 D_01c5f460 asm("D_01c5f460");
extern "C" u32 func_00170d38(u32) asm("func_00170d38");
extern "C" void func_001700e8(u32, u32) asm("func_001700e8");
extern "C" void func_001705a8() asm("func_001705a8");

// 0x00170670 func_00170670
void func_00170670() asm("_ZN2YS10CACHE_BUFF15FlushCompactionEv");
void func_00170670() {
    u8 frame[32];
    u32 s3;
    u32 t6;
    u32 t7;
    u32 s0;
    u32 s1;
    u32 t7_0;
    u32 s2;
    u32 v0;
    u32 v0_1;
    u32 t7_2;
    u32 t5;
    u32 t7_3;
    u32 t7_4;
    u32 t7_5;
    u32 t6_6;
    u32 t7_7;
    u32 t7_8;
    u32 s2_9;
    u32 s2_10;
    func_001705a8();
    s3 = 0;
    t6 = ((u32)frame + 4);
    t7 = 5;
    do {
        *(u32*)(t6) = 0;
        t6 = (t6 + 4);
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    *(u32*)((u32)frame) = (u32)&D_004fa440;
    s0 = *(u32*)(&D_0034dca0);
    s1 = *(u32*)(&D_0034dc9c);
    if (((s32)(s0) != 0)) {
        do {
            *(u32*)((s0 + 0x24)) = 0;
            t7_0 = *(u32*)((s0 + 0x28));
            if (((s32)(t7_0) >= 0)) {
                s2 = *(u32*)((s0 + 0x3c));
                v0 = (func_00170d38(t7_0) << 2);
                v0_1 = (v0 + (u32)frame);
                t7_2 = *(u32*)(v0_1);
                if ((t7_2 == 0)) {
                    t5 = (v0 + (u32)&D_01c5f460);
                    *(u32*)(v0_1) = *(u32*)((u32)frame);
                    t7_3 = *(u32*)((u32)frame);
                    *(u32*)((u32)frame) = (t7_3 + *(u32*)(t5));
                    *(u32*)((s0 + 0x30)) = *(u32*)(v0_1);
                } else {
                    *(u32*)((s0 + 0x30)) = t7_2;
                }
                t7_4 = *(u32*)(v0_1);
                t7_5 = (t7_4 + *(u32*)((s0 + 0x2c)));
                *(u32*)(v0_1) = t7_5;
                t6_6 = *(u32*)((u32)frame);
                *(u32*)((u32)frame) = (((u32)(*(u32*)((u32)frame)) < (u32)(t7_5)) ? t7_5 : t6_6);
                t7_7 = *(u32*)((s0 + 0x28));
                if (((((s32)(t7_7) < (s32)(0x2710)) ^ 1) != 0)) {
                    t7_8 = *(u32*)(v0_1);
                    if (((s32)(((u32)(s1) < (u32)(t7_8))) != 0) || ((s32)(s3) >= (s32)(0x80))) {
                        func_001700e8(s0, 0);
                    }
                }
                s0 = s2;
                s2_10 = s2;
            } else {
                *(u32*)((s0 + 0x30)) = (s1 - *(u32*)((s0 + 0x2c)));
                s2_9 = *(u32*)((s0 + 0x3c));
                s0 = s2_9;
                s1 = (s1 - *(u32*)((s0 + 0x2c)));
                s2_10 = s2_9;
            }
            s3 = (s3 + 1);
        } while (((s32)(s2_10) != 0));
    }
    *(u32*)(&D_0034dcb0) = s1;
    return;
}
