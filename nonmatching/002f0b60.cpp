// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0010fa28(u32) asm("func_0010fa28");
extern "C" u32 func_0010fa58(u32) asm("func_0010fa58");
extern "C" void func_00110618(u32) asm("func_00110618");

// 0x002f0b60 func_002f0b60
u32 func_002f0b60(u32 a0) asm("_ZN2kn24trap_friend_follow_enemyEP8BD_VALUE");
u32 func_002f0b60(u32 a0) {
    u32 s0;
    u32 s1;
    u32 v0;
    u32 v0_0;
    s0 = *(u32*)((*(u32*)(a0) + 4));
    s1 = (*(u32*)((*(u32*)(a0) + 4)) + 0x10);
    func_00110618(*(u32*)((*(u32*)(a0) + 4)));
    v0 = func_0010fa28(s0);
    if ((s1 != v0)) {
        *(Q16*)(s1) = *(Q16*)(v0);
    }
    v0_0 = func_0010fa58(s0);
    if (((s0 + 0x20) != v0_0)) {
        *(Q16*)((s0 + 0x20)) = *(Q16*)(v0_0);
    }
    return v0_0;
}
