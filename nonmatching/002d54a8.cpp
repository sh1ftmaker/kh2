// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00375b14 asm("D_00375b14");
extern "C" u32 D_00375b18 asm("D_00375b18");
extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" u32 func_002d5578(u32) asm("func_002d5578");
extern "C" void func_00178d28(u32) asm("func_00178d28");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x002d54a8 func_002d54a8
void func_002d54a8(u32 a0) asm("_ZN2Ti15MGOarashiPlayer11_OVR_attackEv");
void func_002d54a8(u32 a0) {
    u32 t7;
    u32 t7_0;
    if (((s32)(func_002d5578(a0)) != 0)) {
        if (((*(u32*)((a0 + 0x160)) & 0x10) != 0)) {
            if ((*(f32*)((a0 + 0xc2c)) == 0.0f)) {
                if ((0.0f <= *(f32*)((a0 + 0x550)))) {
                    t7 = (u32)&D_00375b14;
                } else {
                    t7 = (u32)&D_00375b18;
                }
                *(f32*)((a0 + 0xc20)) = *(f32*)(t7);
            }
            func_00178d28(a0);
            if (((s32)(*(u32*)((a0 + 0xc18))) != 0)) {
                func_0017f488(*(u32*)((a0 + 0xc18)) + 0x140, 0x97, 0.0f, 0.0f);
                func_0017f5e0(*(u32*)((a0 + 0xc18)) + 0x140, 0, 0, 0.0f, 0.0f);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        if ((*(f32*)((a0 + 0xc2c)) == 0.0f)) {
            if ((0.0f <= *(f32*)((a0 + 0x550)))) {
                t7_0 = (u32)&D_00375b14;
            } else {
                t7_0 = (u32)&D_00375b18;
            }
            *(f32*)((a0 + 0xc20)) = *(f32*)(t7_0);
        }
        func_00178d28(a0);
        if (((s32)(*(u32*)((a0 + 0xc18))) != 0)) {
            func_0017f488(*(u32*)((a0 + 0xc18)) + 0x140, 0x97, 0.0f, 0.0f);
            func_0017f5e0(*(u32*)((a0 + 0xc18)) + 0x140, 0, 0, 0.0f, 0.0f);
            return;
        } else {
            return;
        }
    }
}
