// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001ba158(u32, u32) asm("func_001ba158");

// 0x001a2200 func_001a2200
void func_001a2200(u32 a0, u32 a1) asm("_ZNK2YS5SHEET17adjust_lose_countEi");
void func_001a2200(u32 a0, u32 a1) {
    u32 s1;
    u32 s0;
    if (((s32)(a1) > 0)) {
        if (((s32)((*(u32*)(&D_0034f240) & 0x20000)) != 0)) {
            s1 = (*(u32*)((func_001ba158(a0, a1) + 8)) + 1);
            if (((s32)(((s32)(s1) < (s32)(2))) == 0)) {
                if ((func_0019ba60(*(u32*)((a0 + 0x25c))) != 0)) {
                    if (((*(u32*)((*(u32*)((a0 + 0x25c)) + 0x588)) & 0x80) != 0)) {
                        if (((s32)(((s32)(a1) / (s32)(s1))) <= 0)) {
                            s0 = 1;
                        } else {
                            s0 = ((s32)(a1) / (s32)(s1));
                        }
                        a1 = s0;
                    } else {
                        a1 = (a1 * s1);
                    }
                } else {
                    a1 = (a1 * s1);
                }
            }
        }
    }
    return;
}
