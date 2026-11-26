// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f2b4 asm("D_0035f2b4");
extern "C" u32 D_0035f2b8 asm("D_0035f2b8");
extern "C" u32 D_00374250 asm("D_00374250");
extern "C" u32 D_003742c8 asm("D_003742c8");
extern "C" u32 D_00374318 asm("D_00374318");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192c40(u32, u32) asm("func_00192c40");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00192cc0(u32, u32, u32, u32) asm("func_00192cc0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x002833f8 func_002833f8
u32 func_002833f8() asm("_ZN2Tz10CmTutorial10CreateListEv");
u32 func_002833f8() {
    u8 frame[16];
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    u32 t5;
    u32 t6;
    u32 s0_2;
    u32 v0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2b8) + 0x354)) == 0)) {
        *(u32*)((u32)frame) = 0;
        func_0028d980(*(u32*)(&D_0035f2b8) + 0x354, 0x7546, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x12, 0x13, 0xffffffff);
        *(u32*)((*(u32*)(&D_0035f2b8) + 0x4ec)) = (*(u32*)(&D_0035f2b4) + 0xf);
        func_00139620(*(u32*)(&D_0035f2b8) + 0x354);
        func_001395f8(*(u32*)(&D_0035f2b8) + 0x354);
        *(u32*)((*(u32*)(&D_0035f2b8) + 0x504)) = 2;
    }
    s0 = *(u32*)(&D_0035f2b4);
    s0_0 = (s0 + 0xf);
    s0_1 = (s0_0 + func_00192c40(func_00192048(0xcbd8), s0_0));
    func_00192cc0(s0_0 + func_00192c40(func_00192048(0xcbd8), s0_0), (u32)&D_00374250, *(s8*)((*(u32*)(&D_0035f2b4) + 0xe)) + 1, *(s8*)((*(u32*)(&D_0035f2b4) + 0xd)));
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2b8) + 0x1a0)) == 0)) {
        *(u32*)((u32)frame) = 0;
        func_0028d980(*(u32*)(&D_0035f2b8) + 0x1a0, 0x7546, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xf, 0x10, 0xffffffff);
        func_00139620(*(u32*)(&D_0035f2b8) + 0x1a0);
        func_001395f8(*(u32*)(&D_0035f2b8) + 0x1a0);
        *(u32*)((*(u32*)(&D_0035f2b8) + 0x350)) = 2;
    }
    t5 = (*(s8*)(((*(u32*)(&D_0035f2b4) + *(s8*)((*(u32*)(&D_0035f2b4) + 0xe))) + 4)) << 3);
    t6 = (*(u8*)(((t5 + (u32)&D_003742c8) + 6)) << 1);
    s0_2 = (*(u32*)(&D_0035f2b8) + 0x1a0);
    v0 = func_00192048(*(u16*)((t6 + (u32)&D_00374318)));
    *(u32*)((s0_2 + 0x198)) = v0;
    return v0;
}
