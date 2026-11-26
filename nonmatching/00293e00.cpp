// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f570 asm("D_0035f570");
extern "C" u32 D_0035f574 asm("D_0035f574");
extern "C" u32 D_0035f578 asm("D_0035f578");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" void func_002907c0(u32, u32, u32) asm("func_002907c0");

// 0x00293e00 Tz::JmInfo::Init(ALLOCATOR*)
u32 lift_00293e00(u32 a0) asm("_ZN2Tz6JmInfo4InitEP9ALLOCATOR");
u32 lift_00293e00(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t6;
    u32 t6_2;
    u32 t7;
    *(u32*)(&D_0035f570) = a0;
    v0 = func_001063c0(0x18, a0);
    func_002907c0(v0, *(u32*)(&D_0035f570), 0xa);
    *(u32*)(&D_0035f574) = v0;
    v0_0 = func_001063c0(0x40, *(u32*)(&D_0035f570));
    v0_1 = v0_0;
    t6 = 0xf;
    do {
        *(u32*)(v0_0) = 0;
        t6 = (t6 + -1);
        v0_0 = (v0_0 + 4);
    } while (((s32)(t6) >= 0));
    *(u32*)(&D_0035f578) = v0_1;
    t6_2 = 0xf;
    t7 = *(u32*)(&D_0035f578);
    do {
        *(u32*)((t7 + ((t6_2 - 0xf) * -4))) = 0;
        t6_2 = (t6_2 + -1);
    } while (((s32)(t6_2) >= 0));
    return v0_1;
}
