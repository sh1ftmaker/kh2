// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f324 asm("D_0035f324");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");

// 0x00287f90 func_00287f90
u32 func_00287f90(u32 a0) asm("func_00287f90");
u32 func_00287f90(u32 a0) {
    u32 v0;
    if (((s32)(a0) == 0)) {
        v0 = func_00167f18(a0);
        a0 = v0;
    }
    *(u64*)(*(u32*)(&D_0035f324)) = (*(u64*)(*(u32*)(&D_0035f324)) | *(u64*)(a0));
    *(u64*)((*(u32*)(&D_0035f324) + 8)) = (*(u64*)((*(u32*)(&D_0035f324) + 8)) | *(u64*)((a0 + 8)));
    *(u64*)((*(u32*)(&D_0035f324) + 0x10)) = (*(u64*)((*(u32*)(&D_0035f324) + 0x10)) | *(u64*)((a0 + 0x10)));
    *(u64*)((*(u32*)(&D_0035f324) + 0x18)) = (*(u64*)((*(u32*)(&D_0035f324) + 0x18)) | *(u64*)((a0 + 0x18)));
    return a0;
}
