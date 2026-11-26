// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_001947c0(u32, u32) asm("func_001947c0");
extern "C" u32 func_001a9110(u32) asm("func_001a9110");

// 0x00194930 func_00194930
u32 func_00194930() asm("_ZN2YS8AREAINFO6SetBgmEv");
u32 func_00194930() {
    return func_001a9110((func_001947c0(*(u8*)(((u32)&D_0032bae0 + 1)), *(u8*)(&D_0032bae0)) + (*(u8*)(((*(u8*)(&D_0032bae0) + (u32)&D_0032bb30) + 0x23ec)) << 2)) + 0x10);
}
