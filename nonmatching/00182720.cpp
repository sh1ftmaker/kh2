// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01c60534 asm("D_01c60534");

// 0x00182720 wtarget_00182720(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00182720(u32 a0, u32 a1) asm("_Z16wtarget_00182720jjjj");
void lift_00182720(u32 a0, u32 a1) {
    u32 t5;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(((u32)&D_01c60534 + 4)) = a1;
            t5 = ((u32)&D_01c60534 + -4);
            *(u8*)((t5 + 2)) = a1;
            *(u16*)(&D_01c60534) = a1;
            *(u8*)((t5 + 1)) = a1;
            *(u8*)(((u32)&D_01c60534 + -4)) = a1;
            *(u16*)(((u32)&D_01c60534 + 2)) = a1;
        }
    }
    return;
}
