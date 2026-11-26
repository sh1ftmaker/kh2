// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_001616d8(u32) asm("func_001616d8");

// 0x001616f0 func_001616f0
void func_001616f0(u32 a0) asm("func_001616f0");
void func_001616f0(u32 a0) {
    u8 frame[64];
    if (((s32)(*(u32*)((a0 + 0x48))) != 0)) {
        if (((s32)(((u32(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x48))) + 0x18))))(*(u32*)((a0 + 0x48)), (u32)frame)) != 0)) {
            func_001616d8(a0);
        } else {
            if ((a0 != (u32)frame)) {
                *(Q16*)(a0) = *(Q16*)((u32)frame);
                *(Q16*)((a0 + 0x10)) = *(Q16*)(((u32)frame + 0x10));
                *(Q16*)((a0 + 0x20)) = *(Q16*)(((u32)frame + 0x20));
                *(Q16*)((a0 + 0x30)) = *(Q16*)(((u32)frame + 0x30));
            }
        }
    }
    return;
}
