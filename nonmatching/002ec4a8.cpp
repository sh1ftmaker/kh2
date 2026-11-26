// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036354c asm("D_0036354c");
extern "C" u32 D_00363560 asm("D_00363560");
extern "C" u32 D_003637d0 asm("D_003637d0");
extern "C" u32 D_01e2c064 asm("D_01e2c064");
extern "C" u32 func_002cd008(u32, u32) asm("func_002cd008");
extern "C" void func_001d14b0(u32, u32) asm("func_001d14b0");
extern "C" void func_002eda90(u32, u32, f32) asm("func_002eda90");
extern "C" void func_002edaf8(u32, u32, f32) asm("func_002edaf8");

// 0x002ec4a8 func_002ec4a8
// minilink-rodata 0x00376158   (float literals live here in the original)
f32 func_002ec4a8(u32 a0, u32 a1) asm("_ZN2Ts21ACTION_SKATEBOARDEDGE5startEPN2YS3OBJE");
f32 func_002ec4a8(u32 a0, u32 a1) {
    func_001d14b0(a1, 3);
    *(u8*)(&D_01e2c064) = (func_002cd008(*(u32*)((a1 + 0x508)), *(u32*)(&D_00363560)) ^ 1);
    *(u32*)(&D_00363560) = *(u32*)((*(u32*)((a1 + 0x508)) + 0x90));
    if (((s32)(((func_002cd008(*(u32*)((a1 + 0x508)), *(u32*)(&D_00363560)) ^ 1) & 0xff)) != 0)) {
        func_002eda90(*(u32*)(&D_003637d0), 0x14, 60.0f);
    } else {
        func_002edaf8(*(u32*)(&D_003637d0), 0x14, 60.0f);
    }
    *(f32*)(&D_0036354c) = 12.0f;
    return 12.0f;
}
