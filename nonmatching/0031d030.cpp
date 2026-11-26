// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0034a820 asm("D_0034a820");

// 0x0031d030 func_0031d030
void func_0031d030(u32 a0) asm("func_0031d030");
void func_0031d030(u32 a0) {
    u32 s0;
    u32 s0_0;
    *(u32*)(a0) = (u32)&D_0034a820;
    if ((a0 != 0xfffff640)) {
        s0 = (a0 + 0x3cc0);
        while (((a0 + 0x9c0) != (s0 + -0x198))) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + -0x198)) + 0xc))))(s0 + -0x198);
            s0 = (s0 + -0x198);
        }
    }
    if ((a0 != 0xffffffd0)) {
        s0_0 = (a0 + 0x9c0);
        while (((a0 + 0x30) != (s0_0 + -0x198))) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0_0 + -0x198)) + 0xc))))(s0_0 + -0x198);
            s0_0 = (s0_0 + -0x198);
        }
    }
    *(u32*)(a0) = (u32)&D_00347f98;
    ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))) + 4))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), a0);
    return;
}
