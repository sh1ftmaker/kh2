// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348808 asm("D_00348808");
extern "C" u32 func_00141ff0(u32, u32, u32, u32, u32) asm("func_00141ff0");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");

// 0x00143d10 dk::Octree::intersectLineCamera(dk::Line&, kn::FVector&, unsigned short&, dk::ObjOcc*&)
u32 lift_00143d10(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2dk6Octree19intersectLineCameraERNS_4LineERN2kn7FVectorERtRPNS_6ObjOccE");
u32 lift_00143d10(u32 a0, u32 a1, u32 a2, u32 a3) {
    u16 loc_0;
    u32 v0;
    u32 v0_0;
    *(u32*)(a3) = 0;
    if (((s32)(*(u32*)(&D_00348808)) != 0)) {
        func_00141c18(*(u32*)(&D_00348808), 0, 0, 0, 0);
        if (((s32)(func_00141ff0(*(u32*)(&D_00348808), a0, a1, (u32)&loc_0, 0xf)) != 0)) {
            *(u32*)(a3) = 0;
            *(u16*)(a2) = loc_0;
            v0 = 1;
        } else {
            v0 = 0;
        }
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
