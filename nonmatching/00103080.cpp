// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b930 asm("D_0032b930");
extern "C" u32 D_0032b9a0 asm("D_0032b9a0");

// 0x00103080 wtarget_00103080(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00103080(u32 a0, u32 a1) asm("_Z16wtarget_00103080jjjj");
void lift_00103080(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0032b9a0) = (u32)&D_0032b930;
            *(u32*)(((u32)&D_0032b9a0 + 0x14)) = a0;
            *(u32*)(((u32)&D_0032b9a0 + 0x18)) = 0x1fbd0;
            *(u32*)(((u32)&D_0032b9a0 + 0x28)) = 0x1000;
            *(u8*)(((u32)&D_0032b9a0 + 8)) = 0x54;
            *(u32*)(((u32)&D_0032b9a0 + 4)) = 0;
            *(u32*)(((u32)&D_0032b9a0 + 0x1c)) = 0;
            *(u32*)(((u32)&D_0032b9a0 + 0x20)) = 0;
            *(u32*)(((u32)&D_0032b9a0 + 0x24)) = 0;
        }
    }
    return;
}
