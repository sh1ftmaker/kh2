// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00145c68(u32, u32) asm("func_00145c68");

// 0x00145b90 func_00145b90
void func_00145b90(u32 a0, u32 a1) asm("func_00145b90");
void func_00145b90(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t5;
    u32 t6;
    u32 sp;
    u32 s0;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 0x14))) > 0)) {
        t5 = 0;
        t6 = *(u32*)((a0 + 0x14));
        do {
            *(u8*)((t5 + *(u32*)((a0 + 8)))) = 0;
            t5 = (t5 + 0x1c);
            t6 = (t6 + -1);
        } while (((s32)(t6) != 0));
    } else {
        sp = (u32)frame;
    }
    s0 = 0;
    t7 = ((u64)(1) << 0);
    do {
        if (((s32)((a1 & ((u64)(1) << s0))) != 0)) {
            func_00145c68(a0, s0 & 0xff);
        }
        s0 = (s0 + 1);
        t7 = ((s32)(s0) < (s32)(0x40));
    } while ((t7 != 0));
    return;
}
