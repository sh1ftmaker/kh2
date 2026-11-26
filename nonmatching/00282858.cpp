// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003741e8 asm("D_003741e8");
extern "C" u32 func_00259618(u32, u32, u32) asm("func_00259618");
extern "C" void func_00192b30(u32) asm("func_00192b30");
extern "C" void func_00192cc0(u32, u32, u32) asm("func_00192cc0");

// 0x00282858 func_00282858
void func_00282858(u32 a0, u32 a1, u32 a2) asm("_ZN2Tz8ItemInfo12MakeStockMsgEii");
void func_00282858(u32 a0, u32 a1, u32 a2) {
    u32 s2;
    u32 s1;
    u32 s0;
    if (((s32)(a2) > 0)) {
        s2 = 0;
        s1 = a0;
        s0 = ((a1 * 6) + a0);
        do {
            if (((s32)(((s32)((s2 + a1)) < (s32)(*(u32*)(a0)))) == 0)) {
                break;
            }
            func_00192b30(func_00259618(*(u16*)((s0 + 4)), s1 + 0x614, (u32)(0) < (u32)(*(u8*)((s0 + 7)))));
            if ((*(u8*)((s0 + 6)) != 1)) {
                func_00192cc0(s1 + 0x604, (u32)&D_003741e8, *(u8*)((s0 + 6)));
            } else {
                *(u8*)((s1 + 0x604)) = 0;
            }
            s2 = (s2 + 1);
            s1 = (s1 + 0x50);
            s0 = (s0 + 6);
        } while (((s32)(((s32)(s2) < (s32)(a2))) != 0));
    }
    return;
}
