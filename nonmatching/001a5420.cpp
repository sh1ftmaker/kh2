// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 func_001c6f10() asm("func_001c6f10");

// 0x001a5420 func_001a5420
// minilink-rodata 0x0036d4b8   (float literals live here in the original)
void func_001a5420() asm("func_001a5420");
void func_001a5420() {
    u32 v0;
    u32 t7;
    u32 t7_0;
    f32 f1;
    f32 f0;
    u32 t7_1;
    f32 f1_2;
    f32 f3;
    u32 t4;
    f32 f2;
    v0 = func_001c6f10();
    if (((s32)(v0) != 0)) {
        t7 = (*(u32*)(&D_003638d0) * 0x10dcd);
        *(u32*)(&D_003638d0) = t7;
        v0 = (f32)(t7);
        t7_0 = (*(u32*)(&D_003638d0) * 0x10dcd);
        *(u32*)(&D_003638d0) = t7_0;
        f1 = (__f32(v0) * 2.3283064365386963e-10f);
        f0 = (f32)(t7_0);
        t7_1 = (*(u32*)(&D_003638d0) * 0x10dcd);
        *(u32*)(&D_003638d0) = t7_1;
        f1_2 = (f0 * 2.3283064365386963e-10f);
        f3 = (f32)(t7_1);
        t4 = (v0 + 0x30);
        *(f32*)(t4) = (-20.0f + (f1 * 40.0f));
        *(f32*)((t4 + 4)) = (-40.0f + (f1_2 * 20.0f));
        *(u32*)((t4 + 0xc)) = 0;
        f2 = (f3 * 2.3283064365386963e-10f);
        *(f32*)((t4 + 8)) = (-20.0f + (f2 * 40.0f));
    }
    return;
}
