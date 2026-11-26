// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002a0360(u32) asm("func_002a0360");
extern "C" u32 func_002a6500() asm("func_002a6500");
extern "C" u32 func_002a7530() asm("func_002a7530");
extern "C" u32 func_002a8870(u32) asm("func_002a8870");
extern "C" u32 func_002a9b88(u32) asm("func_002a9b88");
extern "C" u32 func_002b3ae8() asm("func_002b3ae8");

// 0x0029a5f0 Tz::JmCollection::Cur2SelNum(int)
void lift_0029a5f0(u32 a0) asm("_ZN2Tz12JmCollection10Cur2SelNumEi");
void lift_0029a5f0(u32 a0) {
    u8 frame[48];
    u32 s0;
    u32 s1;
    u32 t7;
    s0 = 0;
    s1 = (u32)frame;
    do {
        if (((s32)(s0) != 0) || (func_002a0360(a0) != 0)) {
            if ((s0 != 7) || (func_002a9b88(0xffffffff) != 0)) {
                if ((s0 != 8) || (func_002a8870(0xffffffff) != 0)) {
                    if ((s0 != 5) || (func_002b3ae8() != 0)) {
                        if ((s0 != 9) || (func_002a6500() != 0)) {
                            if ((s0 != 0xa) || (func_002a7530() != 0)) {
                                *(u32*)(s1) = s0;
                                s1 = (s1 + 4);
                            }
                        }
                    }
                }
            }
        }
        s0 = (s0 + 1);
        t7 = (a0 << 2);
    } while (((s32)(t7) != 0));
    return;
}
