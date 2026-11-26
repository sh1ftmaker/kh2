// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00373de8 asm("D_00373de8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192cc0(u32, u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_0027b248(u32) asm("func_0027b248");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x0027b0f8 func_0027b0f8
u32 func_0027b0f8() asm("_ZN2Tz9CmAbility11CreateGaugeEv");
u32 func_0027b0f8() {
    u32 v0;
    u32 s5;
    u32 loc_0;
    u32 s1;
    u32 s0;
    u32 s0_0;
    v0 = func_00257770();
    s5 = (v0 + 0xb350);
    if (((s32)(func_00139d78(s5)) == 0)) {
        loc_0 = 0;
        s1 = *(u32*)(&D_0035f3d4);
        func_0028d980(s5, *(u32*)(&D_0035f3d4), *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x110, 0x111, 0xffffffff);
        *(u32*)((s5 + 0x198)) = func_00192cc0(*(u32*)(&D_0035f230) + 0x28c, (u32)&D_00373de8, *(s16*)((*(u32*)(&D_0035f230) + 4)), *(s16*)((*(u32*)(&D_0035f230) + 2)));
        *(u32*)((s5 + 0x1b0)) = 1;
        s0 = (v0 + 0xb504);
        func_0028d8c0(s0, s1 + 1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x10d, 0xffffffff, 0x64);
        s0_0 = (v0 + 0xb6b8);
        func_0028dcc0(s0, s5);
        func_0028d8c0(s0_0, s1 + 2, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x10e, 0xffffffff, 0);
        func_0028dcc0(s0_0, s5);
    }
    return func_0027b248(1);
}
