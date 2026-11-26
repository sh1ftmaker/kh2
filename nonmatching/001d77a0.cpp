// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" u32 func_001a6c90(u32) asm("func_001a6c90");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");

// 0x001d77a0 u_call0_001d77a0()
void lift_001d77a0() asm("_Z16u_call0_001d77a0v");
void lift_001d77a0() {
    u32 s0;
    u32 v0;
    if (((s32)(func_001a6d08(0x6a)) == 0)) {
        if (((s32)(func_001a6d08(0x65)) != 0)) {
            s0 = 1;
            do {
                v0 = func_00189200((u32)&D_0032e020, 1);
                s0 = (s0 + 1);
                if (((s32)(((u32)(*(u8*)((v0 + 2))) < (u32)(5))) != 0)) {
                    return;
                }
            } while (((s32)(((s32)(s0) < (s32)(5))) != 0));
            func_001a6c90(0x6a);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
