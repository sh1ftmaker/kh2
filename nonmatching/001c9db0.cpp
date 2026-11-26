// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351f30 asm("D_00351f30");
extern "C" u32 D_01d49980 asm("D_01d49980");

// 0x001c9db0 func_001c9db0
u32 func_001c9db0(u32 a0) asm("func_001c9db0");
u32 func_001c9db0(u32 a0) {
    u32 t5;
    u32 t7;
    u32 t6;
    if (((s32)(*(u32*)(&D_00351f30)) > 0)) {
        t5 = 0;
        t7 = *(u32*)((u32)&D_01d49980);
        t6 = (u32)&D_01d49980;
        do {
            if ((*(u32*)((t6 + (t5 * 4))) == a0)) {
                return 1;
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(*(u32*)(&D_00351f30)));
        } while ((t7 != 0));
    }
    return 0;
}
