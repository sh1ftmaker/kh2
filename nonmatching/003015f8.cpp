// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00365c48 asm("D_00365c48");
extern "C" void func_00302e10(u32) asm("func_00302e10");
extern "C" void func_00302e90(u32, u32) asm("func_00302e90");
extern "C" void func_00303808(u32) asm("func_00303808");

// 0x003015f8 func_003015f8
u32 func_003015f8(u32 a0) asm("func_003015f8");
u32 func_003015f8(u32 a0) {
    u32 a0_0;
    u32 t6;
    u32 t7;
    u32 t6_1;
    u32 a1_2;
    u32 t5;
    u32 t5_3;
    u32 t6_4;
    u32 t7_5;
    u32 t6_6;
    u32 v0;
    u32 t5_7;
    u32 t6_8;
    u32 t7_9;
    u32 t6_10;
    u32 v0_11;
    a0_0 = *(u32*)((a0 + 0x54));
    if ((a0_0 == 0)) {
        t6 = *(u32*)(&D_00365c48);
        *(u32*)((a0 + 0x54)) = t6;
        t7 = *(u32*)((t6 + 0x38));
    } else {
        t7 = *(u32*)((a0_0 + 0x38));
    }
    if ((t7 == 0)) {
        func_00302e10(t6);
    }
    t6_1 = *(u16*)((a0 + 0xc));
    if (((t6_1 & 8) == 0)) {
        if (((s32)((t6_1 & 0x10)) != 0)) {
            if (((t6_1 & 4) != 0)) {
                a1_2 = *(u32*)((a0 + 0x30));
                if (((s32)(a1_2) != 0)) {
                    if ((a1_2 != (a0 + 0x40))) {
                        func_00302e90(*(u32*)((a0 + 0x54)), a1_2);
                        *(u32*)((a0 + 0x30)) = 0;
                        t6_1 = *(u16*)((a0 + 0xc));
                    } else {
                        *(u32*)((a0 + 0x30)) = 0;
                    }
                }
                *(u32*)((a0 + 4)) = 0;
                *(u16*)((a0 + 0xc)) = (t6_1 & 0xffffffdb);
                t5 = *(u32*)((a0 + 0x10));
                *(u32*)(a0) = t5;
                t5_3 = t5;
                t6_1 = (t6_1 & 0xffffffdb);
            } else {
                t5_3 = *(u32*)((a0 + 0x10));
            }
            *(u16*)((a0 + 0xc)) = (t6_1 | 8);
            if ((t5_3 == 0)) {
                func_00303808(a0);
            }
            t6_4 = *(u16*)((a0 + 0xc));
            if (((s32)(((s32)(((t6_4 & 1) << 0x10)) >> 0x10)) != 0)) {
                *(u32*)((a0 + 8)) = 0;
                t7_5 = *(u32*)((a0 + 0x14));
                *(u32*)((a0 + 0x18)) = -(t7_5);
            } else {
                t6_6 = ((s32)((t6_4 & 2)) == 0) ? *(u32*)((a0 + 0x14)) : 0;
                *(u32*)((a0 + 8)) = t6_6;
            }
            v0 = 0;
        } else {
            v0 = 0xffffffff;
        }
        v0_11 = v0;
    } else {
        t5_7 = *(u32*)((a0 + 0x10));
        if ((t5_7 == 0)) {
            func_00303808(a0);
        }
        t6_8 = *(u16*)((a0 + 0xc));
        if (((s32)(((s32)(((t6_8 & 1) << 0x10)) >> 0x10)) != 0)) {
            *(u32*)((a0 + 8)) = 0;
            t7_9 = *(u32*)((a0 + 0x14));
            *(u32*)((a0 + 0x18)) = -(t7_9);
        } else {
            t6_10 = ((s32)((t6_8 & 2)) == 0) ? *(u32*)((a0 + 0x14)) : 0;
            *(u32*)((a0 + 8)) = t6_10;
        }
        v0_11 = 0;
    }
    return v0_11;
}
