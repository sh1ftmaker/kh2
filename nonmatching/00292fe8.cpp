// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00292e60 asm("D_00292e60");
extern "C" u32 D_0035f4c0 asm("D_0035f4c0");
extern "C" u32 D_0035f4c8 asm("D_0035f4c8");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");
extern "C" u32 D_0035f4dc asm("D_0035f4dc");
extern "C" u32 D_0035f4e2 asm("D_0035f4e2");
extern "C" u32 D_0035f4e4 asm("D_0035f4e4");
extern "C" void func_00168410(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00168410");
extern "C" void func_002ff3fc(u32) asm("func_002ff3fc");

// 0x00292fe8 func_00292fe8
u32 func_00292fe8() asm("_ZN2Tz8UnitLoad12BackReadFaceEv");
u32 func_00292fe8() {
    u32 a2_0;
    u32 t4;
    u32 t6;
    u32 t7;
    u32 t6_1;
    u32 t5;
    u32 t7_2;
    u32 a3_3;
    u32 t4_4;
    u32 a2_5;
    a2_0 = *(u32*)(*(u32*)(&D_0035f4dc));
    t4 = (((s32)(a2_0) >> 0x10) << 4);
    t6 = *(u32*)(&D_0035f4d4);
    func_002ff3fc(*(u32*)(&D_0035f4e4));
    *(u32*)((t4 + t6)) = (a2_0 & 0xffff);
    t7 = *(u32*)(&D_0035f4d4);
    *(u32*)(((t4 + t7) + 4)) = 2;
    t6_1 = *(u32*)(&D_0035f4d4);
    t5 = *(u32*)(&D_0035f4c8);
    *(u32*)(((t4 + t6_1) + 0xc)) = (t5 + (((s32)(a2_0) >> 0x10) * *(u32*)(&D_0035f4c0)));
    t7_2 = *(u32*)(&D_0035f4d4);
    *(u32*)(((t4 + t7_2) + 8)) = 0;
    a3_3 = *(u32*)(&D_0035f4c0);
    t4_4 = (t4 + *(u32*)(&D_0035f4d4));
    a2_5 = ((a2_0 & 0xffff) * a3_3);
    func_00168410(*(u32*)(&D_0035f4e4), *(u32*)((t4_4 + 0xc)), (s32)((((s32)(a2_5) < (s32)(0)) ? (a2_5 + 0x7ff) : a2_5)) >> 0xb, ((s32)((((s32)(a3_3) < (s32)(0)) ? (a3_3 + 0x7ff) : a3_3)) >> 0xb) & 0xffff, (u32)&D_00292e60, t4_4, ((s32)(a2_0) >> 0x10) * *(u32*)(&D_0035f4c0), a3_3 + 0x7ff);
    *(u8*)(&D_0035f4e2) = 1;
    return 0;
}
