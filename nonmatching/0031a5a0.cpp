// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347d90 asm("D_00347d90");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 func_0031a840(u32) asm("func_0031a840");
extern "C" void func_002361d0(u32) asm("func_002361d0");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0031a5a0 func_0031a5a0
u32 func_0031a5a0(u32 a0) asm("func_0031a5a0");
u32 func_0031a5a0(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347d90;
    *(u32*)((a0 + 0x380)) = (u32)&D_00347e60;
    func_00239870(a0 + 0x398);
    *(u32*)((a0 + 0x380)) = (u32)&D_00347f98;
    *(u32*)((a0 + 0x1c0)) = (u32)&D_00347e80;
    func_002361d0(a0 + 0x1e0);
    *(u32*)((a0 + 0x1c0)) = (u32)&D_00347f98;
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239870(a0 + 0x18);
    return func_0031a840(a0);
}
