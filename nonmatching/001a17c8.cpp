// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct A9a00_u32 { u8 _p[0x9a00]; u32 m[1]; };
extern "C" u32 D_01c62fb8 asm("D_01c62fb8");
extern "C" u32 func_001a1840(u32) asm("func_001a1840");

// 0x001a17c8 YS::SHEET::Free(YS::SHEET*)
u32 lift_001a17c8(u32 a0) asm("_ZN2YS5SHEET4FreeEPS0_");
u32 lift_001a17c8(u32 a0) {
    u32 v0;
    v0 = func_001a1840(a0);
    *(u32*)((a0 + 0x258)) = (*(u32*)((a0 + 0x258)) + -1);
    if (((s32)((*(u32*)((a0 + 0x258)) + -1)) <= 0)) {
        ((A9a00_u32*)&D_01c62fb8)->m[*(u32*)((((u32)&D_01c62fb8 + 0x8000) + 0x1b00))] = (((s32)((a0 - (u32)&D_01c62fb8)) >> 3) * 0x3f2b3885);
        *(u32*)((((u32)&D_01c62fb8 + 0x8000) + 0x1b00)) = (*(u32*)((((u32)&D_01c62fb8 + 0x8000) + 0x1b00)) + 1);
    }
    return v0;
}
