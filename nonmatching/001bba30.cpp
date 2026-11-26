// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_001d5370(u32, u32, u32) asm("func_001d5370");
extern "C" void func_002534e0(u32, u32) asm("func_002534e0");

// 0x001bba30 func_001bba30
void func_001bba30(u32 a0) asm("_ZN2YS7MISSION8ShowHelpEv");
void func_001bba30(u32 a0) {
    u8 frame[16];
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 4)) = 0;
    if (((s32)(*(u32*)((a0 + 0x48))) != 0)) {
        if (((s32)(*(u8*)((*(u32*)((a0 + 8)) + 0xc))) != 0)) {
            func_001d5370((u32)frame, *(u32*)((a0 + 0x48)), *(u8*)((*(u32*)((a0 + 8)) + 0xc)) + -1);
            func_002534e0(*(u32*)(((u32)frame + 4)), *(u32*)((u32)frame));
        }
    }
    return;
}
