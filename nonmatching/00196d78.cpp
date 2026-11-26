// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 func_001384a0(u32) asm("func_001384a0");
extern "C" u32 func_002ba610() asm("func_002ba610");
extern "C" u32 func_002bc798() asm("func_002bc798");
extern "C" void func_0014c9f0(u32) asm("func_0014c9f0");
extern "C" void func_001c11a8(u32) asm("func_001c11a8");
extern "C" void func_00226da8(u32) asm("func_00226da8");

// 0x00196d78 func_00196d78
u32 func_00196d78(u32 a0) asm("func_00196d78");
u32 func_00196d78(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    func_00226da8(a0);
    func_0014c9f0(4);
    func_001c11a8(0xc);
    v0 = func_001384a0(1);
    if (((((*(u16*)((*(u32*)((a0 + 0x3c)) + 2)) >> 5) & 1) & 0xff) == 0)) {
        v0_0 = func_002bc798();
        v0 = v0_0;
    }
    if (((s32)(((*(u16*)((*(u32*)((a0 + 0x3c)) + 2)) & 1) & 0xff)) != 0)) {
        v0_1 = func_002ba610();
        v0 = v0_1;
    }
    *(u32*)(&D_0035037c) = 0;
    return v0;
}
