// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_00377818 asm("D_00377818");
extern "C" u32 D_0037781c asm("D_0037781c");
extern "C" u32 D_007fffff asm("D_007fffff");
extern "C" f32 func_002fb900(u32, f32) asm("func_002fb900");

// 0x002fb850 func_002fb850
// minilink-rodata 0x00377818   (float literals live here in the original)
f32 func_002fb850(u32 a0, f32 fa0) asm("func_002fb850");
f32 func_002fb850(u32 a0, f32 fa0) {
    u32 t7;
    f32 f20;
    u32 t4;
    u32 t4_0;
    u32 t4_1;
    if (((s32)(((u32)((u32)&D_007fffff) < (u32)((__u32(fa0) & 0x7fffffff)))) != 0)) {
        if (((s32)(((s32)((((__u32(fa0) & 0x7fffffff) >> 0x17) + a0)) < (s32)(0x100))) != 0)) {
            if (((s32)((((__u32(fa0) & 0x7fffffff) >> 0x17) + a0)) > 0)) {
                t4 = ((__u32(fa0) & 0x807fffff) | ((((__u32(fa0) & 0x7fffffff) >> 0x17) + a0) << 0x17));
            } else {
                if (((s32)(((s32)(0xc350) < (s32)(a0))) != 0)) {
                    t7 = (u32)&D_00377818;
                } else {
                    t7 = (u32)&D_0037781c;
                }
                f20 = *(f32*)(t7);
                t4 = __u32((func_002fb900(a0, *(f32*)(t7)) * f20));
            }
            t4_0 = t4;
        } else {
            t4_0 = __u32((func_002fb900(a0, 9.999999394896025e+29f) * 9.999999394896025e+29f));
        }
        t4_1 = t4_0;
    } else {
        t4_1 = __u32(fa0);
    }
    return __f32(t4_1);
}
