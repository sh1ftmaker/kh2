// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0017f5e0(u32, u32, u32, f32, f32) asm("func_0017f5e0");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" void func_001d86a0(u32, u32) asm("func_001d86a0");
extern "C" void func_001d8820(u32, u32) asm("func_001d8820");

// 0x001cf8d0 func_001cf8d0
void func_001cf8d0(u32 a0, u32 a1) asm("_ZN2YS8NMPLAYER24_OVR_exec_command_playerEPKNS_12COMMAND_ELEME");
void func_001cf8d0(u32 a0, u32 a1) {
    if ((*(u16*)((a1 + 2)) != 0x19b)) {
        if ((*(u16*)((a1 + 2)) != 0x19c)) {
            return;
        } else {
            func_001d8820(1, 1);
            func_0017f488(a0 + 0x140, 0xa1, 0.0f, 0.0f);
            func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
            return;
        }
    } else {
        func_001d86a0(0xffffffff, 1);
        func_0017f488(a0 + 0x140, 0xc9, 0.0f, 0.0f);
        func_0017f5e0(a0 + 0x140, 0, 0, 0.0f, 0.0f);
        return;
    }
}
