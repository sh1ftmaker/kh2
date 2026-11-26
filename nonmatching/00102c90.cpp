// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b930 asm("D_0032b930");
extern "C" u32 D_0032b968 asm("D_0032b968");

// 0x00102c90 wtarget_00102c90(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00102c90(u32 a0, u32 a1) asm("_Z16wtarget_00102c90jjjj");
void lift_00102c90(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0032b968) = (u32)&D_0032b930;
            *(u32*)(((u32)&D_0032b968 + 0x14)) = a0;
            *(u32*)(((u32)&D_0032b968 + 0x18)) = 0x1fbd0;
            *(u32*)(((u32)&D_0032b968 + 0x28)) = 0x3800;
            *(u8*)(((u32)&D_0032b968 + 8)) = 0x46;
            *(u32*)(((u32)&D_0032b968 + 4)) = 0;
            *(u32*)(((u32)&D_0032b968 + 0x1c)) = 0;
            *(u32*)(((u32)&D_0032b968 + 0x20)) = 0;
            *(u32*)(((u32)&D_0032b968 + 0x24)) = 0;
        }
    }
    return;
}
