// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001aa388(u32, u32) asm("func_001aa388");
extern "C" void func_00192990(u32, u32, u32, u32) asm("func_00192990");

// 0x001a9970 func_001a9970
// minilink-rodata 0x0036d618   (float literals live here in the original)
f32 func_001a9970(u32 a0, u32 a1) asm("_ZN2YS11MESSAGEDRAW13set_font_sizeEi");
f32 func_001a9970(u32 a0, u32 a1) {
    u8 frame[32];
    f32 f0;
    f32 f1;
    u32 t7;
    if (((s32)(a1) != 0)) {
        f0 = (f32)((s32)(*(u8*)((*(u32*)((a0 + 4)) + 0x11))));
        f1 = ((f32)((s32)(a1)) / (f32)((s32)(*(u8*)((*(u32*)((a0 + 4)) + 0x11)))));
    } else {
        f1 = 1.0f;
    }
    *(f32*)((a0 + 0x28)) = f1;
    *(f32*)((a0 + 0x38)) = f1;
    t7 = *(u32*)((a0 + 8));
    if (((s32)(t7) != 0)) {
        *(u32*)((u32)frame) = *(u32*)((a0 + 0x24));
        *(u32*)(((u32)frame + 4)) = *(u32*)((a0 + 0x28));
        *(u32*)(((u32)frame + 8)) = *(u32*)((a0 + 0x2c));
        *(u32*)(((u32)frame + 0xc)) = *(u32*)((a0 + 0x30));
        *(u32*)(((u32)frame + 0x10)) = *(u32*)((a0 + 0x34));
        *(u32*)(((u32)frame + 0x14)) = *(u32*)((a0 + 0x38));
        func_00192990(t7, *(u32*)((a0 + 4)), (u32)frame, a0 + 0x50);
        func_001aa388(a0, *(u32*)((a0 + 8)));
        f0 = func_001aa388(a0, *(u32*)((a0 + 8)));
    }
    return f0;
}
