// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 func_00141ff0(u32, u32, u32, u32, u32) asm("func_00141ff0");
extern "C" u32 func_00165db8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00165db8");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");

// 0x00143b88 dk::Octree::intersectLine(dk::Line&, kn::FVector&, unsigned short&, dk::ObjOcc*&, int)
u32 lift_00143b88(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2dk6Octree13intersectLineERNS_4LineERN2kn7FVectorERtRPNS_6ObjOccEi");
u32 lift_00143b88(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 loc_0;
    u16 loc_10;
    u32 v0;
    u16 loc_12;
    loc_0 = 0;
    *(u32*)(a3) = 0;
    v0 = func_00165db8(a0, a1, (u32)&loc_10, 0, 0, 0, a3, a4);
    *(u16*)(a2) = loc_10;
    func_00141c18(*(u32*)(&D_00348804), 0, 0, 0, 0);
    if (((s32)(func_00141ff0(*(u32*)(&D_00348804), a0, a1, (u32)&loc_12, a4)) != 0)) {
        *(u32*)(a3) = 0;
        *(u16*)(a2) = loc_12;
        v0 = 1;
    }
    return v0;
}
