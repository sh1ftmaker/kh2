// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 func_00106520(u32, u32) asm("func_00106520");

// 0x00132720 func_00132720
void func_00132720(u32 a0, u32 a1) asm("func_00132720");
void func_00132720(u32 a0, u32 a1) {
    u32 v0;
    if ((*(u32*)((a0 + 0x278)) != a1)) {
        if ((a1 != 0)) {
            *(u32*)((a0 + 0x14)) = (*(u32*)((a0 + 0x14)) | 1);
            v0 = func_00106520(*(u16*)((a1 + 2)), *(u16*)((a1 + 4)) + 1);
            v0 = (f32)(v0);
            *(f32*)((a0 + 0x280)) = __f32(v0);
            *(u32*)((a0 + 0x284)) = 0;
        }
        *(u32*)((a0 + 0x27c)) = a1;
        *(u32*)((a0 + 0x278)) = a1;
    }
    return;
}
