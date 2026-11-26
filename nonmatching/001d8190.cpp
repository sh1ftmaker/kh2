// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001d16e8(u32, u32, u32) asm("func_001d16e8");
extern "C" void func_001d5370(u32, u32, u32) asm("func_001d5370");

// 0x001d8190 u_tail4_001d8190(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001d8190(u32 a0, u32 a1, u32 a2) asm("_Z16u_tail4_001d8190jjjj");
void lift_001d8190(u32 a0, u32 a1, u32 a2) {
    ((void(*)(u32, u32, u32))(*(u32*)(*(u32*)(a2))))(a2, *(u8*)((a1 + 0x13)), a2);
    ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a2) + 0x14))))(a2, *(u32*)((a1 + 4)), *(u32*)((a1 + 8)), *(u32*)((a1 + 0xc)));
    if ((*(u32*)((a0 + 0x48)) != 0)) {
        if (((s32)(*(u16*)((a1 + 0x10))) != 0)) {
            func_001d5370(a2 + 4, *(u32*)((a0 + 0x48)), *(u16*)((a1 + 0x10)) + -1);
            func_001d16e8(a2, *(u8*)((a1 + 0x12)), *(u32*)((a0 + 0x2c8)) + 3);
        }
    }
    *(u32*)((((*(u32*)((a0 + 0x2c8)) << 2) + a0) + 0x2a4)) = a2;
    *(u32*)((a0 + 0x2c8)) = (*(u32*)((a0 + 0x2c8)) + 1);
    return;
}
