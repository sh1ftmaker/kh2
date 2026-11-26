// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_001a15d0(u32, u32) asm("func_001a15d0");
extern "C" u32 func_001a17c8(u32) asm("func_001a17c8");
extern "C" void func_001a1c70(u32) asm("func_001a1c70");

// 0x001adbc0 func_001adbc0
u32 func_001adbc0() asm("func_001adbc0");
u32 func_001adbc0() {
    u32 v0;
    *(u8*)(((u32)&D_0032bb30 + 0x3524)) = 0;
    *(u8*)(((u32)&D_0032bb30 + 0x3525)) = 0;
    v0 = func_001a15d0(1, 0xffffffff);
    func_001a1c70(v0);
    return func_001a17c8(v0);
}
