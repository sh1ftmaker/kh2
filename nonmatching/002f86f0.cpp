// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_007fffff asm("D_007fffff");

// 0x002f86f0 func_002f86f0(float)
// minilink-rodata 0x00376f7c   (float literals live here in the original)
f32 lift_002f86f0(f32 fa0) asm("_Z13func_002f86f0f");
f32 lift_002f86f0(f32 fa0) {
    u32 t5;
    u32 t4;
    t5 = (((__u32(fa0) & 0x7fffffff) >> 0x17) + -0x7f);
    if (((s32)(((s32)(t5) < (s32)(0x17))) != 0)) {
        if (((s32)(t5) < 0)) {
            if ((0.0f < (fa0 + 9.999999394896025e+29f))) {
                if (((s32)(__u32(fa0)) < 0)) {
                    return -0.0f;
                } else {
                    if (((u32)((u32)&D_007fffff) >= (u32)((__u32(fa0) & 0x7fffffff)))) {
                        return fa0;
                    } else {
                        return 1.0f;
                    }
                }
            } else {
                return fa0;
            }
        } else {
            if (((s32)((__u32(fa0) & ((s32)((u32)&D_007fffff) >> t5))) != 0)) {
                if ((0.0f < (fa0 + 9.999999394896025e+29f))) {
                    if (((s32)(__u32(fa0)) > 0)) {
                        t4 = (__u32(fa0) + ((s32)(0x800000) >> t5));
                    } else {
                        t4 = __u32(fa0);
                    }
                    fa0 = __f32((t4 & ~((0 | ((s32)((u32)&D_007fffff) >> t5)))));
                }
            }
            return fa0;
        }
    } else {
        return fa0;
    }
}
