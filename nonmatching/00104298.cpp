// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b930 asm("D_0032b930");
extern "C" u32 D_0032ba48 asm("D_0032ba48");

// 0x00104298 wtarget_00104298(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00104298(u32 a0, u32 a1) asm("_Z16wtarget_00104298jjjj");
void lift_00104298(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0032ba48) = (u32)&D_0032b930;
            *(u32*)(((u32)&D_0032ba48 + 0x14)) = a0;
            *(u32*)(((u32)&D_0032ba48 + 0x18)) = 0x29810;
            *(u32*)(((u32)&D_0032ba48 + 0x28)) = 0x4000;
            *(u8*)(((u32)&D_0032ba48 + 8)) = 0x47;
            *(u32*)(((u32)&D_0032ba48 + 4)) = 0;
            *(u32*)(((u32)&D_0032ba48 + 0x1c)) = 0;
            *(u32*)(((u32)&D_0032ba48 + 0x20)) = 0;
            *(u32*)(((u32)&D_0032ba48 + 0x24)) = 0;
        }
    }
    return;
}
