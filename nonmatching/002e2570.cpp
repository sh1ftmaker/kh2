// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00197920(u32) asm("func_00197920");

// 0x002e2570 wtarget_002e2570(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00375f30   (float literals live here in the original)
void lift_002e2570(u32 a0) asm("_Z16wtarget_002e2570jjjj");
void lift_002e2570(u32 a0) {
    u32 t6;
    u32 t7;
    f32 f2;
    if (((s32)(func_00197920(a0)) == 0)) {
        t6 = (a0 + 0x70);
        t7 = (a0 + 0xb0);
        if ((t6 != t7)) {
            *(Q16*)(t6) = *(Q16*)(t7);
            *(Q16*)((t6 + 0x10)) = *(Q16*)((t7 + 0x10));
            *(Q16*)((t6 + 0x20)) = *(Q16*)((t7 + 0x20));
            *(Q16*)((t6 + 0x30)) = *(Q16*)((t7 + 0x30));
        }
        if ((*(u32*)((a0 + 0x110)) == 1)) {
            f2 = (*(f32*)((a0 + 0x104)) + (*(f32*)(&D_00349e10) * 0.5f));
            *(f32*)((a0 + 0x104)) = f2;
            if (((f32)(*(s32*)((*(u32*)((a0 + 0x64)) + 4))) <= f2)) {
                *(f32*)((a0 + 0x104)) = (f32)(*(s32*)((*(u32*)((a0 + 0x64)) + 4)));
                *(u32*)((a0 + 0x110)) = 0;
            }
        } else {
            if ((*(u32*)((a0 + 0x110)) == 2)) {
                *(f32*)((a0 + 0x104)) = (*(f32*)((a0 + 0x104)) - (*(f32*)(&D_00349e10) * 0.5f));
                if (((*(f32*)((a0 + 0x104)) - (*(f32*)(&D_00349e10) * 0.5f)) <= (f32)(*(s32*)(*(u32*)((a0 + 0x64)))))) {
                    *(f32*)((a0 + 0x104)) = (f32)(*(s32*)(*(u32*)((a0 + 0x64))));
                    *(u32*)((a0 + 0x110)) = 0;
                }
            }
        }
    }
    return;
}
