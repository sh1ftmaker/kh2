// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d49574 asm("D_01d49574");

// 0x001c4080 wtarget_001c4080(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_001c4080(u32 a0, u32 a1) asm("_Z16wtarget_001c4080jjjj");
void lift_001c4080(u32 a0, u32 a1) {
    u32 t5;
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(((u32)&D_01d49574 + 4)) = a1;
            t5 = ((u32)&D_01d49574 + -4);
            *(u8*)((t5 + 2)) = a1;
            *(u16*)(&D_01d49574) = a1;
            *(u8*)((t5 + 1)) = a1;
            *(u8*)(((u32)&D_01d49574 + -4)) = a1;
            *(u16*)(((u32)&D_01d49574 + 2)) = a1;
        }
    }
    return;
}
