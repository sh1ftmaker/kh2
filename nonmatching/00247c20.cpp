// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed34 asm("D_0035ed34");
extern "C" u32 D_0035ed44 asm("D_0035ed44");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00243230(u32, u32) asm("func_00243230");
extern "C" u32 func_00246840() asm("func_00246840");
extern "C" u32 func_002469a0(u32) asm("func_002469a0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00247c20 func_00247c20
u32 func_00247c20() asm("func_00247c20");
u32 func_00247c20() {
    u32 v0;
    u32 v0_0;
    u8 t7;
    u32 s0;
    u32 s1;
    v0 = func_002891e8(*(u32*)(&D_0035ed20));
    v0_0 = func_002469a0(v0);
    t7 = ((((s32)(*(s8*)(&D_0035ed44)) >> v0_0) ^ 1) & 1);
    if (((s32)(t7) == 0)) {
        s0 = (v0 * 0x198);
        if (((s32)(func_00139d78(*(u32*)(&D_0035ed34) + s0)) != 0)) {
            if ((*(u32*)(((*(u32*)(&D_0035ed34) + s0) + 0x184)) != 0x52)) {
                func_00138c10(*(u32*)(&D_0035ed34) + s0, 0x52);
            }
        }
        s1 = (func_00246840() ? (v0_0 + 4) : v0_0);
        return func_00243230(4, func_00246840() ? (v0_0 + 4) : v0_0);
    } else {
        return v0_0;
    }
}
