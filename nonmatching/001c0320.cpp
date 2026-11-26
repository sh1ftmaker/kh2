// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019fee8(u32, u32) asm("func_0019fee8");
extern "C" u32 func_001c0298(u32, u32, u32) asm("func_001c0298");
extern "C" void func_001c0410(u32, u32, u32) asm("func_001c0410");

// 0x001c0320 func_001c0320
// minilink-rodata 0x0036dd58   (float literals live here in the original)
void func_001c0320(u32 a0, u32 a1, u32 a2) asm("_ZN2YS12ATTACK_CHECK3hitEPNS_6ATTACKERb");
void func_001c0320(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 t4;
    u32 t4_1;
    v0 = func_001c0298(a0, a1, a2);
    *(u8*)(a2) = v0;
    if (((s32)(v0) != 0)) {
        if ((*(u32*)((a1 + 0x20)) != *(u32*)((a0 + 0x24)))) {
            *(u32*)((a0 + 0x24)) = *(u32*)((a1 + 0x20));
            *(u32*)((a0 + 0x28)) = 0;
        } else {
            *(u32*)((a0 + 0x28)) = (*(u32*)((a0 + 0x28)) + 1);
        }
        if ((*(u32*)(a0) != 0)) {
            if (((s32)((*(u32*)((*(u32*)(a0) + 0x588)) & 4)) != 0)) {
                *(f32*)((a0 + 0x2c)) = 30.0f;
            }
        }
    }
    v0_0 = func_0019fee8(*(u32*)((a1 + 0x28)), *(u32*)((a0 + 0x28)));
    if (((s32)(*(u16*)((v0_0 + 0x26))) != 0)) {
        func_001c0410(a0, a1, v0_0);
    }
    t4 = (a0 + 4);
    t4_1 = (t4 + ((*(u32*)((a1 + 0x1c)) >> 5) << 2));
    *(u32*)(t4_1) = (*(u32*)(t4_1) | (1 << (*(u32*)((a1 + 0x1c)) & 0x1f)));
    return;
}
