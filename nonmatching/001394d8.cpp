// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 func_00102750(u32) asm("func_00102750");
extern "C" void func_001394c0(u32) asm("func_001394c0");
extern "C" void func_00139768(u32) asm("func_00139768");

// 0x001394d8 func_001394d8
u32 func_001394d8(u32 a0) asm("func_001394d8");
u32 func_001394d8(u32 a0) {
    func_00139768(a0);
    func_001394c0(a0);
    return func_00102750(*(u32*)(*(u32*)(&D_00347f80)));
}
