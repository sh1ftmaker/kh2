// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001bbfd0(u32) asm("func_001bbfd0");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0017df58(u32) asm("func_0017df58");
extern "C" u32 func_0017e358(u32) asm("func_0017e358");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001c9958(u32, u32) asm("func_001c9958");

// 0x001c99b0 func_001c99b0
// minilink-rodata 0x0036e0ac   (float literals live here in the original)
u32 func_001c99b0(u32 a0) asm("_ZN2YS9SACRIFICE13GetFormStatusEi");
u32 func_001c99b0(u32 a0) {
    u32 t7;
    u32 s5;
    u32 s4;
    u32 s2;
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    if (!((1.0f < func_001bbfd0(a0)))) {
        t7 = 0;
    } else {
        t7 = 1;
    }
    if (((s32)((t7 & 0xff)) == 0)) {
        if ((a0 != 3)) {
            s5 = 0;
            s4 = 0;
            s2 = 0;
            do {
                v0 = func_0017df58(s2);
                if (((s32)(func_0019ba60(v0)) != 0)) {
                    s0 = func_0016a070(v0);
                } else {
                    s0 = 0;
                }
                if (((s32)(func_001c9958(a0, s0)) != 0)) {
                    if ((s0 == 0)) {
                        s4 = 2;
                        break;
                    }
                    s5 = (s5 + 1);
                    s4 = (func_0017e358(v0) ? s4 : 1);
                }
                s2 = (s2 + 1);
            } while (((s32)(((s32)(s2) < (s32)(2))) != 0));
            v0_0 = (s5 ? s4 : 2);
        } else {
            v0_0 = 0;
        }
        v0_1 = v0_0;
    } else {
        v0_1 = 0;
    }
    return v0_1;
}
