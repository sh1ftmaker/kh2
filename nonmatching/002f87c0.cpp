// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" f32 func_002faaf0(f32, f32) asm("func_002faaf0");
extern "C" f32 func_002fb460(u32, f32, f32) asm("func_002fb460");
extern "C" u32 func_002fa678(u32, f32, f32) asm("func_002fa678");

// 0x002f87c0 func_002f87c0
f32 func_002f87c0(f32 fa0) asm("func_002f87c0");
f32 func_002f87c0(f32 fa0) {
    u8 frame[16];
    f32 f0;
    f32 f0_0;
    f32 f0_1;
    f32 f0_2;
    f32 f0_3;
    if (((s32)(((s32)(0x3f490fd8) < (s32)((__u32(fa0) & 0x7fffffff)))) != 0)) {
        if (((func_002fa678((u32)frame, fa0, 0.0f) & 3) != 1)) {
            if (((s32)(((s32)((func_002fa678((u32)frame, fa0, 0.0f) & 3)) < (s32)(2))) != 0)) {
                if (((s32)((func_002fa678((u32)frame, fa0, 0.0f) & 3)) != 0)) {
                    func_002fb460(1, *(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                    f0 = func_002fb460(1, *(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                } else {
                    func_002faaf0(*(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                    f0 = func_002faaf0(*(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                }
                f0_1 = f0;
            } else {
                if (((func_002fa678((u32)frame, fa0, 0.0f) & 3) == 2)) {
                    f0_0 = -(func_002faaf0(*(f32*)((u32)frame), *(f32*)(((u32)frame + 4))));
                } else {
                    func_002fb460(1, *(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                    f0_0 = func_002fb460(1, *(f32*)((u32)frame), *(f32*)(((u32)frame + 4)));
                }
                f0_1 = f0_0;
            }
            f0_2 = f0_1;
        } else {
            f0_2 = -(func_002fb460(1, *(f32*)((u32)frame), *(f32*)(((u32)frame + 4))));
        }
        f0_3 = f0_2;
    } else {
        func_002faaf0(fa0, 0.0f);
        f0_3 = func_002faaf0(fa0, 0.0f);
    }
    return f0_3;
}
