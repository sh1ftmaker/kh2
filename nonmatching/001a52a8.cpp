// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036d578 asm("D_0036d578");
extern "C" u32 func_00242500(u32) asm("func_00242500");
extern "C" void func_0014f668(u32) asm("func_0014f668");
extern "C" void func_00176be0(u32, u32, f32) asm("func_00176be0");
extern "C" void func_00179a68(u32, f32) asm("func_00179a68");
extern "C" void func_00187650(u32, u32, u32) asm("func_00187650");
extern "C" void func_001d6110(u32, u32) asm("func_001d6110");

// 0x001a52a8 func_001a52a8
void func_001a52a8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS5PRIZE10get_commonEPNS_6BTLOBJEPNS_11PRIZEEFFECTE");
void func_001a52a8(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    s0 = ((*(u8*)((a2 + 0x14)) << 3) + (u32)&D_0036d578);
    if ((0.0f < *(f32*)(((*(u8*)((a2 + 0x14)) << 3) + (u32)&D_0036d578)))) {
        func_00176be0(a1, a1, *(f32*)(((*(u8*)((a2 + 0x14)) << 3) + (u32)&D_0036d578)));
    }
    if (((s32)(*(u8*)((s0 + 4))) != 0)) {
        ((void(*)(u32, u32, u32, u32))(*(u32*)((*(u32*)(a1) + 0x78))))(a1, *(u8*)((s0 + 4)), 0, 0);
    }
    if (((s32)(*(u8*)((s0 + 5))) != 0)) {
        func_00187650(a1, *(u8*)((s0 + 5)), 0);
    }
    if (((s32)(*(u8*)((s0 + 6))) != 0)) {
        func_00179a68(a1, (f32)((s32)(*(u8*)((s0 + 6)))));
        func_001d6110(*(u8*)((s0 + 6)), a1);
    }
    if ((*(u8*)((s0 + 7)) != 0)) {
        func_0014f668(*(u8*)((s0 + 7)));
        func_00242500(*(u8*)((s0 + 7)));
        return;
    } else {
        return;
    }
}
