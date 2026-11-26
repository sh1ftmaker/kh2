// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f648 asm("D_0035f648");
extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f658 asm("D_0035f658");
extern "C" u32 D_0035f65c asm("D_0035f65c");
extern "C" u32 D_0035f660 asm("D_0035f660");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f668 asm("D_0035f668");
extern "C" u32 D_0035f66c asm("D_0035f66c");
extern "C" u32 D_0035f670 asm("D_0035f670");
extern "C" u32 D_0035f674 asm("D_0035f674");
extern "C" u32 D_0035f678 asm("D_0035f678");
extern "C" u32 D_0035f67c asm("D_0035f67c");
extern "C" u32 D_0035f680 asm("D_0035f680");
extern "C" u32 D_0035f690 asm("D_0035f690");
extern "C" u32 D_0035f6c0 asm("D_0035f6c0");
extern "C" u32 D_0035f6c4 asm("D_0035f6c4");
extern "C" u32 D_0035f6c8 asm("D_0035f6c8");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_0014a4c0() asm("func_0014a4c0");
extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00233e58() asm("func_00233e58");
extern "C" void func_0023fdc0() asm("func_0023fdc0");
extern "C" void func_00258ce8(u32) asm("func_00258ce8");
extern "C" void func_002639f8() asm("func_002639f8");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_0028ba80(u32) asm("func_0028ba80");
extern "C" void func_0028f3e8() asm("func_0028f3e8");
extern "C" void func_0028fdd0(u32) asm("func_0028fdd0");
extern "C" void func_00290300(u32) asm("func_00290300");

// 0x002b47a0 ttarget0_002b47a0()
u32 lift_002b47a0() asm("_Z17ttarget0_002b47a0v");
u32 lift_002b47a0() {
    u32 s0;
    u32 s0_0;
    u32 t5;
    u32 t7;
    u32 t7_1;
    u32 t5_2;
    u32 t7_3;
    u32 t4;
    u32 t6;
    u32 t7_4;
    u32 t7_5;
    u32 t5_6;
    u32 s0_7;
    u32 s0_8;
    u32 s0_9;
    *(u32*)(&D_0035f640) = 0xffffffff;
    *(u32*)(&D_0035f644) = 0xffffffff;
    *(u32*)(&D_0035f648) = 0xffffffff;
    *(u32*)(&D_0035f6cc) = 0;
    if ((*(u32*)(&D_0035f64c) != 0)) {
        s0 = *(u32*)(&D_0035f64c);
        func_00288b00(*(u32*)(&D_0035f64c));
        func_00288c20(s0);
        *(u32*)(&D_0035f64c) = 0;
    }
    if ((*(u32*)(&D_0035f650) != 0)) {
        s0_0 = *(u32*)(&D_0035f650);
        func_00288b00(*(u32*)(&D_0035f650));
        func_00288c20(s0_0);
        *(u32*)(&D_0035f650) = 0;
    }
    if ((*(u32*)(&D_0035f654) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f654)) + 0x10))))(*(u32*)(&D_0035f654));
        *(u32*)(&D_0035f654) = 0;
    }
    if ((*(u32*)(&D_0035f658) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f658)) + 0x10))))(*(u32*)(&D_0035f658));
        *(u32*)(&D_0035f658) = 0;
    }
    if ((*(u32*)(&D_0035f65c) != 0)) {
        func_00106450(*(u32*)(&D_0035f65c));
        *(u32*)(&D_0035f65c) = 0;
    }
    if ((*(u32*)(&D_0035f660) != 0)) {
        func_00106450(*(u32*)(&D_0035f660));
        *(u32*)(&D_0035f660) = 0;
    }
    t5 = 3;
    t7 = (u32)&D_0035f680;
    do {
        t7_1 = (t7 + ((t5 - 3) * -4));
        *(u32*)(t7_1) = 0;
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    t5_2 = 0;
    t7_3 = (0 << 4);
    do {
        t4 = (u32)&D_0035f690;
        t6 = 3;
        t7_4 = (t7_3 + (u32)&D_0035f690);
        do {
            t7_5 = (t7_4 + ((t6 - 3) * -4));
            *(u32*)(t7_5) = 0;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        t5_6 = (t5_2 + 1);
        t5_2 = t5_6;
        t7_3 = (t5_6 << 4);
    } while (((s32)(t7_3) != 0));
    if ((*(u32*)(&D_0035f664) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f664)) + 0x10))))(*(u32*)(&D_0035f664));
        *(u32*)(&D_0035f664) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f668)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f668)) + 0x10))))(*(u32*)(&D_0035f668));
        *(u32*)(&D_0035f668) = 0;
    }
    if ((*(u32*)(&D_0035f66c) != 0)) {
        s0_7 = *(u32*)(&D_0035f66c);
        func_0028fdd0(*(u32*)(&D_0035f66c));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_7);
        *(u32*)(&D_0035f66c) = 0;
    }
    if ((*(u32*)(&D_0035f670) != 0)) {
        s0_8 = *(u32*)(&D_0035f670);
        func_00290300(*(u32*)(&D_0035f670));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_8);
        *(u32*)(&D_0035f670) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f674)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f674)) + 4))))(*(u32*)(&D_0035f674));
        *(u32*)(&D_0035f674) = 0;
    }
    if ((*(u32*)(&D_0035f678) != 0)) {
        s0_9 = *(u32*)(&D_0035f678);
        func_0028ba80(*(u32*)(&D_0035f678));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_9);
        *(u32*)(&D_0035f678) = 0;
    }
    if ((*(u32*)(&D_0035f67c) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f67c)) + 0x10))))(*(u32*)(&D_0035f67c));
        *(u32*)(&D_0035f67c) = 0;
    }
    if ((*(u32*)(&D_0035f6c0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f6c0)) + 0x10))))(*(u32*)(&D_0035f6c0));
        *(u32*)(&D_0035f6c0) = 0;
    }
    if ((*(u32*)(&D_0035f6c4) != 0)) {
        func_00106450(*(u32*)(&D_0035f6c4));
        *(u32*)(&D_0035f6c4) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f6c8)) != 0)) {
        func_00106450(*(u32*)(&D_0035f6c8));
        *(u32*)(&D_0035f6c8) = 0;
    }
    func_00258ce8(0);
    func_0028f3e8();
    func_002639f8();
    func_0023fdc0();
    func_00233e58();
    return func_0014a4c0();
}
