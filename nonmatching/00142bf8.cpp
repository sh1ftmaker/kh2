// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0014ed28(u32, u32) asm("func_0014ed28");

// 0x00142bf8 func_00142bf8
void func_00142bf8(u32 a0) asm("_ZN2dk11OctCollFile15createPolygonSeEv");
void func_00142bf8(u32 a0) {
    u32 t3;
    u32 s1;
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 t5;
    u32 t6_1;
    t3 = *(u32*)((a0 + 0x28));
    if (((s32)(t3) > 0)) {
        s1 = 0;
        t6 = *(u32*)((a0 + 0xc));
        do {
            t6_0 = *(u32*)((a0 + 0xc));
            t7 = *(u16*)(((t6_0 + (s1 << 4)) + 0xe));
            t5 = *(u32*)((a0 + 0x14));
            t6_1 = *(u32*)((t5 + (t7 << 2)));
            if (((s32)((t6_1 & 0x60000)) != 0)) {
                func_0014ed28((t6_1 >> 0x11) & 3, s1);
                t3 = *(u32*)((a0 + 0x28));
            }
            s1 = (s1 + 1);
        } while (((s32)(s1) < (s32)(t3)));
    }
    return;
}
