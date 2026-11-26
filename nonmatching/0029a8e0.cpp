// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 D_0035f5b0 asm("D_0035f5b0");
extern "C" u32 D_0035f5b4 asm("D_0035f5b4");
extern "C" u32 D_0035f5b6 asm("D_0035f5b6");
extern "C" u32 D_0035f5b8 asm("D_0035f5b8");
extern "C" u32 D_0035f5bc asm("D_0035f5bc");
extern "C" u32 D_0035f5c4 asm("D_0035f5c4");
extern "C" void func_00106420(u32) asm("func_00106420");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_0031a840(u32) asm("func_0031a840");
extern "C" void func_0031abd8(u32) asm("func_0031abd8");
extern "C" void func_0031acc0(u32) asm("func_0031acc0");

// 0x0029a8e0 func_0029a8e0
void func_0029a8e0() asm("_ZN2Tz5JmDic4ExitEv");
void func_0029a8e0() {
    u32 s0;
    u32 s1;
    u32 s0_0;
    if (((s32)(*(u32*)(&D_0035f5ac)) != 0)) {
        func_00106420(*(u32*)(&D_0035f5ac));
        *(u32*)(&D_0035f5ac) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f5b0)) != 0)) {
        s0 = (*(u32*)(&D_0035f5b0) + 0x17d8);
        s1 = *(u32*)(&D_0035f5b0);
        func_0031abd8(*(u32*)(&D_0035f5b0) + 0x1970);
        func_0031abd8(s0);
        if ((s1 != 0xfffff0ac)) {
            for (;;) {
                s0 = (s0 + -0x1b4);
                if (((s1 + 0xf54) == s0)) break;
                ((void(*)(u32))(*(u32*)((*(u32*)(s0) + 0xc))))(s0);
            }
        }
        if ((s1 != 0xfffff930)) {
            s0_0 = (s1 + 0xf54);
            for (;;) {
                s0_0 = (s0_0 + -0x1b4);
                if (((s1 + 0x6d0) == s0_0)) break;
                ((void(*)(u32))(*(u32*)((*(u32*)(s0_0) + 0xc))))(s0_0);
            }
        }
        func_0031acc0(s1 + 0x51c);
        func_0031acc0(s1 + 0x368);
        func_0031acc0(s1 + 0x1b4);
        *(u32*)(s1) = (u32)&D_00347e60;
        func_00239870(s1 + 0x18);
        func_0031a840(s1);
        func_00106420(s1);
        *(u32*)(&D_0035f5b0) = 0;
    }
    if (((s32)(*(u32*)(&D_0035f5bc)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f5bc)) + 0x10))))(*(u32*)(&D_0035f5bc));
        *(u32*)(&D_0035f5bc) = 0;
    }
    *(u8*)(&D_0035f5b4) = 0;
    *(u16*)(&D_0035f5b6) = 0xffffffff;
    *(u32*)(&D_0035f5b8) = 0;
    *(u8*)(&D_0035f5c4) = 0xffffffff;
    return;
}
