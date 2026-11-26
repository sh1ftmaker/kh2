// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00102670(u32, u32) asm("func_00102670");

// 0x001393f8 func_001393f8(int)
void lift_001393f8(u32 a0) asm("_Z13func_001393f8i");
void lift_001393f8(u32 a0) {
    u8 frame[16];
    u32 s0;
    u32 s2;
    u32 t5;
    u32 t6;
    u32 t4;
    u32 sp;
    u32 t4_0;
    u32 t6_1;
    u32 sp_2;
    u32 t4_3;
    u32 t6_4;
    u32 t7;
    u32 sp_5;
    s0 = *(u32*)((a0 + 4));
    while (((s32)(s0) != 0)) {
        s2 = *(u32*)((s0 + 4));
        if (((s32)((*(u32*)((s0 + 0xc)) & 1)) != 0)) {
            if ((s0 == *(u32*)((a0 + 4)))) {
                *(u32*)((a0 + 4)) = *(u32*)((s0 + 4));
                sp_2 = (u32)frame;
                t4_3 = 0;
                t6_4 = (a0 + 4);
            } else {
                if ((*(u32*)((*(u32*)((a0 + 4)) + 4)) != s0)) {
                    t5 = *(u32*)((*(u32*)((a0 + 4)) + 4));
                    t6 = (a0 + 4);
                    do {
                        t4 = t5;
                        t5 = *(u32*)((t5 + 4));
                    } while ((t5 != s0));
                    t4_0 = t4;
                    t6_1 = t6;
                } else {
                    sp = (u32)frame;
                    t4_0 = *(u32*)((a0 + 4));
                    t6_1 = (a0 + 4);
                }
                *(u32*)((t4_0 + 4)) = *(u32*)((s0 + 4));
                sp_2 = sp;
                t4_3 = t4_0;
                t6_4 = t6_1;
            }
            if ((s0 == *(u32*)((t6_4 + 4)))) {
                t7 = *(u32*)((t6_4 + 4));
                *(u32*)((t6_4 + 4)) = t4_3;
            }
            *(u32*)((s0 + 4)) = 0;
            func_00102670(*(u32*)(a0), *(u32*)((s0 + 0x14)));
            ((void(*)(u32))(*(u32*)(*(u32*)(s0))))(s0);
            sp_5 = sp_2;
        } else {
            sp_5 = (u32)frame;
        }
        s0 = s2;
    }
    return;
}
