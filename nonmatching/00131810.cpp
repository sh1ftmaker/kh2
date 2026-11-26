// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001317a8(u32, f32) asm("func_001317a8");
extern "C" void func_00127cf8(u32, u32, u32, f32) asm("func_00127cf8");

// 0x00131810 func_00131810
void func_00131810(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, f32 fa0) asm("func_00131810");
void func_00131810(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, f32 fa0) {
    u32 s1;
    u32 v0;
    u32 t4;
    u32 t7;
    u32 a3_0;
    u32 t6;
    u32 t6_1;
    func_00127cf8(a4, a1, a2, fa0);
    s1 = *(u32*)((a0 + 4));
    v0 = func_001317a8(a0, fa0);
    t4 = *(u32*)((s1 + 0x10));
    t7 = *(u32*)((s1 + 0x28));
    if (((s32)(t4) > 0)) {
        a3_0 = 0;
        t6 = *(u32*)((a1 + 0x2c));
        do {
            t6_1 = *(u32*)((a1 + 0x2c));
            t6 = (t6_1 + (a3_0 << 6));
            if ((t6 != (((s1 + t7) + ((t4 * v0) << 6)) + (a3_0 << 6)))) {
                *(Q16*)(t6) = *(Q16*)((((s1 + t7) + ((t4 * v0) << 6)) + (a3_0 << 6)));
                *(Q16*)((t6 + 0x10)) = *(Q16*)(((((s1 + t7) + ((t4 * v0) << 6)) + (a3_0 << 6)) + 0x10));
                *(Q16*)((t6 + 0x20)) = *(Q16*)(((((s1 + t7) + ((t4 * v0) << 6)) + (a3_0 << 6)) + 0x20));
                *(Q16*)((t6 + 0x30)) = *(Q16*)(((((s1 + t7) + ((t4 * v0) << 6)) + (a3_0 << 6)) + 0x30));
                a3_0 = (a3_0 + 1);
                t4 = *(u32*)((s1 + 0x10));
            } else {
                a3_0 = (a3_0 + 1);
            }
        } while (((s32)(a3_0) < (s32)(t4)));
    }
    return;
}
