// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy


// 0x001626e0 func_001626e0
// minilink-rodata 0x0036b494   (float literals live here in the original)
void func_001626e0(u32 a0, u32 a1) asm("func_001626e0");
void func_001626e0(u32 a0, u32 a1) {
    u32 t6;
    u32 t7;
    if ((*(u32*)((a0 + 0x10)) == 3)) {
        if (((a1 + 0x60) != *(u32*)(a0))) {
            *(Q16*)((a1 + 0x60)) = *(Q16*)(*(u32*)(a0));
        }
        if (((a1 + 0x30) != (a1 + 0x60))) {
            *(Q16*)((a1 + 0x30)) = *(Q16*)((a1 + 0x60));
        }
        if ((a1 != (a1 + 0x30))) {
            *(Q16*)(a1) = *(Q16*)((a1 + 0x30));
        }
        if (((a1 + 0x70) != *(u32*)((a0 + 4)))) {
            *(Q16*)((a1 + 0x70)) = *(Q16*)(*(u32*)((a0 + 4)));
        }
        if (((a1 + 0x40) != (a1 + 0x70))) {
            *(Q16*)((a1 + 0x40)) = *(Q16*)((a1 + 0x70));
        }
        if (((a1 + 0x10) != (a1 + 0x40))) {
            *(Q16*)((a1 + 0x10)) = *(Q16*)((a1 + 0x40));
        }
        a0 = *(u32*)((a0 + 8));
        t6 = (a1 + 0x20);
        t7 = (a1 + 0x50);
    } else {
        if (((a1 + 0x40) != *(u32*)(a0))) {
            *(Q16*)((a1 + 0x40)) = *(Q16*)(*(u32*)(a0));
        }
        if ((a1 != (a1 + 0x40))) {
            *(Q16*)(a1) = *(Q16*)((a1 + 0x40));
        }
        if (((a1 + 0x50) != *(u32*)((a0 + 4)))) {
            *(Q16*)((a1 + 0x50)) = *(Q16*)(*(u32*)((a0 + 4)));
        }
        if (((a1 + 0x10) != (a1 + 0x50))) {
            *(Q16*)((a1 + 0x10)) = *(Q16*)((a1 + 0x50));
        }
        if (((a1 + 0x60) != *(u32*)((a0 + 8)))) {
            *(Q16*)((a1 + 0x60)) = *(Q16*)(*(u32*)((a0 + 8)));
        }
        if (((a1 + 0x20) != (a1 + 0x60))) {
            *(Q16*)((a1 + 0x20)) = *(Q16*)((a1 + 0x60));
        }
        a0 = *(u32*)((a0 + 0xc));
        t6 = (a1 + 0x30);
        t7 = (a1 + 0x70);
    }
    if ((t7 != a0)) {
        *(Q16*)(t7) = *(Q16*)(a0);
    }
    if ((t6 != t7)) {
        *(Q16*)(t6) = *(Q16*)(t7);
    }
    *(f32*)((a1 + 0xc)) = 1.0f;
    *(f32*)((a1 + 0x1c)) = 1.0f;
    *(f32*)((a1 + 0x2c)) = 1.0f;
    *(f32*)((a1 + 0x4c)) = 1.0f;
    *(f32*)((a1 + 0x3c)) = 1.0f;
    *(f32*)((a1 + 0x5c)) = 1.0f;
    *(f32*)((a1 + 0x6c)) = 1.0f;
    *(f32*)((a1 + 0x7c)) = 1.0f;
    return;
}
