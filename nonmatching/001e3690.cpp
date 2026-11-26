// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036eb60 asm("D_0036eb60");
extern "C" u32 D_0036eb90 asm("D_0036eb90");
extern "C" u32 D_0036ebc8 asm("D_0036ebc8");
extern "C" u32 D_0036ebf0 asm("D_0036ebf0");
extern "C" u32 D_0036ec18 asm("D_0036ec18");
extern "C" u32 func_001e3650(u32) asm("func_001e3650");
extern "C" u32 func_001e3660(u32, u32) asm("func_001e3660");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e3690 func_001e3690
u32 func_001e3690(u32 a0) asm("_Z11pppGetPdataP9_pppMngSt");
u32 func_001e3690(u32 a0) {
    u32 s0;
    u32 v0;
    u32 s3;
    u32 t6;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 a2_3;
    u32 a2_4;
    s32 s2;
    u32 a2_5;
    u32 a2_6;
    s32 s0_7;
    u32 a2_8;
    s0 = *(u8*)((a0 + 0x93));
    v0 = func_001e3650(*(u32*)((a0 + 0x88)));
    s3 = 0;
    if (((s32)(*(u32*)(v0)) > 0)) {
        t6 = 0;
        do {
            if ((s0 == t6)) {
                *(u32*)((a0 + 0x8c)) = *(u32*)(((v0 + (t6 * 4)) + 4));
                s3 = (*(u32*)(((v0 + (t6 * 4)) + 4)) + 0x110);
            }
            t6 = (t6 + 1);
            v0_0 = (((v0 + (t6 * 4)) + 4) + 4);
        } while (((s32)(((s32)(t6) < (s32)(*(u32*)(v0)))) != 0));
        v0_1 = v0_0;
    } else {
        v0_1 = (v0 + 4);
    }
    v0_2 = func_001e3660(v0_1, 4);
    if ((*(u32*)(v0_2) != 0xffffffff)) {
        if (((s32)(((s32)(*(u32*)(v0_2)) < (s32)(0x3000))) != 0)) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036eb60, a2_3);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x336);
        }
        s2 = ((s32)((((s32)((*(u32*)((v0_2 + 4)) + -0x2f81)) < (s32)(0)) ? (*(u32*)((v0_2 + 4)) + -0x2f02) : (*(u32*)((v0_2 + 4)) + -0x2f81))) >> 7);
        if (((s32)(((s32)(*(u32*)((v0_2 + 8))) < (s32)(0x3e00))) != 0)) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036eb90, a2_4);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x33b);
        }
        if (((s32)(((s32)(*(u32*)((v0_2 + 0xc))) < (s32)(0x4001))) == 0)) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ebc8, a2_5);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x33c);
        }
        s0_7 = ((s32)((((s32)((*(u32*)((v0_2 + 0xc)) + -0x3de1)) < (s32)(0)) ? (*(u32*)((v0_2 + 0xc)) + -0x3dc2) : (*(u32*)((v0_2 + 0xc)) + -0x3de1))) >> 5);
        if (((s32)(((s32)(s2) < (s32)(0x23))) == 0)) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ebf0, a2_6);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x341);
        }
        if (((s32)(s0_7) >= (s32)(0x15))) {
            func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ec18, a2_8);
            func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x342);
        }
        *(u8*)((a0 + 0x92)) = s0_7;
        *(u8*)((a0 + 0x91)) = s2;
    } else {
        *(u8*)((a0 + 0x91)) = 0;
        *(u8*)((a0 + 0x92)) = 0;
    }
    return s3;
}
