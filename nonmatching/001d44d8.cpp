// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d5ba28 asm("D_01d5ba28");

// 0x001d44d8 Tz::JmInfo::GetLimitEntry(...)
u32 lift_001d44d8(u32 a0) asm("_ZN2Tz6JmInfo13GetLimitEntryEz");
u32 lift_001d44d8(u32 a0) {
    u32 t4;
    u32 t5;
    u32 t7;
    if (((s32)(*(u32*)((*(u32*)(&D_01d5ba28) + 4))) > 0)) {
        t4 = 0;
        t5 = *(u32*)(&D_01d5ba28);
        do {
            if ((*(u16*)((((t4 << 6) + t5) + 0x30)) == a0)) {
                return (((t4 << 6) + t5) + 8);
            }
            t4 = (t4 + 1);
            t7 = ((s32)(t4) < (s32)(*(u32*)((t5 + 4))));
            t5 = *(u32*)(&D_01d5ba28);
        } while (((s32)(t7) != 0));
    }
    return 0;
}
