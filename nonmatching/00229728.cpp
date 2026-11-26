// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_001395a8(u32) asm("func_001395a8");
extern "C" void func_00150260(u32, u32, u32, u32) asm("func_00150260");

// 0x00229728 sa::MUSICAL_SCORE::update()
void lift_00229728(u32 a0) asm("_ZN2sa13MUSICAL_SCORE6updateEv");
void lift_00229728(u32 a0) {
    u8 frame[32];
    u32 s4;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 sp;
    u32 s0_0;
    u32 s1_1;
    u32 s2_2;
    u32 t5;
    u32 sp_3;
    s4 = *(u32*)(*(u32*)((a0 + 0xb40)));
    if ((*(u32*)((a0 + 0xb44)) != *(u32*)(*(u32*)((a0 + 0xb40))))) {
        func_00150260(*(u32*)((a0 + 0xb4c)), *(u32*)(*(u32*)((a0 + 0xb40))), 6, (u32)frame);
        if (((s32)((*(u32*)((a0 + 0xb48)) + -1)) >= 0)) {
            u32 cse0 = *(u32*)((a0 + 0xb48)) + -1;
            s0 = (((cse0 * 0x198) + a0) + 0x1b0);
            s1 = ((cse0 << 2) + (u32)frame);
            s2 = cse0;
            do {
                func_00138c10(s0, *(u32*)(s1));
                func_001395a8(s0);
                s0 = (s0 + -0x198);
                s1 = (s1 + -4);
                s2 = (s2 + -1);
            } while (((s32)(s2) >= 0));
        } else {
            sp = (u32)frame;
        }
        if (((s32)((*(u32*)((a0 + 0xb48)) + -1)) > 0)) {
            u32 cse1 = *(u32*)((a0 + 0xb48)) + -1;
            s0_0 = (((cse1 * 0x198) + a0) + 0x1b0);
            s1_1 = ((cse1 << 2) + sp);
            s2_2 = cse1;
            t5 = *(u32*)((a0 + 0xb4c));
            do {
                if ((*(u32*)(s1_1) != *(u32*)(*(u32*)((a0 + 0xb4c))))) {
                    break;
                }
                func_00138c10(s0_0, *(u32*)((*(u32*)((a0 + 0xb4c)) + 0x28)));
                s0_0 = (s0_0 + -0x198);
                s1_1 = (s1_1 + -4);
                s2_2 = (s2_2 + -1);
            } while (((s32)(s2_2) > 0));
        }
        sp_3 = sp;
    } else {
        sp_3 = (u32)frame;
    }
    *(u32*)((a0 + 0xb44)) = s4;
    return;
}
