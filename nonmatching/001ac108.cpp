// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350a58 asm("D_00350a58");
extern "C" f32 func_0023ade0(u32) asm("func_0023ade0");
extern "C" void func_0023acd8(u32, u32, u32, u32, u32) asm("func_0023acd8");

// 0x001ac108 func_001ac108
void func_001ac108(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001ac108");
void func_001ac108(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 t7;
    u32 t7_0;
    u32 s2;
    u32 t6;
    u32 s0;
    u32 s1;
    if (((s32)(*(u8*)(a0)) != 0)) {
        if (((s32)(((u32)((*(u8*)((a0 + 2)) & 0xff)) < (u32)(4))) != 0)) {
            t7 = (a4 + (a4 >> 0x1f));
            s2 = (a2 - ((s32)(t7) >> 1));
        } else {
            t7_0 = (a4 + (a4 >> 0x1f));
            s2 = (a2 + ((s32)(t7_0) >> 1));
        }
        t6 = ((*(u8*)((a0 + 2)) & 3) << 2);
        s0 = (a0 + 4);
        s1 = (a1 + (s32)(((f32)((s32)(a3)) * *(f32*)((t6 + (u32)&D_00350a58)))));
        func_0023acd8(s0, a1, a2, a3, a4);
        *(u32*)((s0 + 0x148)) = s1;
        *(u32*)((s0 + 0x14c)) = s2;
        func_0023ade0(s0);
        return;
    } else {
        return;
    }
}
