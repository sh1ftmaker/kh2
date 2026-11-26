// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f250 asm("D_0034f250");
extern "C" u32 func_0019ac30(u32, u32) asm("func_0019ac30");
extern "C" void func_001956e8(u32, u32) asm("func_001956e8");

// 0x0019aec0 func_0019aec0
void func_0019aec0(u32 a0, u32 a1) asm("_ZN2YS10UNIT_GROUP13check_levelupEv");
void func_0019aec0(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    u32 s1;
    u32 t5;
    u32 t6_0;
    u32 t6_1;
    u32 t7_2;
    u32 t7_3;
    u32 t5_4;
    u32 t7_5;
    u32 t7_6;
    t6 = *(u32*)((a0 + 8));
    t7 = *(u16*)((t6 + 4));
    if (((s32)(t7) != 0)) {
        s1 = 0;
        t5 = t6;
        do {
            t6_0 = *(u8*)((((s1 << 6) + t6) + 0x48));
            if ((t6_0 == 2)) {
                t6_1 = *(u32*)((a0 + 0x24));
                t7_2 = *(u8*)((((s1 << 6) + t6_1) + 0x30));
                if (((s32)(t7_2) >= (s32)(a1))) {
                    if (((s32)(func_0019ac30(a0, *(u16*)((((s1 << 6) + t6_1) + 0x1e)))) != 0)) {
                        t7_3 = *(u32*)((a0 + 0x24));
                        func_001956e8((u32)&D_0034f250, *(u16*)((((s1 << 6) + t7_3) + 0x1e)));
                    }
                    t5_4 = *(u32*)((a0 + 8));
                    t5 = t5_4;
                    t7_5 = *(u16*)((t5_4 + 4));
                } else {
                    t7_5 = *(u16*)((t5 + 4));
                }
                t7_6 = t7_5;
            } else {
                t7_6 = *(u16*)((t5 + 4));
            }
            s1 = (s1 + 1);
            t6 = t5;
        } while (((s32)(((s32)(s1) < (s32)(t7_6))) != 0));
    }
    *(u8*)((a0 + 0x20)) = a1;
    return;
}
