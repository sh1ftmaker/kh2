// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00230ae8 asm("D_00230ae8");
extern "C" u32 _ZN2sa5EVENT11objMoveTaskEP4TASK asm("_ZN2sa5EVENT11objMoveTaskEP4TASK");
extern "C" f32 func_00227c78(u32) asm("func_00227c78");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_0014f030(u32, f32, f32, f32) asm("func_0014f030");
extern "C" u32 func_00225b00(u32) asm("func_00225b00");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_002282d8() asm("func_002282d8");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" void func_0016adc8(u32, u32) asm("func_0016adc8");
extern "C" void func_001ba028(u32) asm("func_001ba028");
extern "C" void func_0022f6b8(u32, u32) asm("func_0022f6b8");

// 0x00230b50 func_00230b50
// minilink-rodata 0x00371280   (float literals live here in the original)
u32 func_00230b50(u32 a0) asm("_ZN2sa5EVENT20set_bin_seq_pos_moveERNS_16BIN_SEQ_POS_MOVEEP4TASK");
u32 func_00230b50(u32 a0) {
    u8 frame[64];
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    v0 = func_002282f0(*(u16*)((a0 + 6)));
    if (((s32)(v0) == 0)) {
        v0_0 = func_00225b00(*(u16*)((a0 + 6)));
        if (((s32)(v0_0) == 0)) {
            v0_1 = func_00227d10(*(s16*)((a0 + 4)));
            func_001ba028(*(u32*)((v0_1 + 8)));
            *(f32*)((u32)frame) = func_00227c78(a0 + 8);
            *(f32*)(((u32)frame + 4)) = func_00227c78(a0 + 0xc);
            *(f32*)(((u32)frame + 8)) = func_00227c78(a0 + 0x10);
            *(f32*)(((u32)frame + 0xc)) = 1.0f;
            *(Q16*)(((u32)frame + 0x30)) = *(Q16*)((u32)frame);
            func_0016adc8(*(u32*)((v0_1 + 8)), (u32)frame + 0x30);
            *(f32*)(((u32)frame + 0x20)) = func_00227c78(a0 + 0x20);
            *(f32*)(((u32)frame + 0x24)) = func_00227c78(a0 + 0x24);
            *(f32*)(((u32)frame + 0x28)) = func_00227c78(a0 + 0x28);
            *(f32*)(((u32)frame + 0x2c)) = 1.0f;
            func_0022f6b8(*(u32*)((v0_1 + 8)), (u32)frame + 0x20);
            *(f32*)(((u32)frame + 0x10)) = func_00227c78(a0 + 0x14);
            *(f32*)(((u32)frame + 0x14)) = func_00227c78(a0 + 0x18);
            *(f32*)(((u32)frame + 0x18)) = func_00227c78(a0 + 0x1c);
            *(f32*)(((u32)frame + 0x1c)) = 1.0f;
            v0_2 = func_00102c18(1, func_002282d8(), (u32)&_ZN2sa5EVENT11objMoveTaskEP4TASK);
            *(u32*)((v0_2 + 0x30)) = (u32)&D_00230ae8;
            *(u32*)((v0_2 + 4)) = *(u32*)((v0_1 + 8));
            v0_3 = func_001050c8();
            v0_4 = func_001063c0(0xc, v0_3);
            *(u32*)(v0_4) = 0;
            *(u32*)((v0_4 + 4)) = 0;
            *(f32*)((v0_4 + 8)) = 1.0f;
            v0_5 = func_001063c0(0xc, v0_3);
            *(u32*)(v0_5) = 0;
            *(u32*)((v0_5 + 4)) = 0;
            *(f32*)((v0_5 + 8)) = 1.0f;
            v0_6 = func_001063c0(0xc, v0_3);
            *(u32*)(v0_6) = 0;
            *(u32*)((v0_6 + 4)) = 0;
            *(f32*)((v0_6 + 8)) = 1.0f;
            *(u32*)((v0_2 + 8)) = v0_4;
            *(u32*)((v0_2 + 0xc)) = v0_5;
            *(u32*)((v0_2 + 0x10)) = v0_6;
            func_0014f030(v0_4, *(f32*)((u32)frame), *(f32*)(((u32)frame + 0x10)), (f32)((s32)(*(u16*)((a0 + 0x2c)))) + (f32)((s32)(*(u16*)((a0 + 0x2c)))));
            func_0014f030(v0_5, *(f32*)(((u32)frame + 4)), *(f32*)(((u32)frame + 0x14)), (f32)((s32)(*(u16*)((a0 + 0x2c)))) + (f32)((s32)(*(u16*)((a0 + 0x2c)))));
            v0_7 = func_0014f030(v0_6, *(f32*)(((u32)frame + 8)), *(f32*)(((u32)frame + 0x18)), (f32)((s32)(*(u16*)((a0 + 0x2c)))) + (f32)((s32)(*(u16*)((a0 + 0x2c)))));
            v0_0 = v0_7;
        }
        v0 = v0_0;
    }
    return v0;
}
