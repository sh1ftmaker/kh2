// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001f6648 asm("D_001f6648");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 D_01d9eab4 asm("D_01d9eab4");
extern "C" u32 func_0021ee48(u32, u32, u32, u32, u32, u32, u32) asm("func_0021ee48");

// 0x001f6778 func_001f6778
u32 func_001f6778(u32 a0, u32 a1, u32 a2) asm("func_001f6778");
u32 func_001f6778(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 t5;
    u32 t6_1;
    u32 s0;
    u32 t6_2;
    u32 t7_3;
    u32 t7_4;
    u32 v0;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    t6 = *(u32*)(&D_01d9eab4);
    if (((s32)(t6) == 0)) {
        t6_0 = *(u32*)(&D_01d9ea9c);
        if (((s32)(t6_0) == 0)) {
            t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
            if (((t7 & ((u64)(0xff) | 0xff00)) == 0)) {
                t5 = *(u8*)((a1 + 0xd));
                if (((t5 & 0xff) != 0)) {
                    t6_1 = *(u32*)(*(u32*)((a2 + 0xc)));
                    s0 = ((a0 + t6_1) + 0xa0);
                    t6_2 = *(u8*)((s0 + 2));
                    if (((s32)((t6_2 & 0xff)) == 0)) {
                        *(u8*)((s0 + 2)) = t5;
                        t7_3 = *(u32*)((a1 + 0x10));
                        if ((t7_3 != 0xffffffff)) {
                            t7_4 = *(u32*)((a1 + 0x18));
                            if ((t7_4 != 0xffffffff)) {
                                v0 = func_0021ee48(a0, a1, (u32)&D_001f6648, s0, *(s16*)((a1 + 4)), *(u8*)((a1 + 0xe)), *(u8*)((a1 + 0xc)));
                                *(u8*)((s0 + 2)) = (*(u8*)((s0 + 2)) + -1);
                                v0_5 = v0;
                            }
                            v0_6 = v0_5;
                        }
                        v0_7 = v0_6;
                    } else {
                        *(u8*)((s0 + 2)) = (t6_2 + -1);
                    }
                    v0_8 = v0_7;
                }
                v0_9 = v0_8;
            }
            v0_10 = v0_9;
        }
        v0_11 = v0_10;
    }
    return v0_11;
}
