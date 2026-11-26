// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035f0f0 asm("D_0035f0f0");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 D_0035f0f8 asm("D_0035f0f8");
extern "C" u32 D_0035f0fc asm("D_0035f0fc");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0026bab8 func_0026bab8
void func_0026bab8() asm("_ZN2Tz7CmParty4ExitEv");
void func_0026bab8() {
    u32 a0_0;
    u32 s1;
    u32 s0;
    u32 s2;
    u32 s0_1;
    u32 s0_2;
    u32 s2_3;
    u32 s0_4;
    u32 s0_5;
    u32 s2_6;
    u32 s0_7;
    *(u8*)(&D_0035f0f0) = 0;
    *(u32*)(&D_0035f0f8) = 0;
    a0_0 = *(u32*)(&D_0035f0fc);
    if (((s32)(a0_0) != 0)) {
        func_00106420(a0_0);
        *(u32*)(&D_0035f0fc) = 0;
    }
    s1 = *(u32*)(&D_0035f0f4);
    if (((s32)(s1) != 0)) {
        if ((s1 != 0xfffff118)) {
            s0 = (s1 + 0x176c);
            while ((s2 = (s1 + 0xee8)), (s0_1 = (s0 + -0x1b4)), (s2 != s0_1)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_1) + 0xc))))(s0_1);
                s0 = s0_1;
            }
        }
        if ((s1 != 0xfffff808)) {
            s0_2 = (s1 + 0xec8);
            while ((s2_3 = (s1 + 0x7f8)), (s0_4 = (s0_2 + -0x1b4)), (s2_3 != s0_4)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_4) + 0xc))))(s0_4);
                s0_2 = s0_4;
            }
        }
        if ((s1 != 0xfffffe68)) {
            s0_5 = (s1 + 0x7f8);
            while ((s2_6 = (s1 + 0x198)), (s0_7 = (s0_5 + -0x198)), (s2_6 != s0_7)) {
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_7) + 0xc))))(s0_7);
                s0_5 = s0_7;
            }
        }
        *(u32*)(s1) = (u32)&D_00347e60;
        func_00239870(s1 + 0x18);
        *(u32*)(s1) = (u32)&D_00347f98;
        func_00106420(s1);
        *(u32*)(&D_0035f0f4) = 0;
    }
    return;
}
