// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aaa4 asm("D_0034aaa4");
extern "C" u32 D_0034aaa8 asm("D_0034aaa8");
extern "C" u32 D_0034aaac asm("D_0034aaac");
extern "C" u32 func_001492f8(u32) asm("func_001492f8");
extern "C" u32 func_00149300(u32) asm("func_00149300");
extern "C" u32 func_0015aa98(u32, u32, u32, f32) asm("func_0015aa98");
extern "C" u32 func_0015aba8(u32, u32, u32) asm("func_0015aba8");
extern "C" u32 func_0019f880(u32, u32) asm("func_0019f880");

// 0x0015b2d0 func_0015b2d0
// minilink-rodata 0x0036b3b0   (float literals live here in the original)
u32 func_0015b2d0() asm("func_0015b2d0");
u32 func_0015b2d0() {
    u32 s1;
    u32 v0;
    s1 = func_001492f8(*(u32*)(&D_0034aaac));
    v0 = func_00149300(*(u32*)(&D_0034aaac));
    if (((s32)(s1) != 0)) {
        if ((v0 == 0)) {
            return func_0015aa98(*(u32*)(&D_0034aaa8), func_0019f880(0xffffffff, 0xffffffff), 0x14, 120.0f);
        } else {
            return func_0015aba8(*(u32*)(&D_0034aaa4), s1, v0);
        }
    } else {
        return func_0015aa98(*(u32*)(&D_0034aaa8), func_0019f880(0xffffffff, 0xffffffff), 0x14, 120.0f);
    }
}
