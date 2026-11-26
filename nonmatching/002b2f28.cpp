// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 D_00374cd8 asm("D_00374cd8");
extern "C" u32 func_00139570(u32) asm("func_00139570");
extern "C" u32 func_001396c0(u32) asm("func_001396c0");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" u32 func_002b23e0(u32) asm("func_002b23e0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00139d78(u32) asm("func_00139d78");

// 0x002b2f28 func_002b2f28
u32 func_002b2f28(u32 a0) asm("_ZN2Tz8JmPuzzle10HideCursorEi");
u32 func_002b2f28(u32 a0) {
    u32 t6;
    u32 s3;
    u32 s0;
    u32 s0_0;
    u32 t6_1;
    u32 s0_2;
    t6 = *(u32*)(&D_0035f634);
    s3 = func_002b23e0(0xffffffff);
    func_00139d78((t6 + (a0 * 0x198)) + 0x4e18);
    if (((s32)(func_001396c0((t6 + (a0 * 0x198)) + 0x4e18)) == 0)) {
        func_00139570((t6 + (a0 * 0x198)) + 0x4e18);
    }
    s0 = (*(u32*)(&D_0035f634) + 0x5148);
    if (((s32)(func_001396c0(*(u32*)(&D_0035f634) + 0x5148)) == 0)) {
        func_00139570(s0);
    }
    if ((a0 == 0)) {
        s0_0 = (*(u32*)(&D_0035f634) + 0x4fb0);
        if (((s32)(func_001396c0(*(u32*)(&D_0035f634) + 0x4fb0)) == 0)) {
            func_00139570(s0_0);
        }
        return func_00139570(*(u32*)(&D_0035f634) + 0x4c80);
    } else {
        t6_1 = *(u32*)(s3);
        s0_2 = (*(u32*)(&D_0035f634) + 0x4e18);
        func_00138c10(*(u32*)(&D_0035f634) + 0x4e18, *(s16*)(((((t6_1 >> 0x1b) & 1) * 6) + (u32)&D_00374cd8)));
        return func_0028dcc0(*(u32*)(&D_0035f634) + 0x4c80, s0_2);
    }
}
