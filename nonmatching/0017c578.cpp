// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32) asm("func_0016c028");

// 0x0017c578 func_0017c578(void*)
void lift_0017c578(u32 a0, u32 a1) asm("_Z13func_0017c578Pv");
void lift_0017c578(u32 a0, u32 a1) {
    u32 t7;
    u32 t3;
    u32 t7_0;
    u8 t7_1;
    if (((s32)((*(u32*)((a1 + 0x108)) & 0x10000)) != 0)) {
        *(u32*)((a1 + 0x108)) |= 0x20000;
    } else {
        *(u32*)((a1 + 0x108)) &= 0xfffdffff;
    }
    *(u32*)((a1 + 0x108)) = (*(u32*)((a1 + 0x108)) & 0xfffeffff);
    *(f32*)((a1 + 0xd8)) = (*(f32*)((a1 + 0xd8)) + *(f32*)((func_0016c028(a1) + 4)));
    if ((0.0f < *(f32*)((a1 + 0xcc)))) {
        if (((a1 + 0x20) != (a1 + 0xc0))) {
            *(Q16*)((a1 + 0x20)) = *(Q16*)((a1 + 0xc0));
        }
    }
    t3 = *(u32*)((a1 + 0x10c));
    *(u32*)((a1 + 0x108)) = ((*(u32*)((a1 + 0x108)) & 0xff7fffff) & 0xfeffffff);
    *(u32*)((a1 + 0x10c)) = (*(u32*)((a1 + 0x10c)) | 1);
    t7_0 = *(u32*)((*(u32*)((a1 + 0xc)) + 8));
    t7_1 = (t7_0 & 1);
    if (((s32)(t7_1) == 0)) {
        *(u32*)((a1 + 0x10c)) = (t3 | 3);
    }
    return;
}
