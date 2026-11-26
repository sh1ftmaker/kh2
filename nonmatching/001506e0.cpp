// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001506e0 func_001506e0
void func_001506e0(u32 a0) asm("_ZN2dk7COUNTER10forceLeaveEv");
void func_001506e0(u32 a0) {
    u32 s0;
    u32 s2;
    if (((s32)(func_00139d78(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
    }
    if ((func_00139d78(a0 + 0x30) != 0)) {
        func_00139510(a0 + 0x30);
    }
    s0 = (a0 + 0x348);
    s2 = 0xc;
    do {
        if (((s32)(func_00139d78(s0)) != 0)) {
            *(u32*)((a0 + 0x4d4)) = 0;
            func_001396b0(s0);
            if (((s32)(*(u32*)((a0 + 0x4d4))) != 0)) {
                *(u32*)((a0 + 0x4d8)) = 0;
                func_001396b0(s0);
                if (((s32)(*(u32*)((a0 + 0x4d8))) != 0)) {
                    func_0031a260(s0, 0);
                }
            }
            ((void(*)(u32))(*(u32*)((*(u32*)((a0 + 0x348)) + 0x14))))(s0);
        }
        a0 = (a0 + 0x198);
        s2 = (s2 + -1);
        s0 = (s0 + 0x198);
    } while (((s32)(s2) >= 0));
    return;
}
