// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e8 asm("D_01d9e6e8");
extern "C" u32 D_01d9e730 asm("D_01d9e730");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f98(u32, u32) asm("func_002f3f98");

// 0x00209df0 func_00209df0
u32 func_00209df0(u32 a0, u32 a1, u32 a2) asm("func_00209df0");
u32 func_00209df0(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    s0 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4)));
    func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 4))) + 0xe0, *(u32*)(&D_01d9e6e8) + 0x10);
    func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (u32)&D_01d9e730, *(u32*)(&D_01d9e6e8) + 0x50);
    func_002f3f98(s0 + 0xa0, *(u32*)(&D_01d9e6e8) + 0x50);
    return func_002f3d08(*(u32*)(&D_01d9e6e8) + 0x50, (u32)&D_01d9e8c0, *(u32*)(&D_01d9e6e8) + 0x50);
}
