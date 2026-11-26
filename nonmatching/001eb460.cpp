// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e900 asm("D_01d9e900");
extern "C" u32 D_01d9e940 asm("D_01d9e940");
extern "C" u32 func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f40(u32, u32, f32) asm("func_002f3f40");

// 0x001eb460 func_001eb460
u32 func_001eb460() asm("func_001eb460");
u32 func_001eb460() {
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x50, *(u32*)(&D_01d9e6e8) + 0x10, *(f32*)(&D_00354be0));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x60, *(u32*)(&D_01d9e6e8) + 0x20, *(f32*)(((u32)&D_00354be0 + 4)));
    func_002f3f40(*(u32*)(&D_01d9e6e8) + 0x70, *(u32*)(&D_01d9e6e8) + 0x30, *(f32*)(((u32)&D_00354be0 + 8)));
    *(Q16*)((*(u32*)(&D_01d9e6e8) + 0x80)) = *(Q16*)((*(u32*)(&D_01d9e6e8) + 0x40));
    func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (u32)&D_01d9e940, *(u32*)(&D_01d9e6e8) + 0x50);
    return func_002f3cd8(*(u32*)(&D_01d9e6e8) + 0x80, (u32)&D_01d9e900, *(u32*)(&D_01d9e6e8) + 0x40);
}
