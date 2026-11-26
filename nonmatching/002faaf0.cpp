// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }


// 0x002faaf0 func_002faaf0
// minilink-rodata 0x003776c0   (float literals live here in the original)
f32 func_002faaf0(f32 fa0, f32 fa1) asm("func_002faaf0");
f32 func_002faaf0(f32 fa0, f32 fa1) {
    u32 t6;
    u32 t6_0;
    if (((s32)(((s32)(0x31ffffff) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
        if (((s32)((s32)(fa0)) != 0)) {
            if (((s32)(((s32)(0x3e999999) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
                return (1.0f - (((fa0 * fa0) * 0.5f) - (((fa0 * fa0) * ((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * -1.135964759757524e-11f) + 2.08757211517252e-09f)) + -2.75573114549843e-07f)) + 2.48015858232975e-05f)) + -0.00138888880610466f)) + 0.0416666641831398f))) - (fa0 * fa1))));
            } else {
                if (((s32)(((s32)(0x3f480000) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
                    t6 = ((__u32(fa0) & 0x7fffffff) + 0xff000000);
                } else {
                    t6 = 0x3e900000;
                }
                return ((1.0f - __f32(t6)) - ((((fa0 * fa0) * 0.5f) - __f32(t6)) - (((fa0 * fa0) * ((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * -1.135964759757524e-11f) + 2.08757211517252e-09f)) + -2.75573114549843e-07f)) + 2.48015858232975e-05f)) + -0.00138888880610466f)) + 0.0416666641831398f))) - (fa0 * fa1))));
            }
        } else {
            return 1.0f;
        }
    } else {
        if (((s32)(((s32)(0x3e999999) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
            return (1.0f - (((fa0 * fa0) * 0.5f) - (((fa0 * fa0) * ((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * -1.135964759757524e-11f) + 2.08757211517252e-09f)) + -2.75573114549843e-07f)) + 2.48015858232975e-05f)) + -0.00138888880610466f)) + 0.0416666641831398f))) - (fa0 * fa1))));
        } else {
            if (((s32)(((s32)(0x3f480000) < (s32)((__u32(fa0) & 0x7fffffff)))) == 0)) {
                t6_0 = ((__u32(fa0) & 0x7fffffff) + 0xff000000);
            } else {
                t6_0 = 0x3e900000;
            }
            return ((1.0f - __f32(t6_0)) - ((((fa0 * fa0) * 0.5f) - __f32(t6_0)) - (((fa0 * fa0) * ((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * (((fa0 * fa0) * -1.135964759757524e-11f) + 2.08757211517252e-09f)) + -2.75573114549843e-07f)) + 2.48015858232975e-05f)) + -0.00138888880610466f)) + 0.0416666641831398f))) - (fa0 * fa1))));
        }
    }
}
