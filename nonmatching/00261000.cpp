// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f020 asm("D_0035f020");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00192048(u32, u32) asm("func_00192048");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00257130() asm("func_00257130");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00263688(u32) asm("func_00263688");
extern "C" u32 func_002636b0(u32) asm("func_002636b0");
extern "C" u32 func_0027ed48(u32) asm("func_0027ed48");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_00281140(u32, u32) asm("func_00281140");
extern "C" u32 func_00281f20(u32) asm("func_00281f20");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0027dee8(u32, u32, u32) asm("func_0027dee8");
extern "C" void func_00281f30(u32) asm("func_00281f30");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028b1e8(u32, u32) asm("func_0028b1e8");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00261000 func_00261000
u32 func_00261000() asm("_ZN2Tz6CmItem17SetupItemUsePartyEv");
u32 func_00261000() {
    u32 loc_0;
    u32 v0;
    u32 s1;
    u32 t7;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 s1_1;
    u32 a1_2;
    u32 v0_3;
    u32 s2;
    u32 s2_4;
    u32 s1_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 s0;
    v0 = func_00257770();
    s1 = 0;
    t7 = (0 << 3);
    do {
        u32 cse0 = (u32)&loc_0 + 0x10;
        t4 = cse0;
        t5 = 0x123;
        t6 = 3;
        t7_0 = (t7 + cse0);
        do {
            *(u16*)((t7_0 + ((t6 - 3) * -2))) = t5;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        s1 = (s1 + 1);
        t7 = (s1 << 3);
    } while (((s32)(t7) != 0));
    s1_1 = *(u32*)(&D_0035f3d4);
    func_0028d8c0(v0 + 0x198, *(u32*)(&D_0035f3d4) + -1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x12b, 0x12c, 0);
    loc_0 = 0;
    func_0028d980(v0 + 0x814, s1_1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x124, 0xffffffff, 0xffffffff);
    func_00281f30(func_00257130());
    func_00139620(v0 + 0x814);
    func_0028dcc0(v0 + 0x814, v0 + 0x198);
    *(u32*)(((v0 + 0x814) + 0x198)) = func_00192048(0xb943, a1_2);
    v0_3 = func_002570a0(0xa);
    if (((s32)(func_00263688(v0_3)) == 0)) {
        s2 = ((s32)(func_002636b0(v0_3)) != 0) ? 1 : func_00281100(*(u32*)(&D_0035f010));
        s2_4 = s2;
    } else {
        s2_4 = 1;
    }
    if (((s32)(s2_4) > 0)) {
        s1_5 = 0;
        do {
            func_00288d80(*(u32*)(&D_0035f020), s1_5, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, (u32)&loc_0 + 0x10, (u32)&loc_0 + 0x18);
            v0_6 = func_002891b8(*(u32*)(&D_0035f020), s1_5);
            *(u32*)((v0_6 + 0x188)) = 0xffffffff;
            func_00138c68(v0_6, 0, func_0023aa78(v0_6 + 0x18) * s1_5);
            func_00139620(v0_6);
            func_0028dcc0(v0_6, v0 + 0x198);
            if (((s32)(func_00263688(v0_3)) != 0)) {
                v0_7 = func_00192048(0xb944, s1_5);
                v0_9 = v0_7;
            } else {
                v0_8 = func_00281140(*(u32*)(&D_0035f010), s1_5);
                v0_9 = v0_8;
            }
            *(u32*)((v0_6 + 0x198)) = v0_9;
            s1_5 = (s1_5 + 1);
        } while (((s32)(((s32)(s1_5) < (s32)(s2_4))) != 0));
    }
    func_0028b1e8(*(u32*)(&D_0035f020), 1);
    func_002891f0(*(u32*)(&D_0035f020), 0, 1, 0, 2);
    func_00288f48(*(u32*)(&D_0035f020), 0x10, 0x20, 0, 0);
    s0 = func_0027ed48(*(u16*)(((v0_3 * 6) + func_00281f20(func_00257130()))));
    func_0027dee8(1, s0, func_002636b0(v0_3) ? 0 : 4);
    return func_00287cc0(0);
}
