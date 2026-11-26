// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003591c8 asm("D_003591c8");
extern "C" u32 D_00359940 asm("D_00359940");
extern "C" u32 D_01da8bb0 asm("D_01da8bb0");
extern "C" u32 func_002f3918(u32, u32) asm("func_002f3918");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");

// 0x0020f188 func_0020f188
u32 func_0020f188() asm("func_0020f188");
u32 func_0020f188() {
    *(u64*)(((u32)&D_00359940 + 0x20)) = *(u64*)(((u32)&D_01da8bb0 + 0x40));
    *(u64*)(((u32)&D_00359940 + 0x28)) = *(u64*)(((u32)&D_01da8bb0 + 0x48));
    func_002f25a0(0, 0);
    return func_002f3918(*(u32*)(&D_003591c8), (u32)&D_00359940);
}
