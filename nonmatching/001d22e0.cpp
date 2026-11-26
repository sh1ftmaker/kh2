// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017f540(u32, u32, f32, f32) asm("func_0017f540");

// 0x001d22e0 func_001d22e0
// minilink-rodata 0x0036e3b0   (float literals live here in the original)
void func_001d22e0(u32 a0, u32 a1) asm("_ZN2YS9ACTION_LM7controlEPNS_3OBJE");
void func_001d22e0(u32 a0, u32 a1) {
    u32 t6;
    u32 t6_0;
    u32 t6_1;
    u32 t6_2;
    u32 t6_3;
    u32 t6_4;
    if ((0.0f < *(f32*)((a1 + 0x1c)))) {
        if ((*(f32*)((a1 + 0x10)) == 0.0f)) {
            if ((*(f32*)((a1 + 0x18)) == 0.0f)) {
                if (!((*(f32*)((a1 + 0x14)) < 0.0f))) {
                    t6 = 0x9b;
                } else {
                    t6 = 0x9a;
                }
                t6_1 = t6;
            } else {
                if (!((*(f32*)((a1 + 0x1c)) < ((*(f32*)((a1 + 0x110)) + *(f32*)((a1 + 0x114))) * 0.5f)))) {
                    t6_0 = 2;
                } else {
                    t6_0 = 1;
                }
                t6_1 = t6_0;
            }
            t6_3 = t6_1;
        } else {
            if (!((*(f32*)((a1 + 0x1c)) < ((*(f32*)((a1 + 0x110)) + *(f32*)((a1 + 0x114))) * 0.5f)))) {
                t6_2 = 2;
            } else {
                t6_2 = 1;
            }
            t6_3 = t6_2;
        }
        t6_4 = t6_3;
    } else {
        t6_4 = 0;
    }
    if (((s32)((*(u32*)((a1 + 0x160)) & 4)) != 0)) {
        func_0017f540(a1 + 0x140, t6_4, 20.0f, 0.0f);
        return;
    } else {
        return;
    }
}
