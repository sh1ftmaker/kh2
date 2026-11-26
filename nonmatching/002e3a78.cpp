// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2be20 asm("D_01e2be20");
extern "C" void func_002cbf08(u32, u32) asm("func_002cbf08");

// 0x002e3a78 func_002e3a78
void func_002e3a78(u32 a0) asm("_ZN2Ti25trap_get_path_current_dirEP8BD_VALUE");
void func_002e3a78(u32 a0) {
    u8 frame[16];
    if (((s32)(*(u32*)((*(u32*)(a0) + 4))) != 0)) {
        if (((s32)(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508))) != 0)) {
            func_002cbf08((u32)frame, *(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508)));
            if (((u32)frame != (u32)&D_01e2be20)) {
                *(Q16*)((u32)&D_01e2be20) = *(Q16*)((u32)frame);
            }
            *(u32*)(a0) = (u32)&D_01e2be20;
        }
    }
    return;
}
