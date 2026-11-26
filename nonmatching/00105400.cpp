// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae4 asm("D_0032bae4");
extern "C" u32 D_0032baf4 asm("D_0032baf4");
extern "C" u32 D_0032bb04 asm("D_0032bb04");
extern "C" u32 D_0032bb14 asm("D_0032bb14");
extern "C" u32 D_003a7b0c asm("D_003a7b0c");

// 0x00105400 wtarget_00105400(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_00105400(u32 a0, u32 a1) asm("_Z16wtarget_00105400jjjj");
void lift_00105400(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(&D_0032bae4) = a1;
            *(u16*)(((u32)&D_0032bae4 + 4)) = a1;
            *(u8*)(((u32)&D_0032bae4 + -4)) = a1;
            *(u8*)((((u32)&D_0032bae4 + -4) + 2)) = a1;
            *(u8*)((((u32)&D_0032bae4 + -4) + 1)) = a1;
            *(u16*)(((u32)&D_0032bae4 + 2)) = a1;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(u16*)(&D_0032baf4) = a1;
                *(u16*)(((u32)&D_0032baf4 + 4)) = a1;
                *(u8*)(((u32)&D_0032baf4 + -4)) = a1;
                *(u8*)((((u32)&D_0032baf4 + -4) + 2)) = a1;
                *(u8*)((((u32)&D_0032baf4 + -4) + 1)) = a1;
                *(u16*)(((u32)&D_0032baf4 + 2)) = a1;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(&D_0032bb04) = a1;
            *(u16*)(((u32)&D_0032bb04 + 4)) = a1;
            *(u8*)(((u32)&D_0032bb04 + -4)) = a1;
            *(u8*)((((u32)&D_0032bb04 + -4) + 2)) = a1;
            *(u8*)((((u32)&D_0032bb04 + -4) + 1)) = a1;
            *(u16*)(((u32)&D_0032bb04 + 2)) = a1;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(&D_0032bb14) = a1;
            *(u16*)(((u32)&D_0032bb14 + 4)) = a1;
            *(u8*)(((u32)&D_0032bb14 + -4)) = a1;
            *(u8*)((((u32)&D_0032bb14 + -4) + 2)) = a1;
            *(u8*)((((u32)&D_0032bb14 + -4) + 1)) = a1;
            *(u16*)(((u32)&D_0032bb14 + 2)) = a1;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u16*)(&D_003a7b0c) = a1;
            *(u16*)(((u32)&D_003a7b0c + 4)) = a1;
            *(u8*)(((u32)&D_003a7b0c + -4)) = a1;
            *(u8*)((((u32)&D_003a7b0c + -4) + 2)) = a1;
            *(u8*)((((u32)&D_003a7b0c + -4) + 1)) = a1;
            *(u16*)(((u32)&D_003a7b0c + 2)) = a1;
        }
    }
    return;
}
