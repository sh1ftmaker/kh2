// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00143b88(u32, u32, u32, u32, u32) asm("func_00143b88");
extern "C" void func_0018ddc0(u32, u32, u32, u32) asm("func_0018ddc0");

// 0x0018dc28 func_0018dc28
// minilink-rodata 0x0036ccc8   (float literals live here in the original)
void func_0018dc28(u32 a0, u32 a1, u32 a2) asm("_ZN2YS6ATTACK12check_bg_hitERKN2kn7FVectorES4_");
void func_0018dc28(u32 a0, u32 a1, u32 a2) {
    u8 frame[80];
    u32 s1;
    u32 t7;
    u8 t7_0;
    u32 t6;
    u32 t7_1;
    u32 t7_2;
    u32 s3;
    u32 s4;
    u32 t6_3;
    f32 f0;
    u32 s3_4;
    u32 s4_5;
    u32 t6_6;
    f32 f0_7;
    if (((u32)frame != a1)) {
        *(Q16*)((u32)frame) = *(Q16*)(a1);
    }
    s1 = ((u32)frame + 0x10);
    if ((s1 != a2)) {
        *(Q16*)(s1) = *(Q16*)(a2);
    }
    *(u32*)(((u32)frame + 0x40)) = 0;
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    *(f32*)(((u32)frame + 0x1c)) = 1.0f;
    t7 = *(u8*)((*(u32*)((a0 + 0x28)) + 0x12));
    t7_0 = (t7 & 1);
    if (((s32)(t7_0) != 0)) {
        t6 = *(u32*)((a0 + 4));
        if (((s32)((t6 & 8)) == 0)) {
            if (((s32)((t6 & 0x10)) != 0)) {
                t7_1 = 1;
            } else {
                t7_1 = 0;
            }
            t7_2 = t7_1;
        } else {
            t7_2 = 1;
        }
        if (((s32)(t7_2) == 0)) {
            if (((s32)((t6 & 0x100)) == 0)) {
                if (((t6 & 2) == 0)) {
                    s3 = ((u32)frame + 0x30);
                    s4 = ((u32)frame + 0x20);
                    if (((s32)(func_00143b88((u32)frame, s3, s4, (u32)frame + 0x40, 4)) == 0)) {
                        t6_3 = *(u8*)((*(u32*)((a0 + 0x28)) + 0x28));
                        if ((t6_3 != 0)) {
                            if (((u32)frame != a2)) {
                                *(Q16*)((u32)frame) = *(Q16*)(a2);
                            }
                            if ((s1 != a2)) {
                                *(Q16*)(s1) = *(Q16*)(a2);
                            }
                            *(f32*)(((u32)frame + 0xc)) = 1.0f;
                            f0 = *(f32*)(((u32)frame + 0x14));
                            *(f32*)(((u32)frame + 0x14)) = (f0 + (f32)((s32)(*(u8*)((*(u32*)((a0 + 0x28)) + 0x28)))));
                            *(f32*)(((u32)frame + 0x1c)) = 1.0f;
                            if (((s32)(func_00143b88((u32)frame, s3, s4, (u32)frame + 0x40, 4)) != 0)) {
                                func_0018ddc0(a0, *(u16*)(((u32)frame + 0x20)), s3, (u32)frame + 0x40);
                            }
                        }
                    } else {
                        func_0018ddc0(a0, *(u16*)(((u32)frame + 0x20)), s3, (u32)frame + 0x40);
                    }
                }
            } else {
                s3_4 = ((u32)frame + 0x30);
                s4_5 = ((u32)frame + 0x20);
                if (((s32)(func_00143b88((u32)frame, s3_4, s4_5, (u32)frame + 0x40, 4)) == 0)) {
                    t6_6 = *(u8*)((*(u32*)((a0 + 0x28)) + 0x28));
                    if ((t6_6 != 0)) {
                        if (((u32)frame != a2)) {
                            *(Q16*)((u32)frame) = *(Q16*)(a2);
                        }
                        if ((s1 != a2)) {
                            *(Q16*)(s1) = *(Q16*)(a2);
                        }
                        *(f32*)(((u32)frame + 0xc)) = 1.0f;
                        f0_7 = *(f32*)(((u32)frame + 0x14));
                        *(f32*)(((u32)frame + 0x14)) = (f0_7 + (f32)((s32)(*(u8*)((*(u32*)((a0 + 0x28)) + 0x28)))));
                        *(f32*)(((u32)frame + 0x1c)) = 1.0f;
                        if (((s32)(func_00143b88((u32)frame, s3_4, s4_5, (u32)frame + 0x40, 4)) != 0)) {
                            func_0018ddc0(a0, *(u16*)(((u32)frame + 0x20)), s3_4, (u32)frame + 0x40);
                        }
                    }
                } else {
                    func_0018ddc0(a0, *(u16*)(((u32)frame + 0x20)), s3_4, (u32)frame + 0x40);
                }
            }
        }
    }
    return;
}
