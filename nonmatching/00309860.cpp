// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_0030edb0(u32, u32) asm("func_0030edb0");
extern "C" void func_0030ee00() asm("func_0030ee00");

// 0x00309860 func_00309860
u32 func_00309860(u32 a0, u32 a1) asm("func_00309860");
u32 func_00309860(u32 a0, u32 a1) {
    u32 s0;
    u32 v1;
    u32 s0_0;
    u32 s0_1;
    u32 s0_2;
    u32 s0_3;
    func_0030edb0(a0, a1);
    if ((*(u32*)((a1 + 8)) == a0)) {
        s0 = *(u32*)((a1 + 8));
        *(u32*)((a1 + 8)) = *(u32*)((*(u32*)((a1 + 8)) + 0x38));
        s0_3 = s0;
    } else {
        if (((s32)(*(u32*)((a1 + 8))) != 0)) {
            if ((*(u32*)((*(u32*)((a1 + 8)) + 0x38)) != a0)) {
                v1 = *(u32*)((*(u32*)((a1 + 8)) + 0x38));
                do {
                    if (((s32)(v1) == 0)) {
                        s0_0 = v1;
                        func_0030ee00();
                        return s0_0;
                    }
                    s0_0 = v1;
                    v1 = *(u32*)((v1 + 0x38));
                } while ((v1 != a0));
                *(u32*)((s0_0 + 0x38)) = *(u32*)((a0 + 0x38));
                s0_1 = s0_0;
            } else {
                *(u32*)((*(u32*)((a1 + 8)) + 0x38)) = *(u32*)((a0 + 0x38));
                s0_1 = *(u32*)((a1 + 8));
            }
            s0_2 = s0_1;
        } else {
            s0_2 = *(u32*)((a1 + 8));
        }
        s0_3 = s0_2;
    }
    func_0030ee00();
    return s0_3;
}
