// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f600 asm("D_0035f600");
extern "C" u32 D_0035f604 asm("D_0035f604");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00324448(u32) asm("func_00324448");

// 0x002a7678 func_002a7678
u32 func_002a7678() asm("func_002a7678");
u32 func_002a7678() {
    u32 v0;
    u32 v0_0;
    *(u32*)(&D_0035f600) = func_001063c0(0x104, func_00103570());
    v0 = func_001063c0(0x2350, func_00103570());
    v0_0 = func_00324448(v0);
    *(u32*)(&D_0035f604) = v0;
    return v0_0;
}
