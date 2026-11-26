// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_001e0670 asm("D_001e0670");
extern "C" u32 D_001e0690 asm("D_001e0690");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_00104190() asm("func_00104190");
extern "C" void func_00102180(u32) asm("func_00102180");

// 0x001e06b8 ryj::SHAKE::Init()
void lift_001e06b8() asm("_ZN3ryj5SHAKE4InitEv");
void lift_001e06b8() {
    u32 s0;
    u32 loc_0;
    u32 s1;
    s0 = func_00102c80();
    s1 = func_00104190();
    func_00102180((u32)&loc_0);
    if ((loc_0 == s0)) {
        *(u32*)((func_00102788(*(u32*)((loc_0 + 4)), 1, 0x1fbd0, (u32)&D_001e0670) + 0x30)) = (u32)&D_001e0690;
    } else {
        if ((loc_0 == s1)) {
            *(u32*)((func_00102788(*(u32*)((s1 + 4)), 0, 0x222e0, (u32)&D_001e0670) + 0x30)) = (u32)&D_001e0690;
        }
    }
    return;
}
