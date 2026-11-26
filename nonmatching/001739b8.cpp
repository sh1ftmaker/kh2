// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00175548 asm("D_00175548");
extern "C" u32 D_01c5f510 asm("D_01c5f510");
extern "C" u32 D_01c5f520 asm("D_01c5f520");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x001739b8 func_001739b8
void func_001739b8(u32 a0) asm("func_001739b8");
void func_001739b8(u32 a0) {
    if (((s32)(*(s8*)(&D_01c5f510)) == 0)) {
        *(u8*)(&D_01c5f510) = 1;
        func_002fd188((u32)&D_00175548);
    }
    if (((*(u32*)((*(u32*)(a0) + 4)) + 0x850) != (u32)&D_01c5f520)) {
        *(Q16*)((u32)&D_01c5f520) = *(Q16*)((*(u32*)((*(u32*)(a0) + 4)) + 0x850));
    }
    *(u32*)(a0) = (u32)&D_01c5f520;
    return;
}
