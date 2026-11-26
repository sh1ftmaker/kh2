// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S2_1_s8 { u8 _p[1]; s8 m; };
extern "C" u32 D_0035f4bc asm("D_0035f4bc");
extern "C" u32 D_0035f4c0 asm("D_0035f4c0");
extern "C" u32 D_0035f4c4 asm("D_0035f4c4");
extern "C" u32 D_0035f4c8 asm("D_0035f4c8");
extern "C" u32 D_0035f4cc asm("D_0035f4cc");
extern "C" u32 D_0035f4d0 asm("D_0035f4d0");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");
extern "C" u32 D_0035f4dc asm("D_0035f4dc");
extern "C" u32 D_0035f4e4 asm("D_0035f4e4");
extern "C" u32 D_00374590 asm("D_00374590");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x002926c0 func_002926c0
u32 func_002926c0(u32 a0) asm("_ZN2Tz8UnitLoad4InitEi");
u32 func_002926c0(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    *(u32*)(&D_0035f4bc) = *(s8*)(((a0 << 1) + (u32)&D_00374590));
    *(u32*)(&D_0035f4c0) = (((S2_1_s8*)&D_00374590)[a0].m << 0xb);
    *(u32*)(&D_0035f4c4) = a0;
    *(u32*)(&D_0035f4c8) = 0;
    *(u32*)(&D_0035f4cc) = 0;
    *(u32*)(&D_0035f4d0) = 0;
    v0 = func_001063f0(*(u32*)(&D_0035f4bc) << 4, func_00103570());
    *(u32*)(&D_0035f4d4) = v0;
    func_002fde18(v0, 0, *(u32*)(&D_0035f4bc) << 4);
    v0_0 = func_001063f0(*(u32*)(&D_0035f4bc) << 2, func_00103570());
    *(u32*)(&D_0035f4dc) = v0_0;
    func_002fde18(v0_0, 0, *(u32*)(&D_0035f4bc) << 2);
    v0_1 = func_001063f0(0x80, func_00103570());
    *(u32*)(&D_0035f4e4) = v0_1;
    return func_002fde18(v0_1, 0, 0x80);
}
