// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d018 asm("D_0036d018");
extern "C" u32 D_01c61afc asm("D_01c61afc");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");

// 0x00195360 func_00195360
u32 func_00195360(u32 a0) asm("func_00195360");
u32 func_00195360(u32 a0) {
    u32 s2;
    u32 v0;
    s2 = func_00168b88(*(u32*)(&D_01c61afc), 0x18, (*(s8*)(&D_0036d018) | (*(s8*)(((u32)&D_0036d018 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d018 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d018 + 1)) << 8)), 0);
    v0 = func_00168b88(*(u32*)(&D_01c61afc), 0x19, (*(s8*)(&D_0036d018) | (*(s8*)(((u32)&D_0036d018 + 3)) << 0x18)) | ((*(s8*)(((u32)&D_0036d018 + 2)) << 0x10) | (*(s8*)(((u32)&D_0036d018 + 1)) << 8)), 0);
    *(u32*)(a0) = *(u32*)((s2 + 8));
    *(u32*)((a0 + 4)) = *(u32*)((v0 + 8));
    return v0;
}
