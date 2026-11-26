// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f6c8 asm("D_0035f6c8");
extern "C" u32 func_00192048(u32, u32, u32, u32) asm("func_00192048");
extern "C" u32 func_002b6338(u32, u32, u32, u32) asm("func_002b6338");
extern "C" void func_00139d78(u32, u32) asm("func_00139d78");

// 0x002b5108 func_002b5108
u32 func_002b5108(u32 a0, u32 a1) asm("func_002b5108");
u32 func_002b5108(u32 a0, u32 a1) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    func_00139d78(*(u32*)(&D_0035f654), a1);
    if (((s32)(a1) >= 0)) {
        v0 = func_002b6338(*(u32*)(&D_0035f6c8), 0x200, a0, a1);
        *(u32*)((*(u32*)(&D_0035f654) + 0x198)) = *(u32*)(&D_0035f6c8);
        v0_1 = v0;
    } else {
        s0 = *(u32*)(&D_0035f654);
        v0_0 = func_00192048(a0, 0x200, a0, a1);
        *(u32*)((s0 + 0x198)) = v0_0;
        v0_1 = v0_0;
    }
    return v0_1;
}
