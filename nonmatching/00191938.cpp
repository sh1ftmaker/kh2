// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c61958 asm("D_01c61958");
extern "C" void func_001c1130(u32) asm("func_001c1130");
extern "C" void func_001c11a8(u32) asm("func_001c11a8");

// 0x00191938 wtarget_00191938(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00191938(u32 a0) asm("_Z16wtarget_00191938jjjj");
void lift_00191938(u32 a0) {
    if (((s32)(a0) != 0)) {
        if (((s32)(a0) >= 0)) {
            if (((s32)(((s32)(a0) < (s32)(3))) != 0)) {
                func_001c1130(6);
            }
        }
    } else {
        func_001c11a8(6);
    }
    *(u32*)(&D_01c61958) = a0;
    return;
}
