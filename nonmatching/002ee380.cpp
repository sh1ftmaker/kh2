// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003637e0 asm("D_003637e0");
extern "C" u32 D_00363808 asm("D_00363808");
extern "C" u32 D_01e2c080 asm("D_01e2c080");

// 0x002ee380 func_002ee380
void func_002ee380(u32 a0) asm("func_002ee380");
void func_002ee380(u32 a0) {
    u32 t6;
    u32 t5;
    u32 t5_0;
    u32 t5_1;
    u32 t6_2;
    *(u32*)(a0) = (u32)&D_00363808;
    if ((a0 == *(u32*)(&D_01e2c080))) {
        *(u32*)(&D_01e2c080) = *(u32*)((a0 + 0x20));
        t5_1 = 0;
    } else {
        t6 = *(u32*)((*(u32*)(&D_01e2c080) + 0x20));
        if ((t6 != a0)) {
            do {
                t5 = t6;
                t6 = *(u32*)((t6 + 0x20));
            } while ((t6 != a0));
            t5_0 = t5;
        } else {
            t5_0 = *(u32*)(&D_01e2c080);
        }
        *(u32*)((t5_0 + 0x20)) = *(u32*)((a0 + 0x20));
        t5_1 = t5_0;
    }
    if ((a0 == *(u32*)(((u32)&D_01e2c080 + 4)))) {
        t6_2 = *(u32*)(((u32)&D_01e2c080 + 4));
        *(u32*)(((u32)&D_01e2c080 + 4)) = t5_1;
    }
    *(u32*)(a0) = (u32)&D_003637e0;
    *(u32*)((a0 + 0x20)) = 0;
    return;
}
