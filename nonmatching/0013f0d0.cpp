// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00348704 asm("D_00348704");
extern "C" u32 func_0013f048() asm("func_0013f048");
extern "C" u32 func_0013f288() asm("func_0013f288");
extern "C" u32 func_0013f3d0() asm("func_0013f3d0");
extern "C" u32 func_0013f4d8() asm("func_0013f4d8");
extern "C" u32 func_0015d690() asm("func_0015d690");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_0013f030() asm("func_0013f030");

// 0x0013f0d0 func_0013f0d0
u32 func_0013f0d0() asm("func_0013f0d0");
u32 func_0013f0d0() {
    u32 v0;
    v0 = func_001991a8(0, 0);
    if (((s32)(v0) != 0)) {
        func_0013f030();
        return func_0013f048();
    } else {
        if (((*(u32*)(&D_00348704) & 0x3fffffff) != 1)) {
            if (((s32)((*(u32*)(&D_00348704) & 0x3fffffff)) != 0)) {
                if (((*(u32*)(&D_00348704) & 0x3fffffff) != 2)) {
                    if (((*(u32*)(&D_00348704) & 0x3fffffff) != 3)) {
                        return v0;
                    } else {
                        return func_0013f4d8();
                    }
                } else {
                    return func_0013f3d0();
                }
            } else {
                return func_0015d690();
            }
        } else {
            return func_0013f288();
        }
    }
}
