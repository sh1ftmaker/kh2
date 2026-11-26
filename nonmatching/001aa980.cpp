// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d708 asm("D_0036d708");
extern "C" u32 D_0043431e asm("D_0043431e");
extern "C" u32 func_001b80d8(u32) asm("func_001b80d8");

// 0x001aa980 func_001aa980
void func_001aa980(u32 a0) asm("func_001aa980");
void func_001aa980(u32 a0) {
    if (((s32)((*(u32*)(*(u32*)(a0)) ^ 4)) == 0)) {
        *(u64*)(*(u32*)((a0 + 0x4c))) = ((*(u32*)((a0 + 4)) | 0x8000) | ((u64)(0xfffe82a9) << 0x2e));
        *(u64*)((*(u32*)((a0 + 0x4c)) + 8)) = *(u64*)(&D_0036d708);
    } else {
        *(u64*)(*(u32*)((a0 + 0x4c))) = ((*(u32*)((a0 + 4)) | 0x8000) | ((u64)(0x182ad) << 0x2e));
        *(u64*)((*(u32*)((a0 + 0x4c)) + 8)) = (u32)&D_0043431e;
    }
    func_001b80d8(a0 + 0x40);
    return;
}
