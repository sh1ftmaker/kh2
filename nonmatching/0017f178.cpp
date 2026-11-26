// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 func_0017eda8(u32, u32) asm("func_0017eda8");
extern "C" u32 func_0017edf0(u32, u32) asm("func_0017edf0");
extern "C" u32 func_0017efa0(u32, u32, f32, f32) asm("func_0017efa0");
extern "C" u32 func_001a9798(u32, u32, f32, f32) asm("func_001a9798");
extern "C" void func_0017f178(u32, u32, f32, f32) asm("func_0017f178");
extern "C" void func_00180800(u32, u32) asm("func_00180800");

// 0x0017f178 func_0017f178
void func_0017f178(u32 a0, u32 a1, f32 fa0, f32 fa1) asm("func_0017f178");
void func_0017f178(u32 a0, u32 a1, f32 fa0, f32 fa1) {
    u32 s1;
    u32 a0_0;
    u32 t7;
    if ((func_001a9798(*(u32*)(a0), a1, fa0, fa1) != 0)) {
        fa0 = 0.0f;
    }
    *(u32*)((a0 + 0xf0)) = (*(u32*)((a0 + 8)) + 0x80);
    *(u32*)((a0 + 0xfc)) = 0;
    *(u32*)((a0 + 0x100)) = 0;
    if (((s32)(func_0017efa0(a0, func_0017edf0(a0, a1), __f32(fa0), fa1)) != 0)) {
        *(u32*)((a0 + 0x18)) = a1;
        func_00180800(a0, func_0017eda8(a0, a1));
        s1 = 0;
        while ((a0_0 = (s1 == 0) ? *(u32*)((a0 + 0x94)) : *(u32*)((s1 + 0x9c))), (s1 = a0_0), ((s32)(a0_0) != 0)) {
            func_0017f178(a0_0, a1, __f32(fa0), fa1);
        }
        t7 = 1;
    } else {
        t7 = 0;
    }
    return;
}
