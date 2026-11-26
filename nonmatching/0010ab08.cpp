// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00341060 asm("D_00341060");
extern "C" u32 D_00341270 asm("D_00341270");
extern "C" u32 D_00341480 asm("D_00341480");
extern "C" u32 func_001342c8(u32, u32, u32) asm("func_001342c8");

// 0x0010ab08 func_0010ab08
void func_0010ab08(u32 a0) asm("func_0010ab08");
void func_0010ab08(u32 a0) {
    if ((a0 != 1)) {
        if (((s32)(a0) < (s32)(2))) {
            if (((s32)(a0) != 0)) {
                return;
            } else {
                func_001342c8((u32)&D_00341060, 0x21, 0x13000000);
                return;
            }
        } else {
            if ((a0 == 2)) {
                func_001342c8((u32)&D_00341480, 0x21, 0x13000000);
                return;
            } else {
                return;
            }
        }
    } else {
        func_001342c8((u32)&D_00341270, 0x21, 0x13000000);
        return;
    }
}
