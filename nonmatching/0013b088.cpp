// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00348590 asm("D_00348590");
extern "C" u32 func_00239700(u32) asm("func_00239700");

// 0x0013b088 func_0013b088
// minilink-rodata 0x0036ad0c   (float literals live here in the original)
f32 func_0013b088(u32 a0) asm("_ZN2dk12COMMAND_DRAWC1Ev");
f32 func_0013b088(u32 a0) {
    u32 v0;
    *(u32*)(a0) = (u32)&D_00348590;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0xec)) = 0xffffffff;
    *(u32*)((a0 + 0xf0)) = 0;
    *(u32*)((a0 + 0xf4)) = 0xffffffff;
    *(u32*)((a0 + 0xf8)) = 0xffffffff;
    *(u8*)((a0 + 0xfc)) = 0;
    *(u8*)((a0 + 0xfd)) = 0;
    *(u8*)((a0 + 0xfe)) = 0;
    *(u8*)((a0 + 0xff)) = 0;
    *(u32*)((a0 + 0x100)) = 0;
    *(u32*)((a0 + 0x104)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x110)) = 0;
    v0 = func_00239700(a0 + 0x11c);
    *(u32*)((a0 + 0x29c)) = 0;
    *(u32*)((a0 + 0x2a0)) = 0;
    *(u32*)((a0 + 0x2a4)) = 0;
    *(u8*)((a0 + 0x2a8)) = 0;
    *(u8*)((a0 + 0x2a9)) = 0;
    *(f32*)((a0 + 0x2ac)) = 1.0f;
    *(u32*)((a0 + 0x2b0)) = 0;
    *(f32*)((a0 + 0x2b4)) = 1.0f;
    return v0;
}
