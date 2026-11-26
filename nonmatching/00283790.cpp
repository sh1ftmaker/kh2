// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S8_6_u8 { u8 _p[6]; u8 m; u8 _q[1]; };
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_0035f2b8 asm("D_0035f2b8");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");

// 0x00283790 func_00283790
u32 func_00283790() asm("_ZN2Tz10CmTutorial9CreateGraEv");
u32 func_00283790() {
    u32 s0;
    u32 s1;
    u32 s3;
    u32 v0;
    u32 s0_0;
    u32 s1_1;
    u32 v0_2;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2b8) + 0x508)) == 0)) {
        s0 = (*(u32*)(&D_0035f2b8) + 0x508);
        s1 = *(u32*)(&D_0035f2b8);
        func_001386e0(*(u32*)(&D_0035f2b8) + 0x508, 0x7546, func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), 0), *(u32*)(&D_0035f2b8), 1, 0);
        *(u32*)((s0 + 0x188)) = 2;
        *(u8*)((s0 + 0x195)) = 1;
        *(u32*)(((s1 + 0x520) + 0xb8)) = (*(u32*)(((s1 + 0x520) + 0xb8)) | 8);
    }
    s3 = ((s32)(((s32)((*(s8*)((*(u32*)(&D_0035f2b4) + 0xe)) + 1)) < (s32)(*(s8*)((*(u32*)(&D_0035f2b4) + 0xd))))) != 0) ? ((u32)((((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 4))].m ^ ((S8_6_u8*)&D_003742c8)[*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 5))].m)) < (u32)(1)) : 0;
    v0 = func_00139d78(*(u32*)(&D_0035f2b8) + 0x6a0);
    if (((s32)(v0) == 0)) {
        if (((s32)(s3) != 0)) {
            s0_0 = (*(u32*)(&D_0035f2b8) + 0x6a0);
            s1_1 = *(u32*)(&D_0035f2b8);
            v0_2 = func_001386e0(*(u32*)(&D_0035f2b8) + 0x6a0, 0x7546, func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), 0), *(u32*)(&D_0035f2b8), 4, 0);
            *(u32*)((s0_0 + 0x188)) = 5;
            *(u8*)((s0_0 + 0x195)) = 1;
            *(u32*)(((s1_1 + 0x6b8) + 0xb8)) = (*(u32*)(((s1_1 + 0x6b8) + 0xb8)) | 8);
            v0 = v0_2;
        }
    }
    return v0;
}
