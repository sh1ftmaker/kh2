// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60588 asm("D_01c60588");
extern "C" void func_001828b8(u32, u32) asm("func_001828b8");

// 0x00182fa0 wtarget_00182fa0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00182fa0(u32 a0, u32 a1) asm("_Z16wtarget_00182fa0jjjj");
void lift_00182fa0(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t7;
    u32 t6;
    u32 t5;
    u32 sp;
    u32 s0;
    u32 sp_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t7 = (u32)&D_01c60588;
            t6 = 0x3f;
            t5 = 0xffffffff;
            do {
                *(u32*)((t7 + 4)) = 0;
                t6 = (t6 + -1);
                t7 = (t7 + 0xc);
            } while ((t6 != t5));
        } else {
            sp = (u32)frame;
        }
        if ((a1 == 0xffff)) {
            if (((s32)(a0) == 0)) {
                if (((s32)((u32)&D_01c60588) != 0)) {
                    s0 = ((u32)&D_01c60588 + 0x300);
                    while (((s0 + -0xc) != (u32)&D_01c60588)) {
                        func_001828b8(s0 + -0xc, a1);
                        s0 = (s0 + -0xc);
                    }
                }
            }
        }
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    return;
}
