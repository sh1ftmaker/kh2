// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00345c08 asm("D_00345c08");
extern "C" u32 D_0034ebc8 asm("D_0034ebc8");
extern "C" u32 D_00351e18 asm("D_00351e18");
extern "C" u32 D_01d49960 asm("D_01d49960");
extern "C" u32 D_01d49968 asm("D_01d49968");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_00320fa8(u32) asm("func_00320fa8");

// 0x001c81d0 func_001c81d0
u32 func_001c81d0(u32 a0) asm("func_001c81d0");
u32 func_001c81d0(u32 a0) {
    u8 frame[16];
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t6_0;
    u32 t7;
    u32 sp;
    *(u32*)(a0) = (u32)&D_00351e18;
    t4 = 0;
    t5 = 1;
    t6 = (u32)&D_01d49960;
    do {
        if ((*(u32*)(t6) != 0)) {
            if ((*(u32*)(t6) == a0)) {
                *(u32*)(t6) = 0;
            } else {
                t4 = (t4 + 1);
            }
        }
        t5 = (t5 + -1);
        t6 = (t6 + 4);
    } while (((s32)(t5) >= 0));
    if (((s32)(t4) == 0)) {
        *(u32*)(&D_01d49968) = 0;
    }
    *(u32*)(a0) = (u32)&D_00345c08;
    if ((a0 != 0xfffff390)) {
        t6_0 = (a0 + 0xc70);
        t7 = (a0 + 0xcd0);
        do {
            t7 = (t7 + -0x10);
        } while ((t6_0 != t7));
    } else {
        sp = (u32)frame;
    }
    *(u32*)(a0) = (u32)&D_0034ebc8;
    func_00320fa8(a0);
    return func_00105110(a0);
}
