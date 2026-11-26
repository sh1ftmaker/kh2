// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00170240() asm("func_00170240");
extern "C" void func_00170e58() asm("func_00170e58");

// 0x001708f8 YS::CACHE_BUFF::Alloc(char const*, int)
u32 lift_001708f8() asm("_ZN2YS10CACHE_BUFF5AllocEPKci");
u32 lift_001708f8() {
    u32 v0;
    v0 = func_00170240();
    if (((s32)(v0) == 0) || ((((s32)(*(u32*)((v0 + 0x28))) < (s32)(0x2710)) ^ 1) != 0)) {
        func_00170e58();
    }
    *(u16*)((v0 + 2)) = (*(u16*)((v0 + 2)) + 1);
    return *(u32*)((v0 + 0x30));
}
