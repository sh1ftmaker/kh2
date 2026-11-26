// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_007fffff asm("D_007fffff");

// 0x00314930 func_00314930
f32 func_00314930(u32 a0) asm("func_00314930");
f32 func_00314930(u32 a0) {
    u32 t3;
    u32 t5;
    u32 t3_0;
    u32 t5_1;
    u32 t3_2;
    u32 t5_3;
    u32 t3_4;
    u32 t5_5;
    u32 t3_6;
    u32 t5_7;
    u32 t3_8;
    u32 t5_9;
    u32 t4;
    if (((s32)(((u32)(*(u32*)(a0)) < (u32)(2))) == 0)) {
        if (((*(u32*)(a0) ^ 4) != 0)) {
            if (((*(u32*)(a0) ^ 2) != 0)) {
                if (((s32)(*(u32*)((a0 + 0xc))) != 0)) {
                    if (((s32)(*(u32*)((a0 + 8))) < (s32)(-0x7e))) {
                        t3_0 = 0;
                        t5_1 = 0;
                    } else {
                        if (((s32)(((s32)((*(u32*)((a0 + 8)) + 0x7f)) < (s32)(0x100))) == 0)) {
                            t3 = 0xff;
                            t5 = (u32)&D_007fffff;
                        } else {
                            t3 = (*(u32*)((a0 + 8)) + 0x7f);
                            t5 = (*(u32*)((a0 + 0xc)) >> 7);
                        }
                        t3_0 = t3;
                        t5_1 = t5;
                    }
                    t3_2 = t3_0;
                    t5_3 = t5_1;
                } else {
                    t3_2 = 0;
                    t5_3 = *(u32*)((a0 + 0xc));
                }
                t3_4 = t3_2;
                t5_5 = t5_3;
            } else {
                t3_4 = 0;
                t5_5 = 0;
            }
            t3_6 = t3_4;
            t5_7 = t5_5;
        } else {
            t3_6 = 0xff;
            t5_7 = (u32)&D_007fffff;
        }
        t3_8 = t3_6;
        t5_9 = t5_7;
    } else {
        t3_8 = 0xff;
        t5_9 = (u32)&D_007fffff;
    }
    return __f32(((((((t4 & 0xff800000) | (t5_9 & (u32)&D_007fffff)) & 0x807fffff) | ((t3_8 & 0xff) << 0x17)) & 0x7fffffff) | (*(u32*)((a0 + 4)) << 0x1f)));
}
