// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de4c asm("D_0035de4c");
extern "C" u32 func_002baa20(u32) asm("func_002baa20");
extern "C" void func_002278e0(u32) asm("func_002278e0");
extern "C" void func_00232718() asm("func_00232718");
extern "C" void func_002baa48(u32) asm("func_002baa48");

// 0x00232988 func_00232988
void func_00232988() asm("_ZN2sa5EVENT10audio_freeEv");
void func_00232988() {
    u32 s1;
    u32 s0;
    u32 s2;
    if (((s32)(*(u32*)(&D_0035de4c)) != 0)) {
        if (((s32)(*(s16*)((*(u32*)(&D_0035de4c) + 4))) > 0)) {
            s1 = (*(u32*)(&D_0035de4c) + 8);
            s0 = *(s16*)((*(u32*)(&D_0035de4c) + 4));
            do {
                if ((*(s8*)((s1 + 6)) == 2)) {
                    if ((*(u32*)(*(u32*)(s1)) == 3)) {
                        s2 = *(u32*)(s1);
                        if ((func_002baa20(*(u32*)((*(u32*)(s1) + 0x14))) == 1)) {
                            func_002baa48(*(u32*)((s2 + 0x14)));
                            func_00232718();
                        }
                        func_002278e0(s2);
                    }
                }
                s0 = (s0 + -1);
                s1 = (s1 + 0x20);
            } while (((s32)(s0) != 0));
        }
    }
    return;
}
