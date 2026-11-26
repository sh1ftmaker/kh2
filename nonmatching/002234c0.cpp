// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00370c20 asm("D_00370c20");
extern "C" u32 func_002fdfc8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002fdfc8");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");

// 0x002234c0 func_002234c0
u32 func_002234c0(u32 a0, u32 a1) asm("func_002234c0");
u32 func_002234c0(u32 a0, u32 a1) {
    u8 frame[80];
    u32 s6;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s1;
    s6 = func_00313b80(*(f32*)(a1));
    s5 = func_00313b80(*(f32*)((a1 + 4)));
    s4 = func_00313b80(*(f32*)((a1 + 8)));
    s3 = func_00313b80(*(f32*)((a1 + 0xc)));
    s2 = func_00313b80(*(f32*)((a1 + 0x10)));
    s1 = func_00313b80(*(f32*)((a1 + 0x14)));
    *(u64*)((u32)frame) = func_00313b80(*(f32*)((a1 + 0x18)));
    *(u64*)(((u32)frame + 8)) = func_00313b80(*(f32*)((a1 + 0x1c)));
    *(u64*)(((u32)frame + 0x10)) = func_00313b80(*(f32*)((a1 + 0x20)));
    *(u64*)(((u32)frame + 0x18)) = func_00313b80(*(f32*)((a1 + 0x24)));
    *(u64*)(((u32)frame + 0x20)) = func_00313b80(*(f32*)((a1 + 0x28)));
    *(u64*)(((u32)frame + 0x28)) = func_00313b80(*(f32*)((a1 + 0x2c)));
    *(u64*)(((u32)frame + 0x30)) = func_00313b80(*(f32*)((a1 + 0x30)));
    *(u64*)(((u32)frame + 0x38)) = func_00313b80(*(f32*)((a1 + 0x34)));
    *(u64*)(((u32)frame + 0x40)) = func_00313b80(*(f32*)((a1 + 0x38)));
    *(u64*)(((u32)frame + 0x48)) = func_00313b80(*(f32*)((a1 + 0x3c)));
    return func_002fdfc8((u32)&D_00370c20, a0, s6, s5, s4, s3, s2, s1);
}
