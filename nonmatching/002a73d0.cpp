// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5f4 asm("D_0035f5f4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00276b10() asm("func_00276b10");
extern "C" void func_00276a18() asm("func_00276a18");

// 0x002a73d0 func_002a73d0
u32 func_002a73d0() asm("func_002a73d0");
u32 func_002a73d0() {
    u32 s0;
    u32 s2;
    u32 s1;
    s0 = (0 * 0x368);
    s2 = 0;
    do {
        s1 = 1;
        do {
            if (((s32)(func_00139d78(s0 + *(u32*)(&D_0035f5f4))) != 0)) {
                ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f5f4))) + 0x14))))(s0 + *(u32*)(&D_0035f5f4));
            }
            s1 = (s1 + -1);
            s0 = (s0 + 0x1b4);
        } while (((s32)(s1) >= 0));
        s2 = (s2 + 1);
        s0 = (s2 * 0x368);
    } while (((s32)(((s32)(s2) < (s32)(4))) != 0));
    func_00276a18();
    return func_00276b10();
}
