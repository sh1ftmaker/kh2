// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00133f60(u8) asm("func_00133f60");
extern "C" u32 func_00133f80(u8) asm("func_00133f80");
extern "C" void func_00109330() asm("func_00109330");
extern "C" void func_00109340() asm("func_00109340");
extern "C" void func_00133ea8() asm("func_00133ea8");

// 0x00109e30 func_00109e30(int)
u32 lift_00109e30(u8 a0) asm("_Z13func_00109e30i");
u32 lift_00109e30(u8 a0) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(a0) != 0)) {
        v0 = func_00133f80(a0);
        v0_1 = v0;
    } else {
        v0_0 = func_00133f60(a0);
        v0_1 = v0_0;
    }
    func_00133ea8();
    func_00109330();
    func_00109340();
    return v0_1;
}
