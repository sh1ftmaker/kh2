// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_00373278 asm("D_00373278");
extern "C" u32 D_0037327c asm("D_0037327c");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00262af8() asm("func_00262af8");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00281f30(u32) asm("func_00281f30");
extern "C" u32 func_00285d58(u32) asm("func_00285d58");
extern "C" u32 func_00285e30(u32) asm("func_00285e30");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_002827f0(u32, u32, u32) asm("func_002827f0");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");

// 0x00262820 func_00262820
u32 func_00262820() asm("_ZN2Tz6CmItem14UpdateListMessEv");
u32 func_00262820() {
    u8 frame[16];
    u32 s7;
    u32 s5;
    u32 v0;
    u32 s1;
    u32 s3;
    u32 s4;
    u32 sp;
    u32 s0;
    u32 s4_0;
    u32 s0_1;
    u32 s0_2;
    u32 s1_3;
    s7 = func_00257770();
    s5 = func_00281f18(func_00257130());
    v0 = func_002892f8(*(u32*)(&D_0035f01c));
    if (((s32)(v0) > 0)) {
        s1 = 0;
        s3 = 0x360000;
        s4 = 0x360000;
        do {
            *(u32*)((func_002891b8(*(u32*)(&D_0035f01c), s1) + 0x198)) = 0;
            func_00138c10((s7 + (s1 * 0x198)) + 0x87d0, *(u32*)((s3 + -0x1094)));
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(v0))) != 0));
    } else {
        sp = (u32)frame;
    }
    if (((s32)(s5) == 0)) {
        func_00138c10(func_002891b8(*(u32*)(&D_0035f01c), 0), 0x12e);
        s0 = func_002891b8(*(u32*)(&D_0035f01c), 0);
        *(u32*)((s0 + 0x198)) = func_00192048(0x845a);
        *(u32*)((func_002891b8(*(u32*)(&D_0035f01c), 0) + 0x1b0)) = 2;
    } else {
        s4_0 = func_0028b038(*(u32*)(&D_0035f01c));
        func_002827f0(func_00257130(), s4_0, 0x12);
        s0_1 = func_00281f30(func_00257130());
        s0_2 = func_00281f20(func_00257130());
        func_0028be78(*(u32*)(&D_0035f04c), (s32)((s4_0 + (s4_0 >> 0x1f))) >> 1);
        s1_3 = 0;
        do {
            if (((s32)((s1_3 + s4_0)) >= (s32)(s5))) {
                return func_00262af8();
            }
            *(u32*)((func_002891b8(*(u32*)(&D_0035f01c), s1_3) + 0x198)) = ((s0_1 + (s1_3 * 0x50)) + 0x10);
            if ((func_00285d58(*(u16*)(((s4_0 * 6) + s0_2))) != 0)) {
                func_00138c10((s7 + (s1_3 * 0x198)) + 0x87d0, func_00285e30(*(u16*)(((s4_0 * 6) + s0_2))) ? *(u32*)(&D_0037327c) : *(u32*)(&D_00373278));
            }
            s1_3 = (s1_3 + 1);
        } while (((s32)(((s32)(s1_3) < (s32)(0x12))) != 0));
    }
    return func_00262af8();
}
