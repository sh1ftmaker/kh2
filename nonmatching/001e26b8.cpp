// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 D_01010102 asm("D_01010102");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");

// 0x001e26b8 func_001e26b8
void func_001e26b8(u32 a0, u32 a1) asm("func_001e26b8");
void func_001e26b8(u32 a0, u32 a1) {
    u32 t6;
    t6 = 0;
    do {
        if (((s32)(*(u8*)((a0 + 0x14c))) == 0)) {
            if (((a0 + 0x140) != a1)) {
                *(Q16*)((a0 + 0x140)) = *(Q16*)(a1);
            }
            *(u8*)((a0 + 0x14c)) = 0xffffff80;
            *(u8*)((a0 + 0x14d)) = 0;
            *(u32*)(&D_003638d0) = (*(u32*)(&D_003638d0) * 0x10dcd);
            *(u8*)((a0 + 0x14e)) = (s32)((u64)(func_00312db8((u32)((*(u32*)(&D_003638d0) * 0x10dcd)), (u32)&D_01010102)));
            *(u8*)((a0 + 0x14f)) = 0x3c;
            return;
        }
        a0 = (a0 + 0x10);
        t6 = (t6 + 1);
    } while (((s32)(((s32)(t6) < (s32)(0xc8))) != 0));
    return;
}
