// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0013fcd8(u32, u32) asm("func_0013fcd8");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");

// 0x0013fd10 func_0013fd10
u32 func_0013fd10(u32 a0) asm("func_0013fd10");
u32 func_0013fd10(u32 a0) {
    u8 frame[32];
    func_0016af58((u32)frame + 0x10, *(u32*)((a0 + 0x44)));
    if (((u32)frame != ((u32)frame + 0x10))) {
        *(Q16*)((u32)frame) = *(Q16*)(((u32)frame + 0x10));
    }
    *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((u32)frame);
    return func_0013fcd8(a0, (u32)frame + 0x10);
}
