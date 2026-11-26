// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036b600 asm("D_0036b600");
extern "C" u32 func_002ff3fc(u32) asm("func_002ff3fc");
extern "C" u32 func_002ffbe0(u32) asm("func_002ffbe0");
extern "C" u32 func_0030e770(u32, u32, u32) asm("func_0030e770");
extern "C" void func_002feee8(u32, u32) asm("func_002feee8");
extern "C" void func_002ff2e8(u32, u32, u32) asm("func_002ff2e8");

// 0x00167358 wtarget_00167358(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_00167358(u32 a0, u32 a1, u32 a2) asm("_Z16wtarget_00167358jjjj");
u32 lift_00167358(u32 a0, u32 a1, u32 a2) {
    u8 frame[256];
    u32 s0;
    u32 v0;
    u32 s1;
    u32 v0_1;
    func_002ff2e8((u32)frame, (u32)&D_0036b600, a2);
    func_002feee8((u32)frame, a0);
    s0 = func_002ff3fc((u32)&D_0036b600);
    v0 = func_002ff3fc((u32)frame);
    if (((s32)(((s32)(s0) < (s32)(v0))) != 0)) {
        s1 = ((u32)frame + s0);
        do {
            if ((*(s8*)(s1) == 0x2f)) {
                *(u8*)(s1) = 0x5c;
                s0 = (s0 + 1);
            } else {
                s0 = (s0 + 1);
                *(u8*)(s1) = func_002ffbe0(*(s8*)(s1));
            }
            s1 = ((u32)frame + s0);
        } while (((s32)(((s32)(s0) < (s32)(v0))) != 0));
    }
    do {
        v0_1 = func_0030e770((u32)frame, a1, a2);
    } while (((s32)(v0_1) < 0));
    return v0_1;
}
