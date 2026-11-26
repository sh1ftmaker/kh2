// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035de84 asm("D_0035de84");
extern "C" u32 D_0035de88 asm("D_0035de88");
extern "C" u32 func_001de4b0(u32, u32, u32) asm("func_001de4b0");

// 0x0022c758 func_0022c758
u32 func_0022c758() asm("func_0022c758");
u32 func_0022c758() {
    u32 v0;
    while ((v0 = func_001de4b0(*(u32*)(&D_0035de84), 0, 0)), ((s32)(v0) != 0)) {
        if ((*(u32*)(&D_0035de88) == v0)) {
            return 1;
        }
    }
    return 0;
}
