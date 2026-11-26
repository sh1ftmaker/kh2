// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f6288 asm("D_004f6288");
extern "C" u32 D_004f6290 asm("D_004f6290");

// 0x0016c750 func_0016c750
void func_0016c750(u32 a0) asm("_ZN2YS2VM4InitEP9ALLOCATOR");
void func_0016c750(u32 a0) {
    *(u32*)(&D_004f6288) = a0;
    *(u32*)(((u32)&D_004f6290 + 4)) = 0;
    *(u32*)(&D_004f6290) = 0;
}
