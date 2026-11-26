// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00176dd8(u32, u32, u32, u32) asm("func_00176dd8");
extern "C" u32 func_001a3868(u32) asm("func_001a3868");
extern "C" void func_00190878(u32, u32, u32, u32) asm("func_00190878");

// 0x0010cbc8 func_0010cbc8
void func_0010cbc8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2kn6Friend14setCommandItemEiPN2YS3OBJEi");
void func_0010cbc8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 s1;
    if (((s32)(a2) != 0)) {
        *(u32*)((a0 + 0xb78)) = 0;
        s1 = (a0 + 0x9f4);
        if ((*(u32*)((a0 + 0x9f4)) != a2)) {
            func_00190878(s1, a2, 0, a3);
        }
        func_00176dd8(a0, func_001a3868(a1), s1, a3);
        return;
    } else {
        return;
    }
}
