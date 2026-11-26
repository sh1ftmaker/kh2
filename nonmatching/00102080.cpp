// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00101ea8 asm("D_00101ea8");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_0038aa40 asm("D_0038aa40");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" void func_001021d0(u32) asm("func_001021d0");

// 0x00102080 func_00102080
void func_00102080(u32 a0) asm("func_00102080");
void func_00102080(u32 a0) {
    u32 s0;
    u32 t5;
    if ((*(u32*)((a0 + 0x1c)) != 3)) {
        s0 = 0;
        while ((t5 = (s0 == 0) ? *(u32*)(&D_0038aa40) : *(u32*)((s0 + 0xc))), (s0 = t5), ((s32)(t5) != 0)) {
            if (((s32)((*(u32*)((t5 + 0x14)) & *(u32*)((a0 + 0x14)))) == 0)) {
                continue;
            }
            *(u32*)((t5 + 0x1c)) = 3;
            func_001021d0(a0);
        }
        *(u32*)((func_00102818(*(u32*)(&D_0032b91c), *(u32*)((a0 + 0x14)), *(u32*)((a0 + 0x18)), (u32)&D_00101ea8, *(u32*)((a0 + 0x28))) + 4)) = a0;
    }
    return;
}
