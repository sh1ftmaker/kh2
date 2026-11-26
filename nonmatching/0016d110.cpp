// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_004f6290 asm("D_004f6290");
extern "C" void func_0016c7d8(u32) asm("func_0016c7d8");
extern "C" void func_0016cab8(u32) asm("func_0016cab8");

// 0x0016d110 ttarget0_0016d110()
void lift_0016d110() asm("_Z17ttarget0_0016d110v");
void lift_0016d110() {
    u32 s1;
    u32 s1_0;
    u32 s0;
    s1 = *(u32*)(&D_004f6290);
    if (((s32)(s1) != 0)) {
        s1_0 = s1;
        do {
            s0 = (s1 == 0) ? *(u32*)(&D_004f6290) : *(u32*)((s1 + 0x28));
            s1 = s0;
            if (((s32)(s1_0) != 0)) {
                func_0016cab8(s1_0);
                func_0016c7d8(s1_0);
            }
            s1_0 = s0;
        } while (((s32)(s0) != 0));
    }
    *(u32*)(&D_004f6290) = 0;
    *(u32*)(((u32)&D_004f6290 + 4)) = 0;
    return;
}
