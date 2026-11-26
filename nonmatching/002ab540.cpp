// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_001a82b0(u32) asm("func_001a82b0");
extern "C" u32 func_002764b0(u32) asm("func_002764b0");

// 0x002ab540 Tz::JmNewInfo::isTreasureNew(int)
void lift_002ab540(u32 a0) asm("_ZN2Tz9JmNewInfo13isTreasureNewEi");
void lift_002ab540(u32 a0) {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 t6;
    s0 = 0;
    s1 = 0;
    do {
        v0 = func_001a82b0(s0);
        if (((s32)(v0) == 0)) {
            return;
        }
        if ((*(u8*)((v0 + 4)) != 0)) {
            s0 = v0;
            continue;
        }
        if ((*(u16*)((v0 + 8)) == 0)) {
            s0 = v0;
            continue;
        }
        if ((*(u16*)((v0 + 8)) == 0x800)) {
            s0 = v0;
            continue;
        }
        v0_0 = func_002764b0(*(u8*)((v0 + 5)));
        if (((s32)(a0) >= 0)) {
            if ((v0_0 != a0)) {
                s0 = v0;
                continue;
            }
        }
        s0 = v0;
        t6 = (*(u32*)(((*(u32*)(&D_0035f610) + ((s1 >> 5) << 2)) + 0xec)) & (1 << (s1 & 0x1f)));
        s1 = (s1 + 1);
    } while (((s32)(t6) == 0));
    return;
}
