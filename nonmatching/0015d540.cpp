// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0015d4e8 asm("D_0015d4e8");
extern "C" u32 D_0034af40 asm("D_0034af40");
extern "C" u32 D_0034b0e0 asm("D_0034b0e0");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_0013a7d0(u32) asm("func_0013a7d0");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_00239bf8(u32, u32) asm("func_00239bf8");
extern "C" void func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" void func_0013efe8() asm("func_0013efe8");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");

// 0x0015d540 func_0015d540
u32 func_0015d540() asm("_ZN2dk17KeyHoleJumpEffect3outEv");
u32 func_0015d540() {
    func_0013efe8();
    func_00102818(*(u32*)((func_00102c80() + 4)), 0, 0x1d4c0, (u32)&D_0015d4e8, 0x1000);
    func_002362b0((u32)&D_0034af40, func_0013a7d0(2));
    func_00239988((u32)&D_0034b0e0, func_0013a7e8(2), (u32)&D_0034af40);
    return func_00239bf8((u32)&D_0034b0e0, 1);
}
