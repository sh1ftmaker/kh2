// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e3c770 asm("D_01e3c770");
extern "C" u32 D_01e3c780 asm("D_01e3c780");
extern "C" u32 D_01e4c780 asm("D_01e4c780");
extern "C" u32 func_002fd408(u32) asm("func_002fd408");
extern "C" u32 func_0030edb0(u32) asm("func_0030edb0");
extern "C" u32 func_0030ee00() asm("func_0030ee00");

// 0x00316658 func_00316658
u32 func_00316658(u32 a0) asm("func_00316658");
u32 func_00316658(u32 a0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(((u32)(a0) < (u32)((u32)&D_01e3c780))) == 0)) {
        if (((u32)(a0) < (u32)((u32)&D_01e4c780))) {
            v0 = func_0030edb0(a0 + -0x50);
            *(u32*)(&D_01e3c770) = v0;
            *(u64*)(&D_01e4c780) = (*(u64*)(&D_01e4c780) & ~((0 | ((u64)(1) << ((a0 - (u32)&D_01e3c780) >> 0xa)))));
            if (((s32)(v0) != 0)) {
                v0_0 = func_0030ee00();
                v0 = v0_0;
            }
            return v0;
        } else {
            return func_002fd408(a0 + -0x50);
        }
    } else {
        return func_002fd408(a0 + -0x50);
    }
}
