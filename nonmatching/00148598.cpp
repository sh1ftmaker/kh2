// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0011cd80(u32, u32, u32, u32, u32, u32) asm("func_0011cd80");
extern "C" void func_00147c78(u32, u32) asm("func_00147c78");

// 0x00148598 func_00148598
void func_00148598(u32 a0, u32 a1) asm("func_00148598");
void func_00148598(u32 a0, u32 a1) {
    u8 frame[16];
    if (((s32)(*(u8*)((a1 + 0xeb))) != 0)) {
        if (((*(u32*)((a1 + 0xf8)) & 4) != 0)) {
            func_00147c78(a0, a1);
            *(u8*)(((*(u32*)((a0 + 0x536c)) + a1) + 0x10e)) = 0;
            *(u64*)((a1 + 0x18)) = 0x800d8;
            *(u64*)((a1 + 0x20)) = 0x31000070;
            *(u16*)((u32)frame) = 0xffff8000;
            *(u16*)(((u32)frame + 2)) = 0xffffffff;
            func_0011cd80(*(u32*)(a1), a0 + 0x1b0, a1 + 0x40, a1 + 8, (u32)frame, 0);
        }
    }
    return;
}
