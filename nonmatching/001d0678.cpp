// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001d0870 asm("D_001d0870");
extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" u32 func_001d07e0(u32) asm("func_001d07e0");
extern "C" void func_00178ae8(u32, u32) asm("func_00178ae8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x001d0678 func_001d0678
// minilink-rodata 0x0036e37c   (float literals live here in the original)
void func_001d0678(u32 a0, u32 a1) asm("_ZN2YS6MICKEY24_OVR_exec_command_playerEPKNS_12COMMAND_ELEME");
void func_001d0678(u32 a0, u32 a1) {
    u32 t6;
    u32 s0;
    u32 s0_0;
    t6 = *(u16*)((a1 + 2));
    if ((t6 != 0x1c7)) {
        if (((s32)(((s32)(t6) < (s32)(0x1c8))) != 0)) {
            if ((t6 != 0x1c4)) {
                func_00178ae8(a0, a1);
                return;
            } else {
                s0 = (a0 + 0x140);
                *(u8*)((a0 + 0xaf4)) = *(u8*)((a1 + 0x1c));
                func_0017f488(s0, 0xc2, 8.0f, 0.0f);
                func_0017f5e0(s0, 4, 0, 8.0f, 0.0f);
                return;
            }
        } else {
            if ((t6 != 0x1c8)) {
                if ((t6 == 0x1c9)) {
                    *(f32*)((a0 + 0xb68)) = 30.0f;
                } else {
                    func_00178ae8(a0, a1);
                }
                return;
            } else {
                func_0017f488(a0 + 0x140, 0xc0, 8.0f, 0.0f);
                func_001d07e0(a0);
                return;
            }
        }
    } else {
        s0_0 = (a0 + 0x140);
        func_0017f488(s0_0, 0xc1, 8.0f, 0.0f);
        *(f32*)((a0 + 0xb6c)) = 0.0f;
        *(u32*)((s0_0 + 0x194)) = (u32)&D_001d0870;
        *(f32*)((a0 + 0xb68)) = 120.0f;
        return;
    }
}
