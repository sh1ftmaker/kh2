// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e14 asm("D_00349e14");
extern "C" u32 func_00239d10(u32) asm("func_00239d10");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");
extern "C" void func_0023c598(u32) asm("func_0023c598");

// 0x0023ca80 wtarget_0023ca80(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00371500   (float literals live here in the original)
void lift_0023ca80(u32 a0) asm("_Z16wtarget_0023ca80jjjj");
void lift_0023ca80(u32 a0) {
    f32 f1;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s5;
    u32 t3;
    u32 s0;
    u32 s3_0;
    u32 s5_1;
    u32 s1_2;
    u32 s2_3;
    u32 s3_4;
    u32 s5_5;
    u32 t3_6;
    u32 s0_7;
    u32 s3_8;
    u32 s5_9;
    *(f32*)((a0 + 0x3c)) = (*(f32*)((a0 + 0x3c)) + (*(f32*)(&D_00349e14) * *(f32*)((a0 + 0x48))));
    if ((*(u32*)((a0 + 0x38)) != 1)) {
        if (((s32)(*(u32*)((a0 + 0x38))) >= (s32)(2))) {
            if ((*(u32*)((a0 + 0x38)) == 2)) {
                f1 = (*(f32*)((a0 + 0x40)) + (*(f32*)(&D_00349e14) * *(f32*)((a0 + 0x48))));
                *(f32*)((a0 + 0x40)) = f1;
                if ((*(f32*)((a0 + 0x44)) <= f1)) {
                    if ((*(u8*)((a0 + 0x50)) == 0)) {
                        *(u32*)((a0 + 0x38)) = 3;
                        *(f32*)((a0 + 0x40)) = (*(f32*)((a0 + 0x44)) - 1.0f);
                        if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
                            ((void(*)(u32))(*(u32*)((a0 + 0xc))))(a0);
                        }
                    }
                }
                if (((s32)(*(u32*)((a0 + 0x34))) > 0)) {
                    s1 = (*(u32*)((a0 + 0x10)) + (*(u16*)((*(u32*)((a0 + 0x14)) + (*(u32*)((a0 + 0x4c)) * 0x14))) * 0x18));
                    s2 = 0;
                    s3 = 0;
                    s5 = 0;
                    t3 = *(u32*)((a0 + 0x34));
                    do {
                        s0 = (*(u32*)((a0 + 0x30)) + s2);
                        if (((f32)(*(s32*)((s1 + 0xc))) <= *(f32*)((a0 + 0x40)))) {
                            func_0023acd8(s0);
                            if (((s32)(func_00239d10(s0)) != 0)) {
                                s5 = 1;
                            }
                            t3 = *(u32*)((a0 + 0x34));
                        } else {
                            s5 = 1;
                        }
                        s3_0 = (s3 + 1);
                        s1 = (s1 + 0x18);
                        s2 = (s2 + 0x158);
                        s3 = s3_0;
                    } while (((s32)(((s32)(s3_0) < (s32)(t3))) != 0));
                    s5_1 = s5;
                } else {
                    s5_1 = 0;
                }
                if ((s5_1 == 0)) {
                    *(u32*)((a0 + 0x38)) = 3;
                }
            }
        }
    } else {
        *(u32*)((a0 + 0x38)) = 2;
        func_0023c598(a0);
        if (((s32)(*(u32*)((a0 + 0x34))) > 0)) {
            s1_2 = (*(u32*)((a0 + 0x10)) + (*(u16*)((*(u32*)((a0 + 0x14)) + (*(u32*)((a0 + 0x4c)) * 0x14))) * 0x18));
            s2_3 = 0;
            s3_4 = 0;
            s5_5 = 0;
            t3_6 = *(u32*)((a0 + 0x34));
            do {
                s0_7 = (*(u32*)((a0 + 0x30)) + s2_3);
                if (((f32)(*(s32*)((s1_2 + 0xc))) <= *(f32*)((a0 + 0x40)))) {
                    func_0023acd8(s0_7);
                    if (((s32)(func_00239d10(s0_7)) != 0)) {
                        s5_5 = 1;
                    }
                    t3_6 = *(u32*)((a0 + 0x34));
                } else {
                    s5_5 = 1;
                }
                s3_8 = (s3_4 + 1);
                s1_2 = (s1_2 + 0x18);
                s2_3 = (s2_3 + 0x158);
                s3_4 = s3_8;
            } while (((s32)(((s32)(s3_8) < (s32)(t3_6))) != 0));
            s5_9 = s5_5;
        } else {
            s5_9 = 0;
        }
        if ((s5_9 == 0)) {
            *(u32*)((a0 + 0x38)) = 3;
        }
    }
    return;
}
