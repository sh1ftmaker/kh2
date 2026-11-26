// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f40 asm("D_00361f40");
extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00361f70 asm("D_00361f70");
extern "C" u32 func_002e7500() asm("func_002e7500");
extern "C" void func_002cedd0(u32, u32, u32, u32) asm("func_002cedd0");
extern "C" void func_002cf320(u32) asm("func_002cf320");

// 0x002ce958 func_002ce958
u32 func_002ce958(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002ce958");
u32 func_002ce958(u32 a0, u32 a1, u32 a2, u32 a3) {
    *(u8*)((a0 + 4)) = 0;
    *(u32*)((a0 + 0x5c)) = 0;
    *(u32*)(a0) = (u32)&D_00361f70;
    *(u32*)((a0 + 0x60)) = 0;
    *(u32*)(&D_00361f60) = a0;
    *(u32*)((a0 + 0x50)) = a1;
    *(u32*)((a0 + 0x54)) = a2;
    *(u8*)((a0 + 0x58)) = 0;
    func_002cedd0(2, (u32)&D_00361f40, a2, a3);
    func_002cf320(a3);
    return func_002e7500();
}
