// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f610 asm("D_0035f610");
extern "C" u32 func_00294000(u32) asm("func_00294000");

// 0x002a9e98 Tz::JmNewInfo::isCharaNew(int)
u32 lift_002a9e98(u32 a0) asm("_ZN2Tz9JmNewInfo10isCharaNewEi");
u32 lift_002a9e98(u32 a0) {
    u32 v0;
    u32 t4;
    u32 t7;
    u32 s1;
    u32 s1_0;
    u32 s1_1;
    v0 = func_00294000(3);
    if (((s32)(a0) < 0)) {
        if (((s32)(*(u32*)((v0 + 8))) > 0)) {
            t4 = 0;
            t7 = (0 >> 5);
            do {
                if (((s32)(((u32)(0) < (u32)((*(u32*)(((t7 << 2) + *(u32*)(&D_0035f610))) & (1 << (t4 & 0x1f)))))) != 0)) {
                    s1 = ((u32)(0) < (u32)((*(u32*)(((t7 << 2) + *(u32*)(&D_0035f610))) & (1 << (t4 & 0x1f)))));
                    break;
                }
                s1 = ((u32)(0) < (u32)((*(u32*)(((t7 << 2) + *(u32*)(&D_0035f610))) & (1 << (t4 & 0x1f)))));
                t4 = (t4 + 1);
                t7 = (t4 >> 5);
            } while (((s32)(t7) != 0));
            s1_0 = s1;
        } else {
            s1_0 = 0;
        }
        s1_1 = s1_0;
    } else {
        s1_1 = ((u32)(0) < (u32)((*(u32*)((((a0 >> 5) << 2) + *(u32*)(&D_0035f610))) & (1 << (a0 & 0x1f)))));
    }
    return s1_1;
}
