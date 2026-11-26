// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002f3e20(u32, u32) asm("func_002f3e20");
extern "C" void func_002f3d50(u32, u32, u32) asm("func_002f3d50");
extern "C" void func_002f3d98(u32, u32) asm("func_002f3d98");
extern "C" void func_002f3f58(u32, u32, u32) asm("func_002f3f58");
extern "C" void func_002f4000(u32, u32, u32, u32) asm("func_002f4000");

// 0x002f4310 func_002f4310
u32 func_002f4310(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002f4310");
u32 func_002f4310(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[80];
    u32 s0;
    u32 s0_0;
    s0 = ((u32)frame + 0x40);
    func_002f4000((u32)frame, a1, a2, a3);
    func_002f3d50(s0, a3, a2);
    s0_0 = ((u32)frame + 0x20);
    func_002f3d98((u32)frame, s0);
    func_002f3d98(s0_0, a2);
    func_002f3d50((u32)frame + 0x10, s0_0, (u32)frame);
    func_002f3f58((u32)frame, (u32)frame, a1);
    return func_002f3e20(a0, (u32)frame);
}
