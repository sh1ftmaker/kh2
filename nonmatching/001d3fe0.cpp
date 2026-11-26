// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d5ba28 asm("D_01d5ba28");
extern "C" u32 func_001d3c78(u32) asm("func_001d3c78");

// 0x001d3fe0 func_001d3fe0
u32 func_001d3fe0(u32 a0) asm("_ZN2YS11LIMIT_TABLE3GetEi");
u32 func_001d3fe0(u32 a0) {
    u32 s1;
    u32 t6;
    u32 t7;
    u32 s0;
    u32 v0;
    if (((s32)(*(u32*)((*(u32*)(&D_01d5ba28) + 4))) > 0)) {
        s1 = 0;
        t6 = *(u32*)(&D_01d5ba28);
        t7 = (0 << 6);
        do {
            t7 = (t6 + t7);
            s1 = (s1 + 1);
            s0 = (t7 + 8);
            v0 = func_001d3c78(s0);
            t6 = s0;
            if (((s32)(v0) != 0)) {
                if ((*(u16*)((s0 + 0x28)) == a0)) {
                    return t6;
                }
            }
            t7 = (s1 << 6);
            t6 = *(u32*)(&D_01d5ba28);
        } while (((s32)(t7) != 0));
    }
    return 0;
}
