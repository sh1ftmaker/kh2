// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0033caf8 asm("D_0033caf8");
extern "C" u32 func_00105af8(u32) asm("func_00105af8");
extern "C" u32 func_00105c48(u32) asm("func_00105c48");
extern "C" u32 func_002ff538(u32, u32, u32) asm("func_002ff538");
extern "C" void func_001ae4c0(u32, u32, u32) asm("func_001ae4c0");
extern "C" void func_001ae590(u32, u32) asm("func_001ae590");

// 0x00105b58 func_00105b58
u32 func_00105b58() asm("func_00105b58");
u32 func_00105b58() {
    u8 frame[2096];
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    func_001ae590((u32)frame, *(u32*)(&D_0033caf8));
    func_001ae4c0(*(u32*)((u32)frame), (*(u32*)(((u32)frame + 4)) + 0x7ff) >> 0xb, (u32)frame + 0x30);
    s0 = 1;
    do {
        v0_0 = func_002ff538((u32)frame + 0x40, *(u32*)(func_00105c48(s0)), 4);
        if (((s32)(v0_0) == 0)) {
            v0_1 = func_002ff538((u32)frame + 0x45, *(u32*)((func_00105c48(s0) + 4)), 3);
            if (((s32)(v0_1) == 0)) {
                v0_2 = func_002ff538((u32)frame + 0x49, *(u32*)((func_00105c48(s0) + 8)), 2);
                if ((v0_2 == 0)) {
                    return func_00105af8(s0 + 1);
                }
                v0_1 = v0_2;
            }
            v0_0 = v0_1;
        }
        s0 = (s0 + 1);
        v0_2 = v0_0;
    } while (((s32)(((s32)(s0) < (s32)(9))) != 0));
    return v0_2;
}
