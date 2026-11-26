// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347bb0 asm("D_00347bb0");
extern "C" u32 D_003a99f0 asm("D_003a99f0");
extern "C" u32 func_0011ed90(u32, u32) asm("func_0011ed90");
extern "C" void func_00124bb8(u32) asm("func_00124bb8");

// 0x00127f40 func_00127f40
u32 func_00127f40(u32 a0) asm("func_00127f40");
u32 func_00127f40(u32 a0) {
    func_00124bb8(a0);
    *(u32*)(a0) = (u32)&D_00347bb0;
    *(u32*)((a0 + 8)) = (u32)&D_003a99f0;
    *(u32*)((a0 + 0xc)) = ((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) << 6) + (u32)&D_003a99f0);
    *(u32*)((a0 + 0x10)) = (((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) << 6) + (u32)&D_003a99f0) + ((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) - *(u16*)((*(u32*)((a0 + 4)) + 0x10))) << 6));
    *(u32*)((a0 + 0x14)) = ((((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) << 6) + (u32)&D_003a99f0) + ((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) - *(u16*)((*(u32*)((a0 + 4)) + 0x10))) << 6)) + ((*(u16*)((*(u32*)((a0 + 4)) + 0x12)) - *(u16*)((*(u32*)((a0 + 4)) + 0x10))) << 6));
    return func_0011ed90(*(u32*)((a0 + 4)) + *(u32*)((*(u32*)((a0 + 4)) + 0x18)), *(u16*)((*(u32*)((a0 + 4)) + 0x12)) - *(u16*)((*(u32*)((a0 + 4)) + 0x10)));
}
