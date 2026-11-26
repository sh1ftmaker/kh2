// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0019c6f0(u32) asm("func_0019c6f0");
extern "C" u32 func_002bc398(u32, u32) asm("func_002bc398");
extern "C" u32 func_002bc3f0(u32, u32) asm("func_002bc3f0");
extern "C" u32 func_002bc420(u32) asm("func_002bc420");

// 0x00180b98 func_00180b98
u32 func_00180b98(u32 a0) asm("func_00180b98");
u32 func_00180b98(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    v0 = func_0016c028(*(u32*)((a0 + 8)));
    if (((u32)frame != v0)) {
        *(Q16*)((u32)frame) = *(Q16*)(v0);
    }
    s0 = (a0 + 0x100);
    s1 = 7;
    do {
        if (((s32)(*(u32*)((s0 + 8))) != 0)) {
            v0_0 = func_002bc420(*(u32*)((s0 + 8)));
            if ((v0_0 != 0)) {
                if (((s32)(func_0019c6f0(*(u32*)((a0 + 8)))) != 0)) {
                    v0_1 = func_002bc3f0(*(u32*)((s0 + 8)), (u32)frame);
                    v0_3 = v0_1;
                } else {
                    v0_2 = func_002bc398(*(u32*)((s0 + 8)), (u32)frame);
                    v0_3 = v0_2;
                }
                v0_0 = v0_3;
            } else {
                *(u32*)((s0 + 8)) = 0;
            }
            v0 = v0_0;
        }
        s0 = (s0 + 8);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return v0;
}
