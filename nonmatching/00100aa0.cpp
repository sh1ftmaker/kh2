// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00100920(u32, u32, u32) asm("func_00100920");
extern "C" void func_001004c0(u32, u32, u32, u32) asm("func_001004c0");

// 0x00100aa0 func_00100aa0
u32 func_00100aa0(u32 a0, u32 a1, u32 a2) asm("func_00100aa0");
u32 func_00100aa0(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 loc_0;
    u32 loc_4;
    u32 v0_0;
    v0 = func_00100920((((*(u64*)((a0 + 0x10)) >> 3) & 0xff) & 0xff) & 0xff, a0, a2);
    func_001004c0((((*(u64*)((a0 + 0x10)) >> 3) & 0xff) & 0xff) & 0xff, v0, a1 + 8, (u32)&loc_0);
    func_001004c0((((*(u64*)((a0 + 0x10)) >> 3) & 0xff) & 0xff) & 0xff, v0, a2 + 8, (u32)&loc_4);
    if (((s32)(((u32)(loc_4) < (u32)(loc_0))) == 0)) {
        v0_0 = (((u32)(loc_0) < (u32)(loc_4)) ? 0xffffffff : 0);
    } else {
        v0_0 = 1;
    }
    return v0_0;
}
