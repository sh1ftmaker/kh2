// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00177638(u32) asm("func_00177638");
extern "C" u32 func_0019c650(u32) asm("func_0019c650");
extern "C" void func_0016ac38(u32, u32, u32, u32, u32) asm("func_0016ac38");
extern "C" void func_001940b8(u32, u32, u32, u32, f32, f32) asm("func_001940b8");

// 0x00185770 func_00185770
// minilink-rodata 0x0036c8e4   (float literals live here in the original)
void func_00185770(u32 a0) asm("func_00185770");
void func_00185770(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    u8 t7_1;
    t5 = *(u32*)(*(u32*)((a0 + 8)));
    func_0016ac38(a0, 0, 1, 0, 0);
    if ((t5 != 0x72)) {
        func_001940b8(a0, 0xff, 0xff, 0xff, 0.0f, 0.0f);
    }
    func_001940b8(a0, 0xff, 0xff, 0xff, 1.0f, 0.0f);
    if (((s32)(func_0019c650(*(u32*)((a0 + 0x9f4)))) != 0)) {
        t7 = *(u32*)((a0 + 0x10c));
        *(u32*)((a0 + 0x10c)) = ((t7 & 0xfffffeff) & 0xfffffbff);
    } else {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x48))))(a0);
    }
    t7_0 = *(u16*)((*(u32*)((a0 + 8)) + 0x48));
    t7_1 = ((t7_0 >> 7) & 1);
    if ((t7_1 != 0)) {
        func_00177638(*(u32*)((a0 + 0x9f4)));
        return;
    } else {
        return;
    }
}
