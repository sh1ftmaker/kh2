// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00345ad0 asm("D_00345ad0");
extern "C" u32 func_0010cc80(u32) asm("func_0010cc80");
extern "C" u32 func_00112720(u32) asm("func_00112720");
extern "C" u32 func_001b58a8() asm("func_001b58a8");

// 0x0010d188 func_0010d188
u32 func_0010d188(u32 a0) asm("func_0010d188");
u32 func_0010d188(u32 a0) {
    u32 t6;
    u32 t7;
    u8 t7_0;
    u32 t6_1;
    u32 t7_2;
    u32 v0;
    u64 loc_0;
    u32 t6_3;
    u8 t6_4;
    u32 t7_5;
    u32 t7_6;
    u32 t7_7;
    u32 t7_8;
    u32 t7_9;
    u32 t7_10;
    if (((s32)(func_0010cc80(a0)) != 0)) {
        if (((s32)(func_001b58a8()) == 0)) {
            if (((s32)(func_00112720(a0)) != 0)) {
                t6 = ((*(u32*)((a0 + 0xb6c)) << 3) + (u32)&D_00345ad0);
                t7 = *(u32*)((t6 + -0x3c));
                t7_0 = (t7 & 1);
                if (((s32)(t7_0) != 0)) {
                    t6_1 = ((*(u32*)((t6 + -0x40)) >> 2) << 2);
                    t7 = *(u32*)((t6_1 + *(u32*)((a0 + ((s32)(t7) >> 1)))));
                } else {
                    t7 = *(u32*)((t6 + -0x40));
                }
                t7_2 = (*(u32*)((a0 + 0xb6c)) << 3);
                t7_8 = ((u32(*)(u32))(t7))(a0 + ((s32)(*(u32*)(((t7_2 + (u32)&D_00345ad0) + -0x3c))) >> 1));
            } else {
                v0 = (((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x98))))(a0) << 3);
                loc_0 = *(u64*)((v0 + (u32)&D_00345ad0));
                t6_3 = *(u32*)(((u32)&loc_0 + 4));
                t6_4 = (t6_3 & 1);
                if (((s32)(t6_4) != 0)) {
                    t7_5 = ((*(u32*)(&loc_0) >> 2) << 2);
                    t7_6 = (t7_5 + *(u32*)((a0 + ((s32)(*(u32*)(((u32)&loc_0 + 4))) >> 1))));
                    t7_7 = *(u32*)(t7_6);
                } else {
                    t7_7 = *(u32*)(&loc_0);
                }
                t7_8 = ((u32(*)(u32))(t7_7))(a0 + ((s32)(*(u32*)(((u32)&loc_0 + 4))) >> 1));
            }
            t7_9 = t7_8;
        } else {
            t7_9 = 1;
        }
        t7_10 = t7_9;
    } else {
        t7_10 = 1;
    }
    return t7_10;
}
