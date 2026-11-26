// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2be20 asm("D_01e2be20");
extern "C" u32 func_002cb8e0(u32) asm("func_002cb8e0");

// 0x002e3d48 func_002e3d48
void func_002e3d48(u32 a0) asm("_ZN2Ti28trap_get_path_last_point_posEP8BD_VALUE");
void func_002e3d48(u32 a0) {
    u32 v0;
    if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
        if (((s32)(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508))) != 0)) {
            v0 = func_002cb8e0(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508)));
            if ((v0 != (u32)&D_01e2be20)) {
                *(Q16*)((u32)&D_01e2be20) = *(Q16*)(v0);
            }
            *(u32*)(a0) = (u32)&D_01e2be20;
        }
    }
    return;
}
