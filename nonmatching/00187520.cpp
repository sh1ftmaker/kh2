// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017e138(u32, u32, u32, u8) asm("func_0017e138");
extern "C" u32 func_001a1910(u32, u32, u32) asm("func_001a1910");
extern "C" void func_0013def8(u32) asm("func_0013def8");
extern "C" void func_00187818(u32) asm("func_00187818");
extern "C" void func_0019d3b8(u32, u32, u32) asm("func_0019d3b8");
extern "C" void func_0019d3f8(u32, u32, u32) asm("func_0019d3f8");

// 0x00187520 YS::BTLOBJ::_OVR_add_hp(int, int, bool)
u32 lift_00187520(u32 a0, u32 a1, u32 a2, u8 a3) asm("_ZN2YS6BTLOBJ11_OVR_add_hpEiib");
u32 lift_00187520(u32 a0, u32 a1, u32 a2, u8 a3) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
        if ((*(u32*)((((a2 * 0xc) + *(u32*)((a0 + 0x48c))) + 4)) == 0)) {
            v0_1 = 0;
        } else {
            if (((*(u32*)((a0 + 0x588)) & 0x4000) != 0)) {
                if (((s32)(a1) > 0)) {
                    if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) != 0)) {
                        a1 = func_0017e138(a0, a1, a2, a3);
                    } else {
                        if (((s32)(a3) != 0)) {
                            ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x54))))(a0, 0x14, 0, a3);
                        }
                    }
                }
            }
            if (((s32)((*(u32*)((a0 + 0x7f8)) & 4)) == 0)) {
                v0 = func_001a1910(*(u32*)((a0 + 0x48c)), a1, a2);
                if (((s32)(a1) > 0)) {
                    func_0013def8(a0);
                    func_0019d3f8(a0, a2, v0);
                } else {
                    func_0019d3b8(a0, a2, v0);
                }
                if (((s32)(v0) == 0)) {
                    if ((a2 == 0)) {
                        func_00187818(a0);
                    }
                }
                v0_0 = v0;
            } else {
                v0_0 = 0;
            }
            v0_1 = v0_0;
        }
        v0_2 = v0_1;
    } else {
        v0_2 = 0;
    }
    return v0_2;
}
