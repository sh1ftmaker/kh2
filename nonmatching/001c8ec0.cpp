// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0015ee10(u32) asm("func_0015ee10");
extern "C" u32 func_0015ee90(u32) asm("func_0015ee90");
extern "C" u32 func_002fd248() asm("func_002fd248");

// 0x001c8ec0 func_001c8ec0
u32 func_001c8ec0() asm("_ZN2YS8DARKNESS3SetEi");
u32 func_001c8ec0() {
    u32 v0;
    u32 s0;
    u32 t7;
    u32 v0_0;
    u8 t7_1;
    u32 v0_2;
    u8 t7_3;
    u32 v0_4;
    v0 = func_002fd248();
    s0 = 0;
    t7 = *(u64*)((v0 + 8));
    v0_0 = v0;
    do {
        t7_1 = (((u64)(*(u64*)((v0 + 8))) >> s0) & 1);
        if (((t7_1 & 0xff) != 0)) {
            v0_2 = func_0015ee90(s0);
            v0_0 = v0_2;
        } else {
            t7_3 = (((u64)(*(u64*)((v0 + 0x10))) >> s0) & 1);
            if (((t7_3 & 0xff) != 0)) {
                v0_4 = func_0015ee10(s0);
                v0_0 = v0_4;
            }
        }
        s0 = (s0 + 1);
        t7 = ((s32)(s0) < (s32)(0x40));
    } while ((t7 != 0));
    return v0_0;
}
