// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351214 asm("D_00351214");
extern "C" u32 D_01d48da0 asm("D_01d48da0");
extern "C" u32 func_00102750(u32) asm("func_00102750");
extern "C" void func_001b5400() asm("func_001b5400");
extern "C" void func_001c1060() asm("func_001c1060");

// 0x001b92f8 func_001b92f8
u32 func_001b92f8() asm("_ZN2YS3OBJ20ExecAllTaskFinalizerEP4TASK");
u32 func_001b92f8() {
    u32 s0;
    u32 a0_0;
    func_001c1060();
    func_001b5400();
    s0 = 0;
    while ((a0_0 = (s0 == 0) ? *(u32*)(&D_01d48da0) : *(u32*)((s0 + 0x8b4))), (s0 = a0_0), ((s32)(a0_0) != 0)) {
        if (((s32)((*(u32*)((a0_0 + 0x108)) & 0x80000)) != 0)) {
            continue;
        }
        ((void(*)(u32))(*(u32*)((*(u32*)(a0_0) + 0x28))))(a0_0);
    }
    return func_00102750(*(u32*)(&D_00351214));
}
