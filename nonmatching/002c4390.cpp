// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361c0c asm("D_00361c0c");
extern "C" u32 D_01e2bd10 asm("D_01e2bd10");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa58(u32) asm("func_0023aa58");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_0028b160(u32, u32) asm("func_0028b160");
extern "C" u32 func_002c2610(u32, u32) asm("func_002c2610");
extern "C" void func_00138cb8(u32, u32, u32) asm("func_00138cb8");
extern "C" void func_001aa728(u32, u32, u32, u32, u32, u32, u32) asm("func_001aa728");

// 0x002c4390 func_002c4390
void func_002c4390(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2dk10mitem_drawEiijjPNS_13SpriteMessageE");
void func_002c4390(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u8 frame[16];
    u32 s4;
    u32 s0;
    u32 s0_0;
    u32 s1;
    u32 s0_1;
    u32 s1_2;
    u32 s0_3;
    u32 s0_4;
    u32 s1_5;
    u32 s0_6;
    u32 s0_7;
    if (((s32)(a0) != 0)) {
        func_00138cb8(*(u32*)((a4 + 0x18c)), (u32)frame, (u32)frame + 4);
        s4 = (a4 + 0x18);
        func_00138cb8(a4, (u32)frame + 8, (u32)frame + 0xc);
        s0 = (*(u32*)(((u32)frame + 8)) + *(u32*)((u32)frame));
        *(u32*)(((u32)frame + 8)) = (s0 + func_0023aa18(s4));
        s0_0 = (s0 + func_0023aa18(s4));
        s1 = func_0028b160(*(u32*)(&D_00361c0c), a4);
        s0_1 = *(u32*)(((u32)frame + 0xc));
        s1_2 = (s1 * func_0023aa98(s4));
        s0_3 = (s0_1 + s1_2);
        *(u32*)(((u32)frame + 0xc)) = (s0_3 + (func_0023aa38(s4) + *(u32*)(((u32)frame + 4))));
        s0_4 = (s0_3 + (func_0023aa38(s4) + *(u32*)(((u32)frame + 4))));
        s1_5 = func_0023aa58(s4);
        s0_6 = func_0028b160(*(u32*)(&D_00361c0c), a4);
        s0_7 = (s0_6 + func_0028b040(*(u32*)(&D_00361c0c)));
        func_001aa728(0, func_002c2610(*(u32*)(&D_01e2bd10), s0_6 + func_0028b040(*(u32*)(&D_00361c0c))), *(u32*)(((u32)frame + 8)), *(u32*)(((u32)frame + 0xc)), a2, s1_5, 0);
    }
    return;
}
