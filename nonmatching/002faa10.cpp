// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_007fffff asm("D_007fffff");

// 0x002faa10 func_002faa10
// minilink-rodata 0x003776a0   (float literals live here in the original)
f32 func_002faa10(f32 fa0) asm("func_002faa10");
f32 func_002faa10(f32 fa0) {
    u32 t6;
    u32 t4;
    u32 t3;
    u32 t2;
    u32 t7;
    u32 t7_0;
    u32 t5;
    u32 t5_1;
    if (((s32)(((u32)((u32)&D_007fffff) < (u32)((__u32(fa0) & 0x7fffffff)))) != 0)) {
        if (((s32)(__u32(fa0)) < 0)) {
            t5 = __u32(((fa0 - fa0) / (fa0 - fa0)));
        } else {
            t6 = ((((__u32(fa0) & (u32)&D_007fffff) | 0x800000) << ((((s32)(__u32(fa0)) >> 0x17) + -0x7f) & 1)) << 1);
            t4 = 0x1000000;
            t3 = 0;
            t2 = 0;
            do {
                if (((s32)(t6) >= (s32)((t3 + t4)))) {
                    t6 = (t6 - (t3 + t4));
                    t3 = ((t3 + t4) + t4);
                    t2 = (t2 + t4);
                }
                t4 = (t4 >> 1);
                t6 = (t6 << 1);
            } while (((s32)(t4) != 0));
            if (((s32)(t6) != 0)) {
                if ((1.0f <= 1.0f)) {
                    t7 = ((s32)((t2 + (t2 & 1))) >> 1);
                } else {
                    t7 = ((s32)(t2) >> 1);
                }
                t7_0 = t7;
            } else {
                t7_0 = ((s32)(t2) >> 1);
            }
            t5 = ((t7_0 + 0x3f000000) + (((s32)((((s32)(__u32(fa0)) >> 0x17) + -0x7f)) >> 1) << 0x17));
        }
        t5_1 = t5;
    } else {
        t5_1 = __u32(fa0);
    }
    return __f32(t5_1);
}
