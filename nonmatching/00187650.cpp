// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1990(u32, u32) asm("func_001a1990");
extern "C" void func_00187728(u32, f32) asm("func_00187728");

// 0x00187650 YS::BTLOBJ::add_mp(int, bool)
// minilink-rodata 0x0036c9a4   (float literals live here in the original)
u32 lift_00187650(u32 a0, u32 a1, u8 a2) asm("_ZN2YS6BTLOBJ6add_mpEib");
u32 lift_00187650(u32 a0, u32 a1, u8 a2) {
    u32 s2;
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
        if (((*(u32*)((a0 + 0x7f8)) & 4) != 0)) {
            v0 = 0;
        } else {
            if (((*(u32*)((a0 + 0x588)) & 0x4000) != 0)) {
                if (((s32)(a1) > 0)) {
                    if ((a2 != 0)) {
                        if (((*(u32*)((a0 + 0x160)) & 0x4000) == 0)) {
                            ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x54))))(a0, 0x14, 0);
                        }
                    }
                }
            }
            if (((s32)((*(u32*)((*(u32*)((a0 + 0x48c)) + 0x180)) + a1)) < 0)) {
                func_00187728(a0, 1.0f);
                s2 = 0;
            } else {
                s2 = func_001a1990(*(u32*)((a0 + 0x48c)), a1);
            }
            v0 = s2;
        }
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return v0_0;
}
