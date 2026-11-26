// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348804 asm("D_00348804");
extern "C" u32 func_00141ff0(u32, u32, u32, u32, u32) asm("func_00141ff0");
extern "C" u32 func_00165db8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00165db8");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");

// 0x00143c68 func_00143c68
u32 func_00143c68(u32 a0, u32 a1) asm("_ZN2dk6Octree15intersectLineIkERNS_4LineERN2kn7FVectorE");
u32 func_00143c68(u32 a0, u32 a1) {
    u8 frame[32];
    u32 s0;
    *(u32*)(((u32)frame + 0x14)) = 0;
    *(u32*)((u32)frame) = 0;
    s0 = func_00165db8(a0, a1, (u32)frame + 0x10, 0x200, 0x200, 0, (u32)frame + 0x14, 0xf);
    func_00141c18(*(u32*)(&D_00348804), 0x200, 0x200, 0, 0);
    return ((u32)(0) < (u32)((s0 | func_00141ff0(*(u32*)(&D_00348804), a0, a1, (u32)frame + 0x10, 0xf))));
}
