// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_002e9d08(u32, u32, u32, u32, u32, u32, u32) asm("func_002e9d08");
extern "C" void func_00190128(u32) asm("func_00190128");

// 0x002e7f80 func_002e7f80
u32 func_002e7f80(u32 a0) asm("_ZN2Ts35trap_target_searcher_get_target_numEP8BD_VALUE");
u32 func_002e7f80(u32 a0) {
    u8 frame[64];
    u32 s1;
    u32 v0;
    func_00190128((u32)frame);
    *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(*(u32*)((a0 + 8)));
    *(Q16*)(((u32)frame + 0x30)) = *(Q16*)(*(u32*)((a0 + 4)));
    s1 = *(u32*)(a0);
    v0 = func_002e9d08(*(u32*)(a0), (u32)frame, (u32)frame + 0x30, (u32)frame + 0x20, 1, (u32)(0) < (u32)(*(u32*)((a0 + 0xc))), 0);
    *(u32*)(a0) = *(u8*)((s1 + 5));
    return v0;
}
