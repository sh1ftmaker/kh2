// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee90 asm("D_0035ee90");
extern "C" u32 D_0035ee9c asm("D_0035ee9c");
extern "C" u32 D_0035eea0 asm("D_0035eea0");
extern "C" u32 D_003726a8 asm("D_003726a8");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" u32 func_001a6d08(u32) asm("func_001a6d08");

// 0x002529a8 func_002529a8
u32 func_002529a8() asm("_ZN2Tz4ALCA10SetLayListEv");
u32 func_002529a8() {
    u32 s0;
    u32 s1;
    u32 t4;
    u32 s0_0;
    u32 s1_1;
    u32 s3;
    u32 s2;
    u32 v0_2;
    *(u32*)(&D_0035ee9c) = func_001063f0(0x18, func_00103570());
    s0 = 0x360000;
    s1 = 0;
    t4 = 0xffffffff;
    do {
        *(u16*)(((s1 << 1) + *(u32*)((s0 + -0x1164)))) = t4;
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(0xc))) != 0));
    *(u16*)(*(u32*)(&D_0035ee9c)) = 0;
    s0_0 = 1;
    s1_1 = 2;
    s3 = (u32)&D_0035ee90;
    s2 = (u32)&D_003726a8;
    do {
        v0_2 = func_001a6d08(*(s16*)((s2 + ((s1_1 - 2) * -2))));
        if (((s32)(v0_2) != 0)) {
            *(u16*)(((s0_0 << 1) + *(u32*)(&D_0035ee9c))) = *(u16*)(*(u32*)((s3 + ((s1_1 - 2) * -4))));
            *(u16*)((((s0_0 + 1) << 1) + *(u32*)(&D_0035ee9c))) = *(u16*)((*(u32*)((s3 + ((s1_1 - 2) * -4))) + 4));
            *(u16*)(((((s0_0 + 1) + 1) << 1) + *(u32*)(&D_0035ee9c))) = *(u16*)((*(u32*)((s3 + ((s1_1 - 2) * -4))) + 2));
            s0_0 = (((s0_0 + 1) + 1) + 1);
        }
        s1_1 = (s1_1 + -1);
    } while (((s32)(s1_1) >= 0));
    *(u16*)(((s0_0 << 1) + *(u32*)(&D_0035ee9c))) = 1;
    *(u16*)(&D_0035eea0) = (s0_0 + 1);
    return v0_2;
}
