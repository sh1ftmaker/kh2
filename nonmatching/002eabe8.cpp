// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00363450 asm("D_00363450");
extern "C" u32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_0017c030(u32, u32, u32, u32) asm("func_0017c030");
extern "C" void func_0017c4c8(u32, u32) asm("func_0017c4c8");

// 0x002eabe8 func_002eabe8
f32 func_002eabe8(u32 a0, u32 a1, u32 a2) asm("_ZN2Ts11ACTION_DICE10party_jumpEPN2YS3OBJEb");
f32 func_002eabe8(u32 a0, u32 a1, u32 a2) {
    u8 frame[48];
    u32 v0;
    func_0017c030((u32)frame, a1, (u32)frame + 0x20, a2 & 0xff);
    *(f32*)(((u32)frame + 0xc)) = (*(f32*)(((u32)frame + 0xc)) * *(f32*)(&D_00363450));
    *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((u32)frame);
    func_0017c4c8(a1, (u32)frame + 0x10);
    *(u8*)((a1 + 0x514)) = 7;
    v0 = func_0017f488(a1 + 0x140, *(u32*)(((u32)frame + 0x20)), 0.0f, 0.0f);
    *(u32*)((a1 + 0x100)) = 4;
    *(u32*)((a1 + 0x104)) = 5;
    return v0;
}
