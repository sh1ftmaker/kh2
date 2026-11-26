// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00361da8 asm("D_00361da8");
extern "C" u32 D_00361db8 asm("D_00361db8");
extern "C" u32 D_00361dc8 asm("D_00361dc8");
extern "C" u32 D_01e2bdc0 asm("D_01e2bdc0");
extern "C" u32 D_01e2bdd0 asm("D_01e2bdd0");
extern "C" u32 func_002c6420(u32, u32, u32) asm("func_002c6420");

// 0x002c66b8 func_002c66b8
// minilink-rodata 0x00375764   (float literals live here in the original)
f32 func_002c66b8(u32 a0, u32 a1, u32 a2) asm("func_002c66b8");
f32 func_002c66b8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_00361da8;
    *(u32*)((a0 + 0x54)) = 0;
    *(u32*)((a0 + 0x5c)) = 0;
    v0 = func_002c6420(a0, a1, a2);
    *(u32*)(a0) = (u32)&D_00361dc8;
    *(u32*)((a0 + 0x60)) = a1;
    *(u32*)((a0 + 0x64)) = a2;
    *(Q16*)((a0 + 0x70)) = *(Q16*)((u32)&D_01e2bdd0);
    *(Q16*)((a0 + 0x80)) = *(Q16*)((u32)&D_01e2bdc0);
    *(u32*)(&D_00361db8) = a0;
    *(f32*)((a0 + 0x58)) = 60.0f;
    *(u32*)((a0 + 0x54)) = (*(u32*)((a0 + 0x54)) | 1);
    *(f32*)((a0 + 0x5c)) = 60.0f;
    *(f32*)((a0 + 0x90)) = 65.0f;
    return v0;
}
