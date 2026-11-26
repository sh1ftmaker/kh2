// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00135ad0(u32) asm("func_00135ad0");
extern "C" void func_00135c50(u32, u32) asm("func_00135c50");

// 0x00135bd0 func_00135bd0
void func_00135bd0(u32 a0, u32 a1) asm("func_00135bd0");
void func_00135bd0(u32 a0, u32 a1) {
    u32 s1;
    func_00135c50(a0, a1);
    if ((*(u32*)((a0 + 0xc)) == 0x20)) {
        s1 = *(u32*)((a0 + 0xc));
        func_00135ad0(a0);
        if ((*(u32*)((a0 + 0xc)) == s1)) {
            func_00135c50(a0, *(u32*)((a0 + 0x10)));
        }
    }
    *(u32*)((((*(u32*)((a0 + 0xc)) << 2) + a0) + 0x10)) = a1;
    *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) + 1);
    return;
}
