// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350c50 asm("D_00350c50");
extern "C" u32 D_01c6ced0 asm("D_01c6ced0");
extern "C" u32 func_00192048(u32, u32, u32, u32, u32, u32, u32) asm("func_00192048");
extern "C" u32 func_001a9808(u32, u32) asm("func_001a9808");
extern "C" void func_001a98e8(u32, u32, u32, u32, u32) asm("func_001a98e8");

// 0x001ac378 func_001ac378
u32 func_001ac378(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_001ac378");
u32 func_001ac378(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 v0;
    u32 t5;
    u32 t3;
    u32 t6;
    *(u32*)(a0) = (u32)&D_00350c50;
    *(u32*)((a0 + 4)) = a5;
    *(u32*)((a0 + 8)) = a6;
    func_001a98e8(a0 + 0xc, a1, func_00192048(a3, a1, a2, a3, a4, a5, a6), 0, 0);
    v0 = func_001a9808(a2, 0xffffffff);
    *(u32*)((a0 + 0x64)) = 3;
    *(u32*)((a0 + 0x6c)) = v0;
    *(u32*)((a0 + 0x70)) = 0;
    *(u32*)((a0 + 0x74)) = 0;
    *(u32*)((a0 + 0x78)) = a4;
    *(u32*)((a0 + 0x80)) = a3;
    t5 = 0;
    t3 = 0;
    while ((t6 = ((s32)(t5) != 0) ? *(u32*)((t5 + 0x7c)) : *(u32*)(&D_01c6ced0)), (t5 = t6), ((s32)(t6) != 0)) {
        if (((s32)(((s32)(a4) < (s32)(*(u32*)((t6 + 0x78))))) != 0)) {
            break;
        }
        t3 = t6;
    }
    if (((s32)(t3) == 0)) {
        if (((s32)(*(u32*)(&D_01c6ced0)) == 0)) {
            *(u32*)(((u32)&D_01c6ced0 + 4)) = a0;
            *(u32*)(&D_01c6ced0) = a0;
            *(u32*)((a0 + 0x7c)) = 0;
        } else {
            *(u32*)((a0 + 0x7c)) = *(u32*)(&D_01c6ced0);
            *(u32*)(&D_01c6ced0) = a0;
        }
    } else {
        if ((t3 == *(u32*)(((u32)&D_01c6ced0 + 4)))) {
            *(u32*)((t3 + 0x7c)) = a0;
            *(u32*)((a0 + 0x7c)) = 0;
            *(u32*)(((u32)&D_01c6ced0 + 4)) = a0;
        } else {
            *(u32*)((a0 + 0x7c)) = *(u32*)((t3 + 0x7c));
            *(u32*)((t3 + 0x7c)) = a0;
        }
    }
    return v0;
}
