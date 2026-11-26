// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034dca0 asm("D_0034dca0");
extern "C" u32 func_0016fb00(u32) asm("func_0016fb00");

// 0x001700e8 func_001700e8
void func_001700e8(u32 a0) asm("func_001700e8");
void func_001700e8(u32 a0) {
    u8 frame[16];
    u32 t7;
    u32 t6;
    u32 t7_0;
    u32 sp;
    u32 sp_1;
    u32 t5;
    u32 t6_2;
    t7 = *(u32*)(&D_0034dca0);
    if ((a0 == t7)) {
        *(u32*)(&D_0034dca0) = *(u32*)((a0 + 0x3c));
        sp_1 = (u32)frame;
        t5 = 0;
    } else {
        t6 = *(u32*)((t7 + 0x3c));
        if ((t6 != a0)) {
            do {
                t7_0 = *(u32*)((t6 + 0x3c));
                t7 = t6;
                t6 = t7_0;
            } while ((t7_0 != a0));
        } else {
            sp = (u32)frame;
        }
        *(u32*)((t7 + 0x3c)) = *(u32*)((a0 + 0x3c));
        sp_1 = sp;
        t5 = t7;
    }
    t6_2 = *(u32*)(((u32)&D_0034dca0 + 4));
    if ((a0 == t6_2)) {
        *(u32*)(((u32)&D_0034dca0 + 4)) = t5;
    }
    *(u32*)((a0 + 0x3c)) = 0;
    func_0016fb00(a0);
    return;
}
