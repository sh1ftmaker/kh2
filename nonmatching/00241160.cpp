// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ebf8 asm("D_0035ebf8");
extern "C" u32 D_0035ec00 asm("D_0035ec00");
extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec98 asm("D_0035ec98");
extern "C" u32 func_00240108() asm("func_00240108");
extern "C" u32 func_002416d8(u32) asm("func_002416d8");
extern "C" u32 func_002ff1a4(u32, u32) asm("func_002ff1a4");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");

// 0x00241160 func_00241160
u32 func_00241160() asm("func_00241160");
u32 func_00241160() {
    u32 s5;
    u32 s2;
    u32 s1;
    u32 s3;
    u32 s0;
    u32 s6;
    u32 s6_0;
    u32 s6_1;
    s5 = 0;
    if (((s32)(*(u32*)(*(u32*)(&D_0035ec98))) > 0)) {
        s2 = 0;
        s1 = 0;
        do {
            s3 = *(u32*)(*(u32*)(&D_0035ec98));
            if (((*(u32*)(((s1 + *(u32*)(&D_0035ec98)) + 8)) & 2) != 0)) {
                if (((s32)(func_002ff3fc((s1 + *(u32*)(&D_0035ec98)) + 0x10)) != 0)) {
                    if (((s32)(func_002ff1a4((*(u32*)(&D_0035ec98) + s1) + 0x10, *(u32*)(&D_0035ebf8))) == 0)) {
                        s5 = (s5 | 1);
                        if ((*(u32*)(((s1 + *(u32*)(&D_0035ec98)) + 0xc)) != 0x3c4)) {
                            s5 = (s5 | 0x100);
                            *(u32*)(((s1 + *(u32*)(&D_0035ec98)) + 8)) = (*(u32*)(((s1 + *(u32*)(&D_0035ec98)) + 8)) | 0x10);
                        }
                    } else {
                        if ((func_002ff1a4((*(u32*)(&D_0035ec98) + (s2 * 0x28)) + 0x10, *(u32*)(&D_0035ec00)) == 0)) {
                            s5 = (s5 | 2);
                            if ((*(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 0xc)) != 0x8a58)) {
                                s5 = (s5 | 0x200);
                                *(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) = (*(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) | 0x10);
                            }
                        } else {
                            if (((s32)(func_002ff1a4((*(u32*)(&D_0035ec98) + (s2 * 0x28)) + 0x10, *(u32*)(&D_0035ec88))) == 0)) {
                                s5 = (s5 | 4);
                                s0 = ((s2 * 0x28) + *(u32*)(&D_0035ec98));
                                if ((*(u32*)((s0 + 0xc)) != func_002416d8(2))) {
                                    s5 = (s5 | 0x400);
                                    *(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) = (*(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) | 0x10);
                                }
                            } else {
                                s5 = (s5 | 0x10);
                                *(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) = (*(u32*)((((s2 * 0x28) + *(u32*)(&D_0035ec98)) + 8)) | 0x10);
                            }
                        }
                        s6 = (s2 * 0x28);
                    }
                    s6_0 = s6;
                }
                s2 = (s2 + 1);
                s6_1 = s6_0;
            } else {
                s2 = (s2 + 1);
            }
            s1 = (s1 + 0x28);
        } while (((s32)(((s32)(s2) < (s32)(s3))) != 0));
    }
    return s5;
}
