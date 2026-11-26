// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" u32 func_001bd918(u32, u32, u32) asm("func_001bd918");

// 0x001bd8c8 YS::PLAYER_COMMAND::_decide()
u32 lift_001bd8c8(u32 a0) asm("_ZN2YS14PLAYER_COMMAND7_decideEv");
u32 lift_001bd8c8(u32 a0) {
    return func_001bd918(a0, func_001b8e88(*(u16*)(((*(u32*)(*(u32*)((a0 + 0x8c0))) + (*(u32*)((*(u32*)(*(u32*)((a0 + 0x8c0))) + 0x6c)) * 0xc)) + 0xe))), 0);
}
