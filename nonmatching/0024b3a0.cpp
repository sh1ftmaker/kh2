// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032ba14 asm("D_0032ba14");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edac asm("D_0035edac");
extern "C" u32 D_0035edb0 asm("D_0035edb0");
extern "C" u32 D_0035edb4 asm("D_0035edb4");
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 D_0035edbc asm("D_0035edbc");
extern "C" u32 D_0035edc0 asm("D_0035edc0");
extern "C" void func_00288b00(u32) asm("func_00288b00");
extern "C" void func_00288c20(u32) asm("func_00288c20");
extern "C" void func_002b3fb0(u32) asm("func_002b3fb0");

// 0x0024b3a0 func_0024b3a0
void func_0024b3a0() asm("func_0024b3a0");
void func_0024b3a0() {
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 a1_2;
    u32 s0_3;
    if ((*(u32*)(&D_0035eda8) != 0)) {
        s0 = *(u32*)(&D_0035eda8);
        func_00288b00(*(u32*)(&D_0035eda8));
        func_00288c20(s0);
        *(u32*)(&D_0035eda8) = 0;
    }
    if ((*(u32*)(&D_0035edac) != 0)) {
        s0_0 = *(u32*)(&D_0035edac);
        func_00288b00(*(u32*)(&D_0035edac));
        func_00288c20(s0_0);
        *(u32*)(&D_0035edac) = 0;
    }
    if ((*(u32*)(&D_0035edb0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb0)) + 0x10))))(*(u32*)(&D_0035edb0));
        *(u32*)(&D_0035edb0) = 0;
    }
    if ((*(u32*)(&D_0035edb4) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb4)) + 0x10))))(*(u32*)(&D_0035edb4));
        *(u32*)(&D_0035edb4) = 0;
    }
    if (((s32)(*(u32*)(&D_0035edb8)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb8)) + 0x10))))(*(u32*)(&D_0035edb8));
        *(u32*)(&D_0035edb8) = 0;
    }
    if (((s32)(*(u32*)(&D_0035edc0)) != 0)) {
        s0_1 = *(u32*)(&D_0035edc0);
        func_002b3fb0(*(u32*)(&D_0035edc0));
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_0032ba14)) + 4))))(*(u32*)(&D_0032ba14), s0_1);
        *(u32*)(&D_0035edc0) = 0;
    }
    if (((s32)(*(u32*)(&D_0035edbc)) != 0)) {
        a1_2 = *(u32*)(&D_0035edbc);
        s0_3 = (*(u32*)(&D_0035edbc) + (*(u32*)((*(u32*)(&D_0035edbc) + -4)) * 0x198));
        for (;;) {
            s0_3 = (s0_3 + -0x198);
            if ((a1_2 == s0_3)) break;
            ((void(*)(u32, u32))(*(u32*)((*(u32*)(s0_3) + 0xc))))(s0_3, a1_2);
            a1_2 = *(u32*)(&D_0035edbc);
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a1_2 + -4);
        *(u32*)(&D_0035edbc) = 0;
    }
    return;
}
