// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 D_0034dcb8 asm("D_0034dcb8");
extern "C" void func_00170188(u32) asm("func_00170188");
extern "C" void func_0031e328(u32, u32) asm("func_0031e328");

// 0x001705a8 func_001705a8
void func_001705a8() asm("_ZN2YS10CACHE_BUFF9clearLinkEv");
void func_001705a8() {
    u8 frame[16];
    u32 s0;
    u32 s1;
    u32 a0_0;
    u32 s0_1;
    u32 sp;
    *(u32*)(&D_0034dcb8) = 0;
    *(u32*)(((u32)&D_0034dcb8 + 4)) = 0;
    if ((*(u32*)(&D_0034dca0) != 0)) {
        s0 = *(u32*)(&D_0034dca0);
        do {
            s1 = *(u32*)((s0 + 0x3c));
            if (((s32)((((s32)(*(u32*)((s0 + 0x28))) < (s32)(0x2710)) ^ 1)) != 0)) {
                func_0031e328((u32)&D_0034dca0, s0);
                if ((*(u32*)(((u32)&D_0034dcb8 + 4)) == 0)) {
                    *(u32*)(((u32)&D_0034dcb8 + 4)) = s0;
                    *(u32*)(&D_0034dcb8) = s0;
                    *(u32*)((s0 + 0x3c)) = 0;
                } else {
                    *(u32*)((*(u32*)(((u32)&D_0034dcb8 + 4)) + 0x3c)) = s0;
                    *(u32*)((s0 + 0x3c)) = 0;
                    *(u32*)(((u32)&D_0034dcb8 + 4)) = s0;
                }
            }
            s0 = s1;
        } while (((s32)(s1) != 0));
    }
    if ((*(u32*)(&D_0034dcb8) != 0)) {
        a0_0 = *(u32*)(&D_0034dcb8);
        do {
            s0_1 = *(u32*)((a0_0 + 0x3c));
            func_00170188(a0_0);
            a0_0 = s0_1;
        } while (((s32)(s0_1) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
