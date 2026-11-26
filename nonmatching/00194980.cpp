// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c61af4 asm("D_01c61af4");
extern "C" u32 func_001947c0(u32, u32) asm("func_001947c0");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");

// 0x00194980 ctarget0_00194980()
void lift_00194980() asm("_Z17ctarget0_00194980v");
void lift_00194980() {
    u32 s0;
    u32 s0_0;
    if (((s32)(*(u16*)((func_001947c0(0xffffffff, 0xffffffff) + 0x32))) != 0)) {
        if (((s32)(func_001a3570(*(u16*)((func_001947c0(0xffffffff, 0xffffffff) + 0x32)))) <= 0)) {
            s0 = 0;
        } else {
            s0 = 1;
        }
        s0_0 = s0;
    } else {
        s0_0 = 0;
    }
    *(u8*)(&D_01c61af4) = s0_0;
    return;
}
