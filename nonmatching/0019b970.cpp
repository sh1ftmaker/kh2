// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c62198 asm("D_01c62198");
extern "C" void func_00199cd0(u32, u32) asm("func_00199cd0");

// 0x0019b970 wtarget_0019b970(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0019b970(u32 a0, u32 a1) asm("_Z16wtarget_0019b970jjjj");
void lift_0019b970(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t6;
    u32 t5;
    u32 t7;
    u32 sp;
    u32 s0;
    u32 sp_0;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            t6 = 0x3f;
            t5 = 0xffffffff;
            t7 = (u32)&D_01c62198;
            do {
                *(u32*)(((t7 + ((t6 - 0x3f) * -0x38)) + 4)) = 0;
                *(u32*)((((t7 + ((t6 - 0x3f) * -0x38)) + 4) + 8)) = 0;
                *(u32*)((((t7 + ((t6 - 0x3f) * -0x38)) + 4) + 0xc)) = 0;
                t6 = (t6 + -1);
            } while ((t6 != t5));
        } else {
            sp = (u32)frame;
        }
        if ((a1 == 0xffff)) {
            if (((s32)(a0) == 0)) {
                if (((s32)((u32)&D_01c62198) != 0)) {
                    s0 = ((u32)&D_01c62198 + 0xe00);
                    while (((s0 + -0x38) != (u32)&D_01c62198)) {
                        func_00199cd0(s0 + -0x38, a1);
                        s0 = (s0 + -0x38);
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
