// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00257770() asm("func_00257770");

// 0x00262650 func_00262650
void func_00262650() asm("func_00262650");
void func_00262650() {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1;
    u32 v0_1;
    v0 = func_00257770();
    v0_0 = func_00139d78(v0 + 0x9c8);
    if (((s32)(v0_0) == 0)) {
        s0 = (v0 + 0xd30);
        s1 = 0;
        do {
            s0 = (s0 + 0x1b4);
            v0_1 = func_00139d78(s0);
            s1 = (s1 + 1);
            if (((s32)(v0_1) != 0)) {
                return;
            }
        } while (((s32)(((s32)(s1) < (s32)(5))) != 0));
    }
    return;
}
