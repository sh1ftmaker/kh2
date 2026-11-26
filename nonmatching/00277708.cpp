// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00257118(u32) asm("func_00257118");
extern "C" u32 func_0026b850(u32) asm("func_0026b850");
extern "C" u32 func_0027aa78() asm("func_0027aa78");
extern "C" u32 func_002813b8() asm("func_002813b8");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");

// 0x00277708 func_00277708
u32 func_00277708(u32 a0) asm("_ZN2Tz9CmAbility17SetupFormSelectorEi");
u32 func_00277708(u32 a0) {
    u32 s1;
    u32 v0;
    u32 s1_0;
    u32 s7;
    u8 t7;
    u32 s0;
    u32 s0_1;
    u32 s0_2;
    u32 s0_3;
    s1 = func_0026b850(a0);
    v0 = func_002813b8();
    *(u16*)(*(u32*)(&D_0035f230)) = v0;
    s1_0 = 0;
    s7 = 0;
    do {
        if ((s1_0 != 6)) {
            t7 = ((((s32)(v0) >> s1_0) ^ 1) & 1);
            if ((t7 == 0)) {
                s0 = func_00257118(0);
                func_00288d80(*(u32*)(&D_0035f01c), a0, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, s0, func_00257118(1));
                func_00288e08(*(u32*)(&D_0035f01c), a0, 0, 0xffffffff);
                func_00139620(func_002891b8(*(u32*)(&D_0035f01c), a0));
                s0_1 = func_002891b8(*(u32*)(&D_0035f01c), a0);
                *(u32*)((s0_1 + 0x198)) = func_00192048(*(u16*)(s1));
                func_001395f8(func_002891b8(*(u32*)(&D_0035f01c), a0));
                a0 = (a0 + 1);
                s7 = (s7 + 1);
            }
        }
        s1_0 = (s1_0 + 1);
        s1 = (s1 + 2);
    } while (((s32)(((s32)(s1_0) < (s32)(7))) != 0));
    if (((s32)(func_0027aa78()) != 0)) {
        s0_2 = func_00257118(0);
        func_00288d80(*(u32*)(&D_0035f01c), a0, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, s0_2, func_00257118(1));
        func_00288e08(*(u32*)(&D_0035f01c), a0, 0, 0xffffffff);
        func_00139620(func_002891b8(*(u32*)(&D_0035f01c), a0));
        s0_3 = func_002891b8(*(u32*)(&D_0035f01c), a0);
        *(u32*)((s0_3 + 0x198)) = func_00192048(0xb2ec);
        func_001395f8(func_002891b8(*(u32*)(&D_0035f01c), a0));
        *(u16*)(*(u32*)(&D_0035f230)) = (*(u16*)(*(u32*)(&D_0035f230)) | 0x80);
        s7 = (s7 + 1);
    }
    return s7;
}
