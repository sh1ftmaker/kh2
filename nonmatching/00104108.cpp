// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001040f8() asm("func_001040f8");
extern "C" u32 func_001045f0() asm("func_001045f0");
extern "C" u32 func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" void func_00105fc8() asm("func_00105fc8");

// 0x00104108 func_00104108
u32 func_00104108() asm("_ZN10GUMIBATTLE23ChangeGameModeFromPauseEv");
u32 func_00104108() {
    u32 v0;
    u32 v0_0;
    v0 = func_001040f8();
    if ((*(s8*)((v0 + 3)) != 2)) {
        if (((s32)(((s32)(*(s8*)((v0 + 3))) < (s32)(3))) == 0)) {
            if ((*(s8*)((v0 + 3)) != 3)) {
                return v0;
            } else {
                func_00105fc8();
                return func_0014aa58(func_0014aba8(), 0xf, 0);
            }
        } else {
            return v0;
        }
    } else {
        v0_0 = func_001045f0();
        ((void(*)(u32))(*(u32*)(*(u32*)(v0_0))))(v0_0);
        return func_0014aa58(func_0014aba8(), 0xf, 0);
    }
}
