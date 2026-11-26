// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00102180(u32) asm("func_00102180");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_00104190() asm("func_00104190");
extern "C" u32 func_001de8a8(u32, u32, u32, u32) asm("func_001de8a8");
extern "C" void func_001e02f8(u32) asm("func_001e02f8");

// 0x001de808 ryj::PAX::TaskStart()
u32 lift_001de808() asm("_ZN3ryj3PAX9TaskStartEv");
u32 lift_001de808() {
    u32 s0;
    u32 loc_0;
    u32 s2;
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 s1_1;
    u32 v0_2;
    s0 = func_00102c80();
    s2 = func_00104190();
    v0 = func_00102180((u32)&loc_0);
    if ((loc_0 == s0)) {
        s1 = loc_0;
        func_001e02f8(1);
        v0_0 = func_001de8a8(*(u32*)((s1 + 4)), 9, 0x4f4c, 0x16760);
        v0 = v0_0;
    } else {
        if ((loc_0 == s2)) {
            s1_1 = loc_0;
            func_001e02f8(2);
            v0_2 = func_001de8a8(*(u32*)((s2 + 4)), 1, 0x7918, 0x11940);
            v0 = v0_2;
        }
    }
    return v0;
}
