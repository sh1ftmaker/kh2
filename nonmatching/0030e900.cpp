// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e38c40 asm("D_01e38c40");
extern "C" u32 D_01e38e40 asm("D_01e38e40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");
extern "C" u32 func_0030dd70(u32, u32, u32) asm("func_0030dd70");

// 0x0030e900 func_0030e900
void func_0030e900(u32 a0, u32 a1, u32 a2) asm("func_0030e900");
void func_0030e900(u32 a0, u32 a1, u32 a2) {
    u32 loc_0;
    if (((s32)(func_0030dd70(a0, a1, a2)) >= 0)) {
        if (((s32)(((u32)(a2) < (u32)(3))) != 0)) {
            *(u32*)(&D_01e38c40) = a0;
            loc_0 = 0;
            *(u32*)(((u32)&D_01e38c40 + 4)) = a2;
            if (((s32)(func_003094b8((u32)&D_01e38e40, 3, 0, (u32)&D_01e38c40, 0x20, (u32)&D_01e38c40, 0x20, 0)) >= 0)) {
                if (((s32)(a2) == 0)) {
                    *(u8*)(a1) = *(u8*)(&D_01e38c40);
                } else {
                    if ((a2 == 1)) {
                        *(u16*)(a1) = *(u16*)(&D_01e38c40);
                    } else {
                        if ((a2 == 2)) {
                            *(u32*)(a1) = *(u32*)(&D_01e38c40);
                        }
                    }
                }
            }
        }
    }
    return;
}
