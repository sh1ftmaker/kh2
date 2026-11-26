// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001003c8(u32) asm("func_001003c8");
extern "C" u32 func_001004c0(u32, u32, u32, u32) asm("func_001004c0");
extern "C" u32 func_00100920(u32, u32) asm("func_00100920");
extern "C" u32 func_001009a0(u32) asm("func_001009a0");

// 0x001011e0 func_001011e0
void func_001011e0(u32 a0, u32 a1, u32 a2) asm("func_001011e0");
void func_001011e0(u32 a0, u32 a1, u32 a2) {
    u8 a0_0;
    s32 s2;
    u32 s4;
    u32 s5;
    u32 s4_1;
    u32 v0;
    u32 loc_0;
    u32 loc_4;
    u32 v0_2;
    a0_0 = ((*(u64*)((a0 + 0x10)) >> 3) & 0xff);
    s2 = (s32)((u64)(((*(u64*)((a0 + 0x10)) >> 3) & 0xff)));
    if (((s32)(*(u32*)(a1)) != 0)) {
        s4 = 0;
        s5 = func_00100920(a0_0 & 0xff, a0);
        do {
            if ((*(u32*)((a1 + 4)) != 0)) {
                if (((s32)((s32)((u64)(((*(u64*)((a0 + 0x10)) >> 2) & 1)))) != 0)) {
                    if ((((a1 - *(u32*)((a1 + 4))) + 4) != s4)) {
                        s4_1 = ((a1 - *(u32*)((a1 + 4))) + 4);
                        v0 = func_001009a0((a1 - *(u32*)((a1 + 4))) + 4);
                        s2 = v0;
                        s4 = s4_1;
                        s5 = func_00100920(v0 & 0xff, a0);
                    }
                }
                if (((s32)(s2) == 0)) {
                    loc_0 = *(u32*)((a1 + 8));
                    loc_4 = *(u32*)((a1 + 0xc));
                    if (((s32)(*(u32*)((a1 + 8))) != 0)) {
                        if (((s32)(((u32)((a2 - *(u32*)((a1 + 8)))) < (u32)(loc_4))) != 0)) {
                            return;
                        }
                    }
                } else {
                    func_001004c0(s2 & 0xf, 0, func_001004c0(s2 & 0xff, s5, a1 + 8, (u32)&loc_0), (u32)&loc_4);
                    v0_2 = func_001003c8(s2 & 0xff);
                    if (((s32)(((u32)(v0_2) < (u32)(4))) != 0)) {
                        v0_2 = (s32)((u64)((((u64)(1) << (v0_2 << 3)) + -1)));
                    } else {
                        v0_2 = 0xffffffff;
                    }
                    if (((s32)((loc_0 & v0_2)) != 0)) {
                        if (((s32)(((u32)((a2 - loc_0)) < (u32)(loc_4))) != 0)) {
                            return;
                        }
                    }
                }
            }
            a1 = ((a1 + *(u32*)(a1)) + 4);
        } while (((s32)(*(u32*)(a1)) != 0));
    }
    return;
}
