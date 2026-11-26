// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00288008() asm("func_00288008");
extern "C" u32 func_00288040() asm("func_00288040");
extern "C" void func_00323af8(u32, u32) asm("func_00323af8");

// 0x0028b258 func_0028b258
u32 func_0028b258(u32 a0) asm("func_0028b258");
u32 func_0028b258(u32 a0) {
    u8 frame[80];
    u32 v0;
    u32 t7;
    u32 t5;
    u32 sp;
    func_00323af8((u32)frame, func_00167f18(0));
    if (((s32)(func_00288040()) != 0)) {
        *(u64*)((u32)frame) = (*(u64*)((u32)frame) | *(u64*)(func_00288008()));
    }
    v0 = (s32)((u64)(((u32)(0) < (u32)((*(u64*)((u32)frame) & (u32)(a0))))));
    if (((u32)frame != 0xffffffe0)) {
        t7 = ((u32)frame + 0x40);
        t5 = ((u32)frame + 0x20);
        do {
            t7 = (t7 + -0x10);
        } while ((t5 != t7));
    } else {
        sp = (u32)frame;
    }
    return v0;
}
