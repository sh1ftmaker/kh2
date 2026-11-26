// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 func_00189200(u32, u32) asm("func_00189200");
extern "C" u32 func_001917c0() asm("func_001917c0");
extern "C" u32 func_001d62b0(u32, u32) asm("func_001d62b0");
extern "C" u32 func_001d63a8(u32) asm("func_001d63a8");
extern "C" void func_001a32c8(u32, u32) asm("func_001a32c8");

// 0x001d61b8 func_001d61b8
u32 func_001d61b8(u32 a0, u32 a1) asm("_ZN2YS9ANTI_FORM9CheckFormEPNS_4SORAEi");
u32 func_001d61b8(u32 a0, u32 a1) {
    u32 v0;
    u32 t4;
    u32 t7;
    u32 t4_0;
    v0 = func_00189200((u32)&D_0032e020, 6);
    if ((a1 == 5)) {
        *(u32*)((v0 + 4)) = (((s32)((*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0xa4)))) < (s32)(0)) ? 0 : (*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0xa4))));
        t4_0 = 5;
    } else {
        if (((s32)(func_001d62b0(a0, v0)) != 0)) {
            if (((s32)(func_001917c0()) != 0)) {
                if (((s32)(func_001d63a8(a0)) != 0)) {
                    func_001a32c8(0x1d, 1);
                    t4 = 5;
                    t7 = (((s32)((*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0xa4)))) < (s32)(0)) ? 0 : (*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0xa4))));
                } else {
                    t4 = 6;
                    t7 = (((s32)((*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0x90)))) < (s32)(0)) ? 0 : (*(u32*)((v0 + 4)) - *(u32*)((*(u32*)(&D_00352130) + 0x90))));
                }
                *(u32*)((v0 + 4)) = t7;
                a1 = t4;
            }
        }
        t4_0 = a1;
    }
    return t4_0;
}
