// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ebf8 asm("D_0035ebf8");
extern "C" u32 D_0035ec00 asm("D_0035ec00");
extern "C" u32 D_0035ec08 asm("D_0035ec08");
extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 D_0035ec9c asm("D_0035ec9c");
extern "C" u32 D_003716e0 asm("D_003716e0");
extern "C" u32 D_003716e8 asm("D_003716e8");
extern "C" u32 func_002349c8(u32, u32) asm("func_002349c8");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");
extern "C" void func_00240118(u32, u32, u32) asm("func_00240118");

// 0x00241a88 func_00241a88
u32 func_00241a88(u8 a0) asm("_ZN2Tz5MCard11CheckSystemEb");
u32 func_00241a88(u8 a0) {
    u32 s1;
    u32 v0;
    u32 s4;
    u32 t6;
    s1 = *(u32*)(&D_0035ec9c);
    func_00240118(*(u32*)(&D_0035ec88), 0, a0 ? 1 : 2);
    v0 = func_002349c8(*(s8*)(*(u32*)(&D_0035ec94)), 0);
    if (((s32)(((s32)(v0) < (s32)(3))) == 0)) {
        s4 = 0;
        if (((s32)(v0) > 0)) {
            do {
                if ((func_002ff1a4(s1 + 0x20, (u32)&D_003716e0) != 0)) {
                    if ((func_002ff1a4(s1 + 0x20, (u32)&D_003716e8) != 0)) {
                        if (((*(u16*)((s1 + 0x14)) & 0x20) == 0)) {
                            if (((s32)(func_002ff1a4(s1 + 0x20, *(u32*)(&D_0035ec88))) == 0)) {
                                if ((*(u32*)((s1 + 0x10)) == 0x400)) {
                                    s4 = (s4 | 4);
                                }
                            } else {
                                if (((s32)(func_002ff1a4(s1 + 0x20, *(u32*)(&D_0035ebf8))) == 0)) {
                                    if ((*(u32*)((s1 + 0x10)) == 0x3c4)) {
                                        s4 = (s4 | 1);
                                    }
                                } else {
                                    if ((func_002ff1a4(s1 + 0x20, a0 ? *(u32*)(&D_0035ec00) : *(u32*)(&D_0035ec08)) == 0)) {
                                        s4 = ((*(u32*)((s1 + 0x10)) ^ 0x8a58) ? s4 : (s4 | 2));
                                    }
                                }
                            }
                        }
                    }
                }
                s1 = (s1 + 0x40);
                v0 = (v0 + -1);
            } while (((s32)(v0) != 0));
        }
        t6 = ((u32)((s4 ^ 7)) < (u32)(1));
    } else {
        t6 = 0;
    }
    return t6;
}
