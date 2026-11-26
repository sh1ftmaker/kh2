// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S820_12_u32 { u8 _p[12]; u32 m; u8 _q[804]; };
struct S820_4_u32 { u8 _p[4]; u32 m; u8 _q[812]; };
extern "C" u32 D_01e2fe48 asm("D_01e2fe48");
extern "C" u32 func_002f5020(u32) asm("func_002f5020");

// 0x002f62b8 func_002f62b8
u32 func_002f62b8(u32 a0) asm("func_002f62b8");
u32 func_002f62b8(u32 a0) {
    u32 v0;
    v0 = func_002f5020(a0);
    if (((s32)(v0) >= 0)) {
        ((S820_4_u32*)&D_01e2fe48)[a0].m = 1;
        ((S820_12_u32*)&D_01e2fe48)[a0].m = v0;
    }
    return v0;
}
