// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001adc08 asm("D_001adc08");
extern "C" u32 D_001adc48 asm("D_001adc48");
extern "C" u32 D_00350c8c asm("D_00350c8c");
extern "C" u32 D_00350c90 asm("D_00350c90");
extern "C" u32 D_00350c94 asm("D_00350c94");
extern "C" u32 D_00350c98 asm("D_00350c98");
extern "C" u32 D_0036d820 asm("D_0036d820");
extern "C" u32 D_01c6cf00 asm("D_01c6cf00");
extern "C" u32 D_01c6cfb0 asm("D_01c6cfb0");
extern "C" u32 D_01c6cfb4 asm("D_01c6cfb4");
extern "C" u32 D_01c6cfb8 asm("D_01c6cfb8");
extern "C" u32 D_01c6cfc0 asm("D_01c6cfc0");
extern "C" u32 D_01c94000 asm("D_01c94000");
extern "C" u32 func_00105ee8(u32) asm("func_00105ee8");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" u32 func_001adc08(u32, u32, u32) asm("func_001adc08");
extern "C" void func_001ae4c0(u32, u32, u32) asm("func_001ae4c0");
extern "C" void func_001ae590(u32, u32) asm("func_001ae590");
extern "C" void func_002f6698(u32) asm("func_002f6698");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x001adcf8 func_001adcf8
u32 func_001adcf8(u32 a0) asm("func_001adcf8");
u32 func_001adcf8(u32 a0) {
    u8 frame[48];
    u32 s2;
    u32 s2_0;
    u32 v0;
    u32 t6;
    u32 t5;
    u32 v0_1;
    u32 sp;
    u32 v0_2;
    if ((a0 == 0xffffffff)) {
        func_002f6698((u32)&D_001adc48);
        func_001ae590((u32)frame, *(u32*)(&D_00350c94));
        *(u32*)(&D_01c6cfb0) = (u32)&D_01c6cfc0;
        func_001ae4c0(*(u32*)((u32)frame), (*(u32*)(((u32)frame + 4)) + 0x7ff) >> 0xb, (u32)&D_01c6cfc0);
        s2 = *(u32*)(((u32)frame + 4));
        func_001ae590((u32)frame, *(u32*)(&D_00350c98));
        func_001adc08(*(u32*)(&D_01c6cfb0), s2, (u32)frame);
        *(u32*)(&D_01c6cfb4) = (((*(u32*)(&D_01c6cfb0) + (*(u32*)(*(u32*)(&D_01c6cfb0)) << 4)) + 0x43) & 0xffffffc0);
        func_001ae590((u32)frame, *(u32*)(&D_00350c8c));
        func_001ae4c0(*(u32*)((u32)frame), (*(u32*)(((u32)frame + 4)) + 0x7ff) >> 0xb, *(u32*)(&D_01c6cfb4));
        s2_0 = *(u32*)(((u32)frame + 4));
        func_001ae590((u32)&D_01c94000, *(u32*)(&D_00350c90));
        v0 = func_001adc08(*(u32*)(&D_01c6cfb4), s2_0, (u32)&D_01c94000);
        *(u32*)((u32)&D_01c6cf00) = 0;
        t6 = (u32)&D_01c6cf00;
        t5 = ((u32)&D_01c6cf00 + 0xb0);
        do {
            *(u32*)(t6) = 0;
            t6 = (t6 + 0x2c);
        } while (((s32)(t6) < (s32)(t5)));
        *(u32*)(&D_01c6cfb8) = 0;
        v0_2 = v0;
    } else {
        func_002fee78((u32)frame, (u32)&D_0036d820, func_00105ee8(a0));
        *(u32*)(&D_01c6cfb8) = (((*(u32*)(&D_01c6cfb4) + (*(u32*)(*(u32*)(&D_01c6cfb4)) << 4)) + 0x43) & 0xffffffc0);
        v0_1 = func_00168388((u32)frame, ((*(u32*)(&D_01c6cfb4) + (*(u32*)(*(u32*)(&D_01c6cfb4)) << 4)) + 0x43) & 0xffffffc0, (u32)&D_001adc08, (u32)&D_01c94000);
        sp = (u32)frame;
        v0_2 = v0_1;
    }
    return v0_2;
}
