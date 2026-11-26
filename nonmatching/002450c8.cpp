// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed24 asm("D_0035ed24");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed2c asm("D_0035ed2c");
extern "C" u32 D_0035ed30 asm("D_0035ed30");
extern "C" u32 D_0035ed34 asm("D_0035ed34");
extern "C" u32 D_0035ed38 asm("D_0035ed38");
extern "C" u32 D_0035ed40 asm("D_0035ed40");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_002b3fb0(u32) asm("func_002b3fb0");
extern "C" void func_0031a840(u32) asm("func_0031a840");
extern "C" void func_0031acc0(u32) asm("func_0031acc0");

// 0x002450c8 func_002450c8
void func_002450c8() asm("_ZN2Tz4HECO4ExitEv");
void func_002450c8() {
    u32 s0;
    u32 s0_0;
    u32 a0_1;
    u32 a0_2;
    u32 a0_3;
    u32 s0_4;
    u32 s1;
    u32 s0_5;
    u32 s0_6;
    u32 s0_7;
    u32 s0_8;
    u32 s0_9;
    u32 s0_10;
    u32 s0_11;
    u32 s0_12;
    u32 a0_13;
    u32 t7;
    u32 a1_14;
    u32 s0_15;
    s0 = *(u32*)(&D_0035ed20);
    if ((s0 != 0)) {
        func_00288b00(s0);
        func_00288c20(s0);
        *(u32*)(&D_0035ed20) = 0;
    }
    s0_0 = *(u32*)(&D_0035ed24);
    if ((s0_0 != 0)) {
        func_00288b00(s0_0);
        func_00288c20(s0_0);
        *(u32*)(&D_0035ed24) = 0;
    }
    a0_1 = *(u32*)(&D_0035ed28);
    if ((a0_1 != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_1) + 0x10))))(a0_1);
        *(u32*)(&D_0035ed28) = 0;
    }
    a0_2 = *(u32*)(&D_0035ed2c);
    if ((a0_2 != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_2) + 0x10))))(a0_2);
        *(u32*)(&D_0035ed2c) = 0;
    }
    a0_3 = *(u32*)(&D_0035ed30);
    if (((s32)(a0_3) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_3) + 0x10))))(a0_3);
        *(u32*)(&D_0035ed30) = 0;
    }
    s0_4 = *(u32*)(&D_0035ed38);
    if (((s32)(s0_4) != 0)) {
        func_002b3fb0(s0_4);
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_4);
        *(u32*)(&D_0035ed38) = 0;
    }
    s1 = *(u32*)(&D_0035ed40);
    if (((s32)(s1) != 0)) {
        if ((s1 != 0xffffce38)) {
            s0_5 = (s1 + 0x3828);
            while (((s1 + 0x31c8) != (s0_5 + -0x198))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_5 + -0x198)) + 0xc))))(s0_5 + -0x198);
                s0_5 = (s0_5 + -0x198);
            }
        }
        if ((s1 != 0xffffd498)) {
            s0_6 = (s1 + 0x31c8);
            while (((s1 + 0x2b68) != (s0_6 + -0x198))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_6 + -0x198)) + 0xc))))(s0_6 + -0x198);
                s0_6 = (s0_6 + -0x198);
            }
        }
        if ((s1 != 0xffffdaf8)) {
            s0_7 = (s1 + 0x2b68);
            while (((s1 + 0x2508) != (s0_7 + -0x198))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_7 + -0x198)) + 0xc))))(s0_7 + -0x198);
                s0_7 = (s0_7 + -0x198);
            }
        }
        if ((s1 != 0xffffe158)) {
            s0_8 = (s1 + 0x2508);
            while (((s1 + 0x1ea8) != (s0_8 + -0x198))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_8 + -0x198)) + 0xc))))(s0_8 + -0x198);
                s0_8 = (s0_8 + -0x198);
            }
        }
        if ((s1 != 0xffffe828)) {
            s0_9 = (s1 + 0x1ea8);
            while (((s1 + 0x17d8) != (s0_9 + -0x1b4))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_9 + -0x1b4)) + 0xc))))(s0_9 + -0x1b4);
                s0_9 = (s0_9 + -0x1b4);
            }
        }
        if ((s1 != 0xffffeef8)) {
            s0_10 = (s1 + 0x17d8);
            while (((s1 + 0x1108) != (s0_10 + -0x1b4))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_10 + -0x1b4)) + 0xc))))(s0_10 + -0x1b4);
                s0_10 = (s0_10 + -0x1b4);
            }
        }
        if ((s1 != 0xfffff5c8)) {
            s0_11 = (s1 + 0x1108);
            while (((s1 + 0xa38) != (s0_11 + -0x1b4))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_11 + -0x1b4)) + 0xc))))(s0_11 + -0x1b4);
                s0_11 = (s0_11 + -0x1b4);
            }
        }
        if ((s1 != 0xfffffc98)) {
            s0_12 = (s1 + 0xa38);
            while (((s1 + 0x368) != (s0_12 + -0x1b4))) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0_12 + -0x1b4)) + 0xc))))(s0_12 + -0x1b4);
                s0_12 = (s0_12 + -0x1b4);
            }
        }
        func_0031acc0(s1 + 0x1b4);
        *(u32*)(s1) = (u32)&D_00347e60;
        func_00239870(s1 + 0x18);
        func_0031a840(s1);
        func_00106420(s1);
        *(u32*)(&D_0035ed40) = 0;
    }
    a0_13 = *(u32*)(&D_0035ed34);
    if (((s32)(a0_13) != 0)) {
        t7 = *(u32*)((a0_13 + -4));
        a1_14 = *(u32*)(&D_0035ed34);
        s0_15 = (a0_13 + (t7 * 0x198));
        while ((a1_14 != (s0_15 + -0x198))) {
            ((void(*)(u32, u32))(*(u32*)((*(u32*)((s0_15 + -0x198)) + 0xc))))(s0_15 + -0x198, a1_14);
            a1_14 = *(u32*)(&D_0035ed34);
            s0_15 = (s0_15 + -0x198);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_14 + -4);
        *(u32*)(&D_0035ed34) = 0;
    }
    return;
}
