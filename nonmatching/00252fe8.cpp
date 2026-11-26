// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_01dae6a8 asm("D_01dae6a8");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_00253330(u32) asm("func_00253330");
extern "C" u32 func_002535d0(u32) asm("func_002535d0");
extern "C" u32 func_002888c8() asm("func_002888c8");
extern "C" u32 func_0028cbf8() asm("func_0028cbf8");
extern "C" u32 func_0028d0c8(u32) asm("func_0028d0c8");
extern "C" void func_0023d320(u32) asm("func_0023d320");
extern "C" void func_002425d0(u32) asm("func_002425d0");
extern "C" void func_00242740(u32) asm("func_00242740");
extern "C" void func_002530c8() asm("func_002530c8");
extern "C" void func_00287910(u32, u32, u32) asm("func_00287910");
extern "C" void func_0028c878(u32, u32) asm("func_0028c878");

// 0x00252fe8 func_00252fe8
void func_00252fe8(u32 a0) asm("_ZN2Tz8CampMenu4InitEi");
void func_00252fe8(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    func_0023d320(a0);
    if ((a0 == 0xa)) {
        v0 = func_002888c8();
        a0 = v0;
    }
    if ((a0 != 9)) {
        if ((a0 != 0xf)) {
            if ((a0 != 8)) {
                func_00242740(func_002535d0(a0));
            }
        }
    }
    *(u16*)(&D_01dae6a8) = *(u32*)(&D_0035f3d4);
    if (((s32)(func_0028cbf8()) != 0)) {
        v0_0 = func_0028d0c8(0);
        v0_1 = v0_0;
    } else {
        v0_1 = 0xffffffff;
    }
    *(u16*)(((u32)&D_01dae6a8 + 2)) = v0_1;
    func_00287910(a0, 4, 0);
    func_0028c878(func_00103570(), 3);
    func_002530c8();
    func_002425d0(1);
    ((void(*)())(*(u32*)((func_00253330(a0) + 4))))();
    return;
}
