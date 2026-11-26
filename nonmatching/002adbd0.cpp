// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 D_0035f628 asm("D_0035f628");
extern "C" u32 D_0035f62c asm("D_0035f62c");
extern "C" u32 func_001a80c8(u32) asm("func_001a80c8");
extern "C" u32 func_001a82b0(u32) asm("func_001a82b0");
extern "C" u32 func_002a43b0(u32) asm("func_002a43b0");

// 0x002adbd0 func_002adbd0
u32 func_002adbd0() asm("_ZN2Tz10JmComplete9CheckNaviEv");
u32 func_002adbd0() {
    u32 s0;
    u32 s2;
    u32 v0_0;
    u32 v0;
    u32 t7;
    u32 t7_1;
    s0 = 0;
    s2 = 0;
    for (;;) {
        v0_0 = func_001a82b0(s0);
        s0 = v0_0;
        if (((s32)(v0_0) == 0)) break;
        if ((*(u8*)((func_001a80c8(*(u16*)((v0_0 + 2))) + 2)) != 0x16)) {
            continue;
        }
        *(u32*)(&D_0035f628) = (*(u32*)(&D_0035f628) + 1);
        v0 = func_002a43b0(s0);
        s2 = (s2 + 1);
        if (((s32)(v0) == 0)) {
            continue;
        }
        t7 = (*(u32*)(&D_0035f620) + 0x12c);
        t7_1 = (t7 + ((s2 >> 5) << 2));
        *(u32*)(t7_1) = (*(u32*)(t7_1) | (1 << (s2 & 0x1f)));
        *(u32*)(&D_0035f62c) = (*(u32*)(&D_0035f62c) + 1);
    }
    return v0_0;
}
