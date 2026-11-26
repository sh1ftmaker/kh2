// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001c7420 asm("D_001c7420");
extern "C" u32 D_01d49940 asm("D_01d49940");
extern "C" f32 func_001c71b8(u32, u8) asm("func_001c71b8");
extern "C" void func_001c7148(u32, u8) asm("func_001c7148");

// 0x001c7440 func_001c7440
// minilink-rodata 0x0036dfac   (float literals live here in the original)
f32 func_001c7440(u32 a0, u8 a1) asm("func_001c7440");
f32 func_001c7440(u32 a0, u8 a1) {
    f32 f0;
    u32 t7;
    if ((*(f32*)((a0 + 0x40)) < 12.0f)) {
        f0 = (*(f32*)((a0 + 0x40)) * 255.0f);
        *(u8*)((a0 + 0x16)) = (s32)((f0 / 12.0f));
    } else {
        if ((a1 != 0)) {
            t7 = (*(u8*)((a0 + 0x45)) + -1);
            *(u8*)((a0 + 0x45)) = t7;
            if (((s32)((t7 & 0xff)) == 0)) {
                func_001c7148(a0, a1);
                if (((s32)((*(u64*)(&D_01d49940) & (u64)(1))) != 0)) {
                    *(u32*)((a0 + 0x10)) = (u32)&D_001c7420;
                }
                *(u8*)((a0 + 0x45)) = 0x1e;
            }
        }
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x50))) + 0x58))))(*(u32*)((a0 + 0x50)), a0);
    }
    return func_001c71b8(a0, a1);
}
