// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0013b5d0(u32, u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0013b5d0");
extern "C" u32 func_0013ba60(u32, u32, u32, u32, u32, u32, u32) asm("func_0013ba60");

// 0x0013bb58 func_0013bb58
// minilink-rodata 0x0036ad1c   (float literals live here in the original)
u32 func_0013bb58(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4, u32 a5, u32 a6) asm("func_0013bb58");
u32 func_0013bb58(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4, u32 a5, u32 a6) {
    u8 loc_10;
    u32 loc_18;
    u32 loc_14;
    u32 loc_0;
    u32 v0;
    u32 loc_8;
    u32 v0_0;
    loc_10 = a4;
    loc_14 = 0;
    loc_18 = 0xffffffff;
    v0 = func_0013ba60(a0, a2, a3, (u32)&loc_10, a6, (u32)&loc_14, (u32)&loc_18);
    loc_0 = 0x80b4b4b4;
    loc_8 = 2;
    v0_0 = func_0013b5d0(a0, a2, loc_14, 0, loc_10, a5 + 0x1c, 0x184 - (*(u32*)((a1 + 8)) * 0x16), 0, 1.0f);
    if (((s32)(v0) != 0)) {
        *(u32*)((v0_0 + 0x188)) = loc_18;
    }
    return v0_0;
}
