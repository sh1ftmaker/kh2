// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01e2be18 asm("D_01e2be18");
extern "C" u32 func_00105110(u32) asm("func_00105110");

// 0x002cb678 func_002cb678
u32 func_002cb678(u32 a0) asm("func_002cb678");
u32 func_002cb678(u32 a0) {
    u8 frame[16];
    u32 v0;
    u32 t6;
    u32 t5;
    u32 sp;
    u32 t5_0;
    u32 sp_1;
    u32 t5_2;
    u32 t6_3;
    v0 = func_00105110(*(u32*)((a0 + 0x80)));
    if ((a0 == *(u32*)(&D_01e2be18))) {
        *(u32*)(&D_01e2be18) = *(u32*)((a0 + 0x94));
        sp_1 = (u32)frame;
        t5_2 = 0;
    } else {
        t6 = *(u32*)((*(u32*)(&D_01e2be18) + 0x94));
        if ((t6 != a0)) {
            do {
                t5 = t6;
                t6 = *(u32*)((t6 + 0x94));
            } while ((t6 != a0));
            t5_0 = t5;
        } else {
            sp = (u32)frame;
            t5_0 = *(u32*)(&D_01e2be18);
        }
        *(u32*)((t5_0 + 0x94)) = *(u32*)((a0 + 0x94));
        sp_1 = sp;
        t5_2 = t5_0;
    }
    if ((a0 == *(u32*)(((u32)&D_01e2be18 + 4)))) {
        t6_3 = *(u32*)(((u32)&D_01e2be18 + 4));
        *(u32*)(((u32)&D_01e2be18 + 4)) = t5_2;
    }
    *(u32*)((a0 + 0x94)) = 0;
    return v0;
}
