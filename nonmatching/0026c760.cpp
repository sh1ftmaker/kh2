// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 func_0026cb38() asm("func_0026cb38");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028b1b8(u32) asm("func_0028b1b8");
extern "C" u32 func_0028b1c0(u32, u32) asm("func_0028b1c0");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028b1b0(u32, u32) asm("func_0028b1b0");

// 0x0026c760 func_0026c760
u32 func_0026c760() asm("func_0026c760");
u32 func_0026c760() {
    u32 v0;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    v0 = func_002891e8(*(u32*)(&D_0035f01c));
    s0 = (1 << v0);
    s0_0 = (s0 | func_0028b1b8(*(u32*)(&D_0035f01c)));
    func_0028b1b0(*(u32*)(&D_0035f024), s0 | func_0028b1b8(*(u32*)(&D_0035f01c)));
    s0_1 = (v0 + 1);
    if (((s32)(((s32)(s0_1) < (s32)(func_002892f8(*(u32*)(&D_0035f024))))) == 0) || ((s32)(func_0028b1c0(*(u32*)(&D_0035f024), s0_1)) != 0)) {
        s0_1 = (v0 + -1);
    }
    func_002891f0(*(u32*)(&D_0035f024), s0_1, 0, 0xffffffff, 0xffffffff);
    func_00287cc0(0);
    return func_0026cb38();
}
