// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002bfd90 asm("D_002bfd90");
extern "C" u32 D_002bfdb0 asm("D_002bfdb0");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00361a50 asm("D_00361a50");
extern "C" u32 func_00102c48(u32, u32, u32, u32) asm("func_00102c48");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001398d0(u32) asm("func_001398d0");
extern "C" void func_00197760() asm("func_00197760");
extern "C" void func_00197c90() asm("func_00197c90");
extern "C" void func_001c1130(u32, u32, u32) asm("func_001c1130");

// 0x002bf9d8 func_002bf9d8
u32 func_002bf9d8(u32 a0) asm("_ZN8worldmap5EventC1EP4TASKi");
u32 func_002bf9d8(u32 a0) {
    u32 v0;
    v0 = func_00102c48(1, 0x3a98, (u32)&D_002bfd90, 0x4000);
    *(u32*)((v0 + 0x30)) = (u32)&D_002bfdb0;
    *(u32*)(func_001050d8(8)) = v0;
    *(u32*)((func_001050d8(8) + 4)) = a0;
    *(u32*)(&D_00361a50) = func_001050d8(8);
    func_001c1130(0xc, v0, a0);
    *(u32*)((*(u32*)((*(u32*)(&D_0034e948) + 0xb40)) + 0x2c)) = (*(u32*)((*(u32*)((*(u32*)(&D_0034e948) + 0xb40)) + 0x2c)) | 1);
    func_00197760();
    func_00197c90();
    return func_001398d0(0xc9);
}
