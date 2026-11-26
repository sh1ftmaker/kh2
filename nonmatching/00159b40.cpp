// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa10 asm("D_0034aa10");
extern "C" u32 D_0034aa11 asm("D_0034aa11");
extern "C" u32 D_0034aa18 asm("D_0034aa18");
extern "C" u32 func_00140df0() asm("func_00140df0");
extern "C" u32 func_00162058(f32) asm("func_00162058");
extern "C" void func_00141010(u32, u32, f32) asm("func_00141010");

// 0x00159b40 func_00159b40
// minilink-rodata 0x0036b368   (float literals live here in the original)
u32 func_00159b40(u32 a0, u32 a1) asm("_ZN2dk10TalkCamera6createEPN2YS6TARGETEb");
u32 func_00159b40(u32 a0, u32 a1) {
    u32 v0;
    func_00141010(a0, a1, 30.0f);
    *(u32*)((func_00140df0() + 0x40)) = 4;
    *(u32*)(&D_0034aa18) = *(u32*)(a0);
    *(u32*)(((u32)&D_0034aa18 + 4)) = *(u32*)((a0 + 4));
    *(u32*)(((u32)&D_0034aa18 + 8)) = *(u32*)((a0 + 8));
    *(u32*)(((u32)&D_0034aa18 + 0xc)) = *(u32*)((a0 + 0xc));
    *(u32*)(((u32)&D_0034aa18 + 0x10)) = *(u32*)((a0 + 0x10));
    v0 = func_00162058(8.0f);
    *(u8*)(&D_0034aa10) = 1;
    *(u8*)(&D_0034aa11) = (a1 & 0xff);
    return v0;
}
