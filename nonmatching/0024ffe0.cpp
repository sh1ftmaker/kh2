// FIXME(lane): not matching; origin: permute (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee50 asm("D_0035ee50");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_00287cd0() asm("func_00287cd0");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_0028ae28(u32, u32) asm("func_0028ae28");
extern "C" void func_002426a0(u32) asm("func_002426a0");
extern "C" void func_0024fbd0() asm("func_0024fbd0");
extern "C" void func_0024fd28() asm("func_0024fd28");
extern "C" void func_002507a0() asm("func_002507a0");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00287c90(u32) asm("func_00287c90");
extern "C" void func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");

// 0x0024ffe0 func_0024ffe0
void func_0024ffe0() asm("_ZN2Tz4LMMU7CtrlTopEv");
void func_0024ffe0() {
    u32 s2;
    u32 v0;
    u32 v0_0;
    s2 = func_00287cd0();
    v0 = func_00289380(*(u32*)(&D_0035ee34));
    if (((s32)(*(u8*)(&D_0035ee50)) == 0)) {
        if ((v0 != 0xffffffff) || ((s32)(func_00289310(*(u32*)(&D_0035ee34))) != 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ee34), 0)) == 0)) {
                func_002426a0(0);
                func_0024fd28();
            }
        }
        if (((s32)(s2) == 0)) {
            if (((s32)(func_0028ae28(*(u32*)(&D_0035ee34), 0)) != 0)) {
                func_00287c90(1);
                func_002507a0();
            }
        }
        func_00287df0(v0, func_00289310(*(u32*)(&D_0035ee34)), 1, 0, 1);
        v0_0 = (v0 + 4);
        switch (v0_0) {
        case 0:
        case 2:
            func_00287da0();
            return;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            func_0024fbd0();
            func_00287bd0(1, 0);
            func_00287cc0(0);
            return;
        case 1:
        case 3:
        default:
            return;
        }
    } else {
        return;
    }
}
