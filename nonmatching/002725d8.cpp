// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f014 asm("D_0035f014");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_00373a78 asm("D_00373a78");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257158(u32, u32, u32) asm("func_00257158");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00272938() asm("func_00272938");
extern "C" u32 func_00272a00() asm("func_00272a00");
extern "C" u32 func_00272a70() asm("func_00272a70");
extern "C" u32 func_00272b60(u32) asm("func_00272b60");
extern "C" u32 func_00281f18(u32) asm("func_00281f18");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00281f30(u32) asm("func_00281f30");
extern "C" u32 func_00282d58(u32) asm("func_00282d58");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");

// 0x002725d8 func_002725d8
u32 func_002725d8() asm("_ZN2Tz8CmCustom20UpdateIndiCustomListEv");
u32 func_002725d8() {
    u32 s1;
    u32 s3;
    u32 s2;
    u32 v0;
    u32 s3_0;
    u32 s6;
    u32 s5;
    u32 s5_1;
    u32 s7;
    u32 v0_2;
    u32 s0;
    u32 s2_3;
    u32 s3_4;
    u32 s4;
    u32 t7;
    u32 v0_5;
    u32 s0_6;
    u32 s1_7;
    u32 s2_8;
    u32 v0_10;
    s1 = (func_00257770() + 0x60a4);
    func_0028be78(*(u32*)(&D_0035f04c), func_0028b038(*(u32*)(&D_0035f01c)));
    s3 = func_00257140(0);
    func_002892f8(*(u32*)(&D_0035f01c));
    s2 = 0;
    while (((s32)(((s32)(s2) < (s32)(func_002892f8(*(u32*)(&D_0035f01c))))) != 0)) {
        func_00138c10(s1, s3);
        s2 = (s2 + 1);
        *(u32*)((s1 + 0x198)) = 0;
        s1 = (s1 + 0x1b4);
    }
    v0 = func_00272b60(func_002570a0(0x1a));
    switch (v0) {
    case 0:
        s3_0 = func_00257770();
        s6 = func_0028b038(*(u32*)(&D_0035f01c));
        if (((s32)(s6) == 0)) {
            s5 = func_00281f18(*(u32*)(&D_0035f014));
            func_00138c10(s3_0 + 0x60a4, func_00257140(0));
            *(u32*)(((s3_0 + 0x60a4) + 0x198)) = func_00282d58(*(u32*)(&D_0035f014));
            s5_1 = (s5 + 1);
            s7 = 1;
        } else {
            s5_1 = func_00281f18(*(u32*)(&D_0035f014));
            s6 = (s6 + -1);
            s7 = 0;
        }
        v0_2 = func_00281f30(*(u32*)(&D_0035f014));
        if (((s32)(s5_1) > 0)) {
            if (((s32)(((s32)(s7) < (s32)((((s32)(s5_1) < (s32)(9)) ? s5_1 : 8)))) != 0)) {
                s0 = (v0_2 + 0x10);
                s2_3 = 0;
                s3_4 = (((s7 * 0x1b4) + s3_0) + 0x60a4);
                s4 = 0;
                t7 = ((s32)(0) < (s32)(s6));
                do {
                    s2_3 = (s2_3 + 1);
                    if (((s32)(t7) == 0)) {
                        s7 = (s7 + 1);
                        v0_5 = func_00138c10(s3_4, func_00257140(func_00257158(*(u16*)((s4 + func_00281f20(*(u32*)(&D_0035f014)))), 1, 0)));
                        *(u32*)((s3_4 + 0x198)) = s0;
                        s3_4 = (s3_4 + 0x1b4);
                        v0_2 = v0_5;
                    }
                    s0 = (s0 + 0x50);
                    t7 = ((s32)(s2_3) < (s32)(s5_1));
                    s4 = (s4 + 6);
                    if (((s32)(t7) == 0)) {
                        break;
                    }
                    t7 = ((s32)(s7) < (s32)((((s32)(s5_1) < (s32)(9)) ? s5_1 : 8)));
                    t7 = ((s32)(s2_3) < (s32)(s6));
                } while (((s32)(t7) != 0));
            }
        }
        return v0_2;
    case 1:
        s0_6 = (func_00257770() + 0x60a4);
        s1_7 = (u32)&D_00373a78;
        s2_8 = 1;
        do {
            s2_8 = (s2_8 + -1);
            func_00138c10(s0_6, func_00257140(0));
            v0_10 = func_00192048(*(u16*)(s1_7));
            s1_7 = (s1_7 + 2);
            *(u32*)((s0_6 + 0x198)) = v0_10;
            s0_6 = (s0_6 + 0x1b4);
        } while (((s32)(s2_8) >= 0));
        return v0_10;
    case 2:
        return func_00272938();
    case 3:
        return func_00272a00();
    case 4:
        return func_00272a70();
    default:
        return v0;
    }
}
