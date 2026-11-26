// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002c1cb0(u32, u32) asm("func_002c1cb0");

// 0x002c1b60 func_002c1b60
u32 func_002c1b60(u32 a0, u32 a1) asm("_ZN8worldmap4Gumi8setStateEPKN2YS6COURSEE");
u32 func_002c1b60(u32 a0, u32 a1) {
    u32 t7;
    u32 t7_0;
    u32 v0;
    if ((*(u8*)(a1) != 1)) {
        t7 = (*(u8*)(a1) == 2) ? (((*(u32*)((a0 + 0x108)) & 0xfffffffd) & 0xffffffdf) & 0xffffffbf) : (*(u32*)((a0 + 0x108)) | 0x62);
        t7_0 = t7;
    } else {
        t7_0 = (((*(u32*)((a0 + 0x108)) & 0xfffffffd) & 0xffffffdf) & 0xffffffbf);
    }
    *(u32*)((a0 + 0x108)) = t7_0;
    v0 = func_002c1cb0(*(u32*)((a0 + 0xae4)), *(u8*)(a1));
    *(u8*)((a0 + 0xae8)) = *(u8*)(a1);
    return v0;
}
