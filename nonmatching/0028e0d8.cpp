// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0028e190(u32, u32) asm("func_0028e190");
extern "C" u32 func_0028e3b8(u32, u32, u32, u32, u32) asm("func_0028e3b8");
extern "C" void func_001391c8(u32, u32, u32, u32, u32, u32) asm("func_001391c8");
extern "C" void func_0028e2a8(u32, u32) asm("func_0028e2a8");

// 0x0028e0d8 func_0028e0d8
u32 func_0028e0d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_0028e0d8");
u32 func_0028e0d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u8 frame[16];
    u32 v0;
    u32 s2;
    u32 v0_0;
    u32 sp;
    func_001391c8(a0, a1, a6, a3, a4, a5);
    func_0028e2a8(a0, a5);
    v0 = func_0028e190(a0, a5);
    if (((s32)(a5) > 0)) {
        s2 = 0;
        do {
            v0_0 = func_0028e3b8(a0, s2, a2, a3, *(s16*)(a4));
            a4 = (a4 + 2);
            s2 = (s2 + 1);
            v0 = v0_0;
        } while (((s32)(((s32)(s2) < (s32)(a5))) != 0));
    } else {
        sp = (u32)frame;
    }
    return v0;
}
