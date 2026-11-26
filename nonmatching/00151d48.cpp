// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a5e8 asm("D_0034a5e8");
extern "C" u32 func_0015b4f8(u32, u32, u32) asm("func_0015b4f8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_00239c38(u32, u32) asm("func_00239c38");

// 0x00151d48 func_00151d48
u32 func_00151d48(u32 a0) asm("_ZN2dk9GET_MUNNY10initNumberEv");
u32 func_00151d48(u32 a0) {
    u8 frame[32];
    u32 v0;
    u32 s2;
    u32 s4;
    u32 v0_0;
    u32 t7;
    u32 sp;
    v0 = func_0015b4f8((u32)&D_0034a5e8, *(u32*)((a0 + 0xb4c)), (u32)frame);
    *(u32*)((a0 + 0xb50)) = v0;
    if (((s32)(v0) > 0)) {
        s2 = 0;
        s4 = 0;
        do {
            func_00239c38((a0 + (s2 * 0x158)) + 0x1c8, *(u32*)(((s2 << 2) + (u32)frame)));
            v0_0 = func_0023aa98((a0 + (s2 * 0x158)) + 0x1c8);
            t7 = *(u32*)((a0 + 0xb50));
            *(u32*)((((s2 << 2) + a0) + 0xb30)) = (s4 + v0_0);
            s2 = (s2 + 1);
            s4 = (s4 + v0_0);
            v0 = v0_0;
        } while (((s32)(((s32)(s2) < (s32)(t7))) != 0));
    } else {
        sp = (u32)frame;
    }
    return v0;
}
