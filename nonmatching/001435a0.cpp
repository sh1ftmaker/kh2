// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348814 asm("D_00348814");
extern "C" u32 func_00142688(u32, u32, u32, u32) asm("func_00142688");
extern "C" u32 func_00142848(u32, u32) asm("func_00142848");
extern "C" void func_00141980(u32, u32) asm("func_00141980");

// 0x001435a0 dk::Octree::getSkeltonType(dk::CollisionParam*)
u32 lift_001435a0(u32 a0) asm("_ZN2dk6Octree14getSkeltonTypeEPNS_14CollisionParamE");
u32 lift_001435a0(u32 a0) {
    u32 loc_0;
    u32 loc_800;
    u32 v0;
    u32 v0_0;
    u32 t6;
    u32 t6_1;
    if (((s32)(*(u32*)(&D_00348814)) != 0)) {
        func_00141980(*(u32*)(&D_00348814), (u32)&loc_0);
        v0 = func_00142848(*(u32*)(&D_00348814), a0);
        loc_800 = 0;
        v0_0 = func_00142688(*(u32*)(&D_00348814), (u32)&loc_800, v0, a0);
        t6 = (v0_0 != 0xffff) ? ((*(u32*)((*(u32*)((*(u32*)(&D_00348814) + 0x14)) + (*(u16*)(((*(u32*)((*(u32*)(&D_00348814) + 0xc)) + (v0_0 << 4)) + 0xe)) << 2))) >> 0xe) & 3) : 0;
        t6_1 = t6;
    } else {
        t6_1 = 0;
    }
    return t6_1;
}
