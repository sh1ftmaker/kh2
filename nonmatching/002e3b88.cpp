// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2be20 asm("D_01e2be20");
extern "C" void func_002cb7c8(u32, u32, u32) asm("func_002cb7c8");

// 0x002e3b88 func_002e3b88
void func_002e3b88(u32 a0) asm("func_002e3b88");
void func_002e3b88(u32 a0) {
    u8 frame[16];
    if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
        if (((s32)(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508))) != 0)) {
            func_002cb7c8((u32)frame, *(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508)), *(u32*)((a0 + 4)));
            if (((u32)frame != (u32)&D_01e2be20)) {
                *(Q16*)((u32)&D_01e2be20) = *(Q16*)((u32)frame);
            }
            *(u32*)(a0) = (u32)&D_01e2be20;
        }
    }
    return;
}
