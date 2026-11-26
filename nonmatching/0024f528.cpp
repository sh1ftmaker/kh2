// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee38 asm("D_0035ee38");
extern "C" u32 D_0035ee3c asm("D_0035ee3c");
extern "C" u32 D_0035ee40 asm("D_0035ee40");
extern "C" u32 D_0035ee44 asm("D_0035ee44");
extern "C" u32 D_0035ee48 asm("D_0035ee48");
extern "C" u32 D_0035ee4c asm("D_0035ee4c");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_002b3fb0(u32) asm("func_002b3fb0");

// 0x0024f528 func_0024f528
void func_0024f528() asm("func_0024f528");
void func_0024f528() {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 a1_2;
    u32 s0_3;
    if ((*(u32*)(&D_0035ee34) != 0)) {
        s0 = *(u32*)(&D_0035ee34);
        func_00288b00(*(u32*)(&D_0035ee34));
        func_00288c20(s0);
        *(u32*)(&D_0035ee34) = 0;
    }
    if ((*(u32*)(&D_0035ee38) != 0)) {
        s0_0 = *(u32*)(&D_0035ee38);
        func_00288b00(*(u32*)(&D_0035ee38));
        func_00288c20(s0_0);
        *(u32*)(&D_0035ee38) = 0;
    }
    if ((*(u32*)(&D_0035ee3c) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee3c)) + 0x10))))(*(u32*)(&D_0035ee3c));
        *(u32*)(&D_0035ee3c) = 0;
    }
    if ((*(u32*)(&D_0035ee40) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee40)) + 0x10))))(*(u32*)(&D_0035ee40));
        *(u32*)(&D_0035ee40) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ee44)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee44)) + 0x10))))(*(u32*)(&D_0035ee44));
        *(u32*)(&D_0035ee44) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ee4c)) != 0)) {
        s0_1 = *(u32*)(&D_0035ee4c);
        func_002b3fb0(*(u32*)(&D_0035ee4c));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_1);
        *(u32*)(&D_0035ee4c) = 0;
    }
    if (((s32)(*(u32*)(&D_0035ee48)) != 0)) {
        a1_2 = *(u32*)(&D_0035ee48);
        s0_3 = (*(u32*)(&D_0035ee48) + (*(u32*)((*(u32*)(&D_0035ee48) + -4)) * 0x198));
        for (;;) {
            s0_3 = (s0_3 + -0x198);
            if ((a1_2 == s0_3)) break;
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0_3) + 0xc))))(s0_3, a1_2);
            a1_2 = *(u32*)(&D_0035ee48);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_2 + -4);
        *(u32*)(&D_0035ee48) = 0;
    }
    return;
}
