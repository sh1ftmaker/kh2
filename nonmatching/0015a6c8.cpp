// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034aa40 asm("D_0034aa40");
extern "C" u32 D_0034aa70 asm("D_0034aa70");

// 0x0015a6c8 dk::TargetCamera::change(YS::TARGET*)
void lift_0015a6c8(u32 a0) asm("_ZN2dk12TargetCamera6changeEPN2YS6TARGETE");
void lift_0015a6c8(u32 a0) {
    *(u32*)(&D_0034aa70) = *(u32*)(a0);
    *(u32*)(((u32)&D_0034aa70 + 4)) = *(u32*)((a0 + 4));
    *(u32*)(((u32)&D_0034aa70 + 8)) = *(u32*)((a0 + 8));
    *(u32*)(((u32)&D_0034aa70 + 0xc)) = *(u32*)((a0 + 0xc));
    *(u8*)(&D_0034aa40) = 1;
    *(u32*)(((u32)&D_0034aa70 + 0x10)) = *(u32*)((a0 + 0x10));
}
