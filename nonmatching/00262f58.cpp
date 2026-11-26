// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");

// 0x00262f58 func_00262f58
u32 func_00262f58() asm("func_00262f58");
u32 func_00262f58() {
    u32 v0;
    v0 = func_00257770();
    func_0028da70(v0, 0x129);
    return func_0028da70(v0 + 0xb350, 0x132);
}
