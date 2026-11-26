// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f108 asm("D_0035f108");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f110 asm("D_0035f110");
extern "C" u32 D_0035f114 asm("D_0035f114");
extern "C" u32 D_0035f124 asm("D_0035f124");
extern "C" void func_00106450(u32) asm("func_00106450");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");

// 0x0026db60 Tz::Selector::SelExitImpl(...)
void lift_0026db60() asm("_ZN2Tz8Selector11SelExitImplEz");
void lift_0026db60() {
    u32 a1_0;
    u32 s0;
    u32 s0_1;
    if (((s32)(*(u32*)(&D_0035f100)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f100)) + 0x10))))(*(u32*)(&D_0035f100));
        *(u32*)(&D_0035f100) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f104)) != 0)) {
        a1_0 = *(u32*)(&D_0035f104);
        s0 = (*(u32*)(&D_0035f104) + (*(u32*)((*(u32*)(&D_0035f104) + -4)) * 0x1b4));
        for (;;) {
            s0 = (s0 + -0x1b4);
            if ((a1_0 == s0)) break;
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0, a1_0);
            a1_0 = *(u32*)(&D_0035f104);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_0 + -4);
        *(u32*)(&D_0035f104) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f108)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f108)) + 0x10))))(*(u32*)(&D_0035f108));
        *(u32*)(&D_0035f108) = 0;
    }
    if ((*(u32*)(&D_0035f10c) != 0)) {
        s0_1 = *(u32*)(&D_0035f10c);
        func_00288b00(*(u32*)(&D_0035f10c));
        func_00288c20(s0_1);
        *(u32*)(&D_0035f10c) = 0;
    }
    if ((*(u32*)(&D_0035f110) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f110)) + 0x10))))(*(u32*)(&D_0035f110));
        *(u32*)(&D_0035f110) = 0;
    }
    if ((*(u32*)(&D_0035f114) != 0)) {
        func_00106450(*(u32*)(&D_0035f114));
        *(u32*)(&D_0035f114) = 0;
    }
    if ((*(u32*)(&D_0035f124) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f124)) + 0x10))))(*(u32*)(&D_0035f124));
        *(u32*)(&D_0035f124) = 0;
    }
    return;
}
