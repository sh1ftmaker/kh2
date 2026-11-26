// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b930 asm("D_0032b930");
extern "C" u32 D_0032b9e8 asm("D_0032b9e8");
extern "C" u32 D_0032ba3c asm("D_0032ba3c");

// 0x00103ec0 wtarget_00103ec0(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00103ec0(u32 a0, u32 a1) asm("_Z16wtarget_00103ec0jjjj");
void lift_00103ec0(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0032b9e8) = (u32)&D_0032b930;
            *(u32*)(((u32)&D_0032b9e8 + 4)) = 0;
            *(u8*)(((u32)&D_0032b9e8 + 8)) = 0x4d;
            *(u32*)(((u32)&D_0032b9e8 + 0x14)) = 2;
            *(u32*)(((u32)&D_0032b9e8 + 0x18)) = 0x222e0;
            *(u32*)(((u32)&D_0032b9e8 + 0x1c)) = 0;
            *(u32*)(((u32)&D_0032b9e8 + 0x20)) = 0;
            *(u32*)(((u32)&D_0032b9e8 + 0x24)) = 0;
            *(u32*)(((u32)&D_0032b9e8 + 0x28)) = 0x1000;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u16*)(&D_0032ba3c) = 0;
                *(u16*)(((u32)&D_0032ba3c + 2)) = 0;
                *(u16*)(((u32)&D_0032ba3c + 4)) = 0;
            }
        }
    }
    return;
}
