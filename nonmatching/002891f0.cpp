// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028b1c0(u32, u32, u8, u32, u32) asm("func_0028b1c0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00289b30(u32, u32, u32) asm("func_00289b30");

// 0x002891f0 Tz::Select::SetCurrent(int, bool, int, int)
void lift_002891f0(u32 a0, u32 a1, u8 a2, u32 a3, u32 a4) asm("_ZN2Tz6Select10SetCurrentEibii");
void lift_002891f0(u32 a0, u32 a1, u8 a2, u32 a3, u32 a4) {
    u32 s0;
    u32 s1;
    *(u16*)(a0) = a1;
    if (((s32)(((s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)) < (s32)(*(s16*)((a0 + 0x16))))) != 0)) {
        if (((s32)(((s32)(((s32)((a1 << 0x10)) >> 0x10)) < (s32)(((s32)((*(u16*)((a0 + 4)) << 0x10)) >> 0x10)))) != 0)) {
            *(u16*)((a0 + 0x12)) = 0;
        } else {
            *(u16*)(a0) = (*(u16*)((a0 + 4)) + -1);
            *(u16*)((a0 + 0x12)) = ((a1 - *(u16*)((a0 + 4))) + 1);
        }
    }
    if (((s32)(*(u8*)((a0 + 0x25))) == 0)) {
        if (((s32)(func_0028b1c0(a0, a1, a2, a3, a4)) != 0)) {
            func_00289b30(a0, a0, a0 + 0x12);
        }
    }
    if ((a2 != 0)) {
        if (((s32)(*(u32*)(((*(s16*)(a0) << 2) + *(u32*)((a0 + 0x28))))) != 0)) {
            s0 = (*(u32*)((a0 + 0x30)) + (*(s16*)(a0) << 3));
            s1 = *(u32*)(((*(s16*)(a0) << 2) + *(u32*)((a0 + 0x28))));
            func_00138c10(*(u32*)(((*(s16*)(a0) << 2) + *(u32*)((a0 + 0x28)))), *(s16*)(((a3 << 1) + (*(u32*)((a0 + 0x30)) + (*(s16*)(a0) << 3)))));
            if (((s32)(a4) >= 0)) {
                *(u32*)((s1 + 0x188)) = *(s16*)(((a4 << 1) + s0));
            }
        }
    }
    return;
}
