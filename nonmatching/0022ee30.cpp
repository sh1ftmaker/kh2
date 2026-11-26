// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0022ed70 asm("D_0022ed70");
extern "C" u32 D_0022ee00 asm("D_0022ee00");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_0014f030(u32, f32, f32, f32) asm("func_0014f030");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x0022ee30 func_0022ee30
// minilink-rodata 0x00371214   (float literals live here in the original)
void func_0022ee30(u32 a0) asm("_ZN2sa5EVENT20set_shadow_alpha_seqERNS_16BIN_SHADOW_ALPHAEP4TASK");
void func_0022ee30(u32 a0) {
    u32 s0;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(func_002282f0(*(s16*)((a0 + 4)))) == 0)) {
        s0 = func_002282d8();
        v0 = func_00227d10(*(s16*)((a0 + 6)));
        func_001ba028(*(u32*)((v0 + 8)));
        if (((s32)(func_00225b00(*(s16*)((a0 + 4)))) == 0)) {
            v0_0 = func_00102c18(1, s0, (u32)&D_0022ed70);
            *(u32*)((v0_0 + 0x30)) = (u32)&D_0022ee00;
            *(u32*)((v0_0 + 4)) = *(u32*)((v0 + 8));
            v0_1 = func_001063c0(0xc, func_001050c8());
            *(u32*)(v0_1) = 0;
            *(u32*)((v0_1 + 4)) = 0;
            *(u32*)((v0_0 + 8)) = v0_1;
            *(f32*)((v0_1 + 8)) = 1.0f;
            func_0014f030(v0_1, (f32)((s32)(*(u8*)((a0 + 8)))), (f32)((s32)(*(u8*)((a0 + 9)))), (f32)((s32)(*(s16*)((a0 + 0xa)))) + (f32)((s32)(*(s16*)((a0 + 0xa)))));
            return;
        } else {
            *(f32*)((*(u32*)((v0 + 8)) + 0x9a8)) = (f32)((s32)(*(u8*)((a0 + 9))));
            return;
        }
    } else {
        return;
    }
}
