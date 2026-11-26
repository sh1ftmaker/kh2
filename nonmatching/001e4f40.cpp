// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352c38 asm("D_00352c38");
extern "C" u32 D_00354bf0 asm("D_00354bf0");
extern "C" u32 D_0036e978 asm("D_0036e978");
extern "C" u32 D_0036e998 asm("D_0036e998");
extern "C" u32 D_0036e9d0 asm("D_0036e9d0");
extern "C" u32 D_0036ed60 asm("D_0036ed60");
extern "C" u32 D_0036ed78 asm("D_0036ed78");
extern "C" u32 D_0036ed98 asm("D_0036ed98");
extern "C" u32 func_001e3650(u32) asm("func_001e3650");
extern "C" u32 func_001e4f00(u32) asm("func_001e4f00");
extern "C" u32 func_001e8180(u32, u32) asm("func_001e8180");
extern "C" void func_001e3898(u32, u32) asm("func_001e3898");
extern "C" void func_002fdfc8(u32, u32, u32) asm("func_002fdfc8");

// 0x001e4f40 func_001e4f40(void*)
u32 lift_001e4f40(u32 a0, u32 a1, u32 a2) asm("_Z13func_001e4f40Pv");
u32 lift_001e4f40(u32 a0, u32 a1, u32 a2) {
    u32 a2_0;
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 a2_1;
    u32 s2_2;
    u32 v0_3;
    u32 v0_4;
    if (((s32)(a0) == 0)) {
        func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ed60, a2);
        func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x56d);
    }
    if (((s32)((a0 & 0xf)) != 0)) {
        func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ed78, a2_0);
        func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x56e);
    }
    func_001e3898(a0, a0);
    v0 = func_001e3650(a0);
    if (((s32)(*(u32*)(v0)) > 0)) {
        s0 = *(u32*)(v0);
        s1 = (v0 + 4);
        s2 = *(u32*)((v0 + 4));
        do {
            s2_2 = *(u32*)(s1);
            if (((s32)((*(u32*)(s1) & 0xf)) != 0)) {
                func_002fdfc8((u32)&D_0036e978, (u32)&D_0036ed98, a2_1);
                func_002fdfc8((u32)&D_0036e998, (u32)&D_0036e9d0, 0x58e);
            }
            v0_3 = func_001e8180(s2_2, (u32)&D_00354bf0);
            s0 = (s0 + -1);
            s1 = (s1 + 4);
            s2 = s2_2;
            v0 = v0_3;
        } while ((s0 != 0));
    }
    if (((s32)(*(u32*)(&D_00352c38)) != 0)) {
        v0_4 = func_001e4f00(a0);
        v0 = v0_4;
    }
    return v0;
}
