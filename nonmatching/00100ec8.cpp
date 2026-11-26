// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001003c8(u32) asm("func_001003c8");
extern "C" u32 func_00100920(u32, u32) asm("func_00100920");
extern "C" u32 func_001009a0(u32, u32) asm("func_001009a0");
extern "C" void func_001004c0(u32, u32, u32, u32) asm("func_001004c0");

// 0x00100ec8 func_00100ec8
u32 func_00100ec8(u32 a0, u32 a1) asm("func_00100ec8");
u32 func_00100ec8(u32 a0, u32 a1) {
    u32 s6;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s4_0;
    u32 v0;
    u32 s1;
    u32 loc_0;
    u32 v0_1;
    u32 s5_2;
    if (((s32)(*(u32*)(a1)) != 0)) {
        s6 = 0;
        s5 = 0;
        s4 = 0;
        s3 = 0;
        do {
            if (((s32)(*(u32*)((a1 + 4))) != 0)) {
                if ((((a1 - *(u32*)((a1 + 4))) + 4) != s4)) {
                    s4_0 = ((a1 - *(u32*)((a1 + 4))) + 4);
                    v0 = func_001009a0((a1 - *(u32*)((a1 + 4))) + 4, a1);
                    s3 = v0;
                    if (((s32)((u64)(((*(u64*)((a0 + 0x10)) >> 3) & 0xff))) == 0xff)) {
                        *(u64*)((a0 + 0x10)) = ((*(u64*)((a0 + 0x10)) & 0xfffff807) | ((s3 & 0xff) << 3));
                    } else {
                        if (((s32)((u64)(((*(u64*)((a0 + 0x10)) >> 3) & 0xff))) != s3)) {
                            *(u64*)((a0 + 0x10)) = (*(u64*)((a0 + 0x10)) | 4);
                        }
                    }
                    s1 = (v0 & 0xff);
                    s4 = s4_0;
                    s6 = func_00100920(v0 & 0xff, a0);
                } else {
                    s1 = (s3 & 0xff);
                }
                func_001004c0(s1, s6, a1 + 8, (u32)&loc_0);
                v0_1 = func_001003c8(s1);
                if (((s32)(((u32)(v0_1) < (u32)(4))) != 0)) {
                    v0_1 = (s32)((u64)((((u64)(1) << (v0_1 << 3)) + -1)));
                } else {
                    v0_1 = 0xffffffff;
                }
                if (((loc_0 & v0_1) != 0)) {
                    s5 = (s5 + 1);
                    if (((s32)(((u32)(loc_0) < (u32)(*(u32*)(a0)))) != 0)) {
                        *(u32*)(a0) = loc_0;
                    }
                }
            }
            a1 = ((a1 + *(u32*)(a1)) + 4);
        } while (((s32)(*(u32*)(a1)) != 0));
        s5_2 = s5;
    } else {
        s5_2 = 0;
    }
    return s5_2;
}
