// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c6cb20 asm("D_01c6cb20");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_001a5d48(u32) asm("func_001a5d48");

// 0x001a67e0 func_001a67e0
u32 func_001a67e0(u32 a0) asm("_ZN2YS5MAGIC6DeleteEPS0_");
u32 func_001a67e0(u32 a0) {
    u32 t6;
    u32 t7;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    if (((s32)(a0) != 0)) {
        t6 = 0;
        do {
            t7 = ((s32)(t6) != 0) ? *(u32*)((t6 + 0xc)) : *(u32*)(&D_01c6cb20);
            t6 = t7;
            if (((s32)(t7) == 0)) {
                if ((a0 != 0)) {
                    func_001a5d48(a0);
                    v0 = func_00105110(a0);
                    v0_0 = v0;
                }
                return v0_0;
            }
        } while ((t7 != a0));
        if ((a0 != 0)) {
            func_001a5d48(a0);
            v0_1 = func_00105110(a0);
            v0_2 = v0_1;
        }
        v0_3 = v0_2;
    }
    return v0_3;
}
