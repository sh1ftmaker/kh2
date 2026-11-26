// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x0011dd08 func_0011dd08
// minilink-rodata 0x0036a924   (float literals live here in the original)
void func_0011dd08(u32 a0, u32 a1) asm("func_0011dd08");
void func_0011dd08(u32 a0, u32 a1) {
    u8 frame[32];
    u32 t7;
    u32 t6;
    u32 a1_0;
    u32 t7_1;
    u32 t5;
    f32 f3;
    u8 t7_2;
    f32 f6;
    f32 f2;
    f32 f2_3;
    u8 t7_4;
    f32 f5;
    f32 f3_5;
    f32 f0;
    f32 f2_6;
    f32 f3_7;
    f32 f5_8;
    f32 f6_9;
    f32 f1;
    f32 f4;
    t7 = *(u32*)(a1);
    *(f32*)((u32)frame) = *(f32*)((t7 + 0xd0));
    *(f32*)(((u32)frame + 4)) = *(f32*)((t7 + 0xd4));
    *(f32*)(((u32)frame + 8)) = *(f32*)((t7 + 0xd8));
    *(f32*)(((u32)frame + 0xc)) = 1.0f;
    *(f32*)(((u32)frame + 0x10)) = *(f32*)((t7 + 0xdc));
    *(f32*)(((u32)frame + 0x14)) = *(f32*)((t7 + 0xe0));
    *(f32*)(((u32)frame + 0x18)) = *(f32*)((t7 + 0xe4));
    *(f32*)(((u32)frame + 0x1c)) = 1.0f;
    t6 = *(u32*)((a1 + 4));
    a1_0 = (a1 + 4);
    while (((s32)(t6) != 0)) {
        if ((*(f32*)((t6 + 0xd0)) < *(f32*)((u32)frame))) {
            *(f32*)((u32)frame) = *(f32*)((t6 + 0xd0));
        }
        if ((*(f32*)((t6 + 0xd4)) < *(f32*)(((u32)frame + 4)))) {
            *(f32*)(((u32)frame + 4)) = *(f32*)((t6 + 0xd4));
        }
        if ((*(f32*)((t6 + 0xd8)) < *(f32*)(((u32)frame + 8)))) {
            *(f32*)(((u32)frame + 8)) = *(f32*)((t6 + 0xd8));
        }
        if ((*(f32*)(((u32)frame + 0x10)) < *(f32*)((t6 + 0xdc)))) {
            *(f32*)(((u32)frame + 0x10)) = *(f32*)((t6 + 0xdc));
        }
        if ((*(f32*)(((u32)frame + 0x14)) < *(f32*)((t6 + 0xe0)))) {
            *(f32*)(((u32)frame + 0x14)) = *(f32*)((t6 + 0xe0));
        }
        if ((*(f32*)(((u32)frame + 0x18)) < *(f32*)((t6 + 0xe4)))) {
            *(f32*)(((u32)frame + 0x18)) = *(f32*)((t6 + 0xe4));
        }
        t7_1 = *(u32*)((a1_0 + 4));
        a1_0 = (a1_0 + 4);
        t6 = t7_1;
    }
    t5 = 0;
    do {
        *(f32*)((a0 + 0xc)) = 1.0f;
        if (((s32)((t5 & 2)) != 0)) {
            f3 = *(f32*)(((u32)frame + 4));
            t7_2 = (t5 & 1);
            f6 = *(f32*)(((u32)frame + 0x10));
            *(f32*)(a0) = f6;
            f2 = *(f32*)(((u32)frame + 0x14));
            if (((s32)(t7_2) == 0)) {
                f3 = f2;
            }
            f0 = f3;
            f2_6 = f2;
            f3_7 = f3;
            f5_8 = *(f32*)((u32)frame);
            f6_9 = f6;
        } else {
            f2_3 = *(f32*)(((u32)frame + 0x14));
            t7_4 = (t5 & 1);
            f5 = *(f32*)((u32)frame);
            *(f32*)(a0) = f5;
            f3_5 = *(f32*)(((u32)frame + 4));
            if (((s32)(t7_4) == 0)) {
                f2_3 = f3_5;
            }
            f0 = f2_3;
            f2_6 = f2_3;
            f3_7 = f3_5;
            f5_8 = f5;
            f6_9 = *(f32*)(((u32)frame + 0x10));
        }
        *(f32*)((a0 + 4)) = f0;
        f1 = *(f32*)(((u32)frame + 0x18));
        f4 = *(f32*)(((u32)frame + 8));
        if (((s32)((t5 & 4)) == 0)) {
            f1 = f4;
        }
        *(f32*)((a0 + 8)) = f1;
        a0 = (a0 + 0x10);
        t5 = (t5 + 1);
    } while (((s32)(((s32)(t5) < (s32)(8))) != 0));
    return;
}
