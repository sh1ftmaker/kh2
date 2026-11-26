// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed50 asm("D_0035ed50");
extern "C" u32 D_0035ed54 asm("D_0035ed54");
extern "C" u32 D_0035ed58 asm("D_0035ed58");
extern "C" u32 D_0035ed5c asm("D_0035ed5c");
extern "C" u32 D_0035ed60 asm("D_0035ed60");
extern "C" u32 D_0035ed64 asm("D_0035ed64");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_002b3fb0(u32) asm("func_002b3fb0");

// 0x00247e80 func_00247e80
void func_00247e80() asm("func_00247e80");
void func_00247e80() {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 a1_2;
    u32 s0_3;
    if ((*(u32*)(&D_0035ed4c) != 0)) {
        s0 = *(u32*)(&D_0035ed4c);
        func_00288b00(*(u32*)(&D_0035ed4c));
        func_00288c20(s0);
        *(u32*)(&D_0035ed4c) = 0;
    }
    if ((*(u32*)(&D_0035ed50) != 0)) {
        s0_0 = *(u32*)(&D_0035ed50);
        func_00288b00(*(u32*)(&D_0035ed50));
        func_00288c20(s0_0);
        *(u32*)(&D_0035ed50) = 0;
    }
    if ((*(u32*)(&D_0035ed54) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed54)) + 0x10))))(*(u32*)(&D_0035ed54));
        *(u32*)(&D_0035ed54) = 0;
    }
    if ((*(u32*)(&D_0035ed58) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed58)) + 0x10))))(*(u32*)(&D_0035ed58));
        *(u32*)(&D_0035ed58) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ed5c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed5c)) + 0x10))))(*(u32*)(&D_0035ed5c));
        *(u32*)(&D_0035ed5c) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ed60)) != 0)) {
        s0_1 = *(u32*)(&D_0035ed60);
        func_002b3fb0(*(u32*)(&D_0035ed60));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_1);
        *(u32*)(&D_0035ed60) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ed64)) != 0)) {
        a1_2 = *(u32*)(&D_0035ed64);
        s0_3 = (*(u32*)(&D_0035ed64) + (*(u32*)((*(u32*)(&D_0035ed64) + -4)) * 0x198));
        for (;;) {
            s0_3 = (s0_3 + -0x198);
            if ((a1_2 == s0_3)) break;
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0_3) + 0xc))))(s0_3, a1_2);
            a1_2 = *(u32*)(&D_0035ed64);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_2 + -4);
        *(u32*)(&D_0035ed64) = 0;
    }
    return;
}
