// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00181d30(u32, u32, u32) asm("func_00181d30");

// 0x00181cc0 func_00181cc0
void func_00181cc0(u32 a0, u32 a1) asm("func_00181cc0");
void func_00181cc0(u32 a0, u32 a1) {
    u32 t5;
    u32 t5_0;
    t5 = *(u16*)(a0);
    if ((((s32)((t5 << 0x10)) >> 0x10) != 0xffffffff)) {
        do {
            if ((((s32)((t5 << 0x10)) >> 0x10) == a1)) {
                a0 = (a0 + 4);
                func_00181d30(a0, a0, a0 + *(s16*)((a0 + 2)));
                return;
            }
            t5_0 = *(u16*)((a0 + *(s16*)((a0 + 2))));
            a0 = (a0 + *(s16*)((a0 + 2)));
            t5 = t5_0;
        } while ((((s32)((t5_0 << 0x10)) >> 0x10) != 0xffffffff));
        return;
    } else {
        return;
    }
}
