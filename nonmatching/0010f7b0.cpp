// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00114620(u32, u32, u32) asm("func_00114620");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_00188fe0(u32, u32) asm("func_00188fe0");
extern "C" u32 func_001a35f8(u32, u32) asm("func_001a35f8");

// 0x0010f7b0 kn::Friend::equipedAbility(int, int)
u32 lift_0010f7b0(u32 a0, u32 a1, u32 a2) asm("_ZN2kn6Friend14equipedAbilityEii");
u32 lift_0010f7b0(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 v0;
    u32 t5;
    u32 t7;
    u32 t5_0;
    if (((s32)(a2) < 0)) {
        a2 = func_00114620(a1, a1, a2);
    }
    if (((s32)(a2) != 0)) {
        if (((s32)(func_001a35f8(a2, func_0016a070(a0))) > 0)) {
            s0 = (func_001058e8() + 0x24f0);
            v0 = (func_00188fe0(s0, func_0016a070(a0)) + 0x54);
            t5 = 0;
            t7 = *(u16*)(v0);
            do {
                if (((*(u16*)(v0) & 0x7fff) == (a2 & 0xffff))) {
                    if (((s32)(((*(u16*)(v0) & 0xffff) >> 0xf)) != 0)) {
                        return 1;
                    }
                }
                t5_0 = (t5 + 1);
                t5 = t5_0;
                t7 = ((s32)(t5_0) < (s32)(0x50));
                v0 = (v0 + 2);
            } while ((t7 != 0));
        }
    }
    return 0;
}
