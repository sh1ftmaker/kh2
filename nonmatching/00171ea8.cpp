// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01c5f480 asm("D_01c5f480");
extern "C" u32 func_001ca148(u32, u32, u32, f32) asm("func_001ca148");

// 0x00171ea8 func_00171ea8
u32 func_00171ea8(u32 a0) asm("_ZN2YS32trap_obj_get_lightcycle_movementEP8BD_VALUE");
u32 func_00171ea8(u32 a0) {
    u8 frame[16];
    u32 v0;
    v0 = func_001ca148((u32)frame, *(u32*)((*(u32*)(a0) + 4)), *(u32*)((*(u32*)((a0 + 4)) + 4)), *(f32*)((a0 + 8)));
    if (((u32)frame != (u32)&D_01c5f480)) {
        *(Q16*)((u32)&D_01c5f480) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_01c5f480;
    return v0;
}
