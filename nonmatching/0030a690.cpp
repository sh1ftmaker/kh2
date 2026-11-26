// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00366164 asm("D_00366164");
extern "C" u32 D_01e389a8 asm("D_01e389a8");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0030a690 func_0030a690
u32 func_0030a690() asm("func_0030a690");
u32 func_0030a690() {
    *(u32*)(&D_00366164) = 0;
    func_002fde18((u32)&D_01e389a8, 0, 4);
    return 0;
}
