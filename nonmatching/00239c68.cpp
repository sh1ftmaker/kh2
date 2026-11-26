// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00239af8(u32, u32) asm("func_00239af8");

// 0x00239c68 ctarget_00239c68(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x003714b8   (float literals live here in the original)
f32 lift_00239c68(u32 a0, u32 a1) asm("_Z16ctarget_00239c68jjjj");
f32 lift_00239c68(u32 a0, u32 a1) {
    u32 t5;
    *(u8*)((a0 + 0xbc)) = 0;
    *(u32*)((a0 + 0x114)) = a1;
    t5 = (*(u32*)((a0 + 0xb4)) + (a1 * 0x24));
    *(u32*)((a0 + 0x140)) = *(u16*)((t5 + 4));
    *(u32*)((a0 + 0x144)) = *(u32*)((t5 + 8));
    *(f32*)((a0 + 0x108)) = (f32)((s32)(func_00239af8(a0, a1)));
    if (((f32)((s32)(func_00239af8(a0, a1))) < *(f32*)((a0 + 0x104)))) {
        *(f32*)((a0 + 0x104)) = (f32)((s32)(func_00239af8(a0, a1)));
    }
    *(u8*)((a0 + 0xbc)) = 0;
    *(u32*)((a0 + 0x10c)) = 0;
    *(f32*)((a0 + 0x108)) = (*(f32*)((a0 + 0x108)) + 1.0f);
    return 1.0f;
}
