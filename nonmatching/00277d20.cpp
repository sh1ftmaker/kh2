// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0027b960 asm("D_0027b960");
extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035ef6c asm("D_0035ef6c");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_0035f230 asm("D_0035f230");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_01e21ee0 asm("D_01e21ee0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_002570f0() asm("func_002570f0");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00258068(u32) asm("func_00258068");
extern "C" u32 func_00283ab8(u32) asm("func_00283ab8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00256cc0(u32, u32, u32) asm("func_00256cc0");
extern "C" void func_00257050(u32, u32, u32) asm("func_00257050");
extern "C" void func_00257708(u32) asm("func_00257708");
extern "C" void func_0027a208() asm("func_0027a208");
extern "C" void func_0027a6d8() asm("func_0027a6d8");
extern "C" void func_0027aed8(u32, u32, u32) asm("func_0027aed8");
extern "C" void func_0027b0f8() asm("func_0027b0f8");
extern "C" void func_0027c2f8() asm("func_0027c2f8");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x00277d20 Tz::CmAbility::SetupSel()
u32 lift_00277d20() asm("_ZN2Tz9CmAbility8SetupSelEv");
u32 lift_00277d20() {
    u8 frame[48];
    u32 s6;
    u32 s3;
    u32 t7;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 s5;
    u32 s4;
    u32 s3_1;
    u32 t7_2;
    u32 s5_3;
    u32 v0;
    u32 s1;
    u32 v0_4;
    u32 s5_5;
    u32 fp;
    u32 s2;
    u32 s3_6;
    u32 s7;
    u32 sp;
    u32 s3_7;
    u32 s2_8;
    u32 s1_9;
    u32 v0_10;
    u32 s4_11;
    u32 s2_12;
    u32 s1_13;
    u32 s2_14;
    u32 s1_15;
    s6 = func_00257770();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    if ((func_0028f930(1) == 0)) {
        func_0028f4d8(1, 0xffffffff, 0);
    }
    s3 = 0;
    t7 = (0 << 3);
    do {
        t4 = *(u16*)(&D_0035ef6c);
        t5 = 3;
        t6 = (u32)&D_01e21ee0;
        t7_0 = (t7 + (u32)&D_01e21ee0);
        do {
            *(u16*)(t7_0) = t4;
            t5 = (t5 + -1);
            t7_0 = (t7_0 + 2);
        } while (((s32)(t5) >= 0));
        s3 = (s3 + 1);
        t7 = (s3 << 3);
    } while (((s32)(t7) != 0));
    s5 = *(u32*)(&D_0035f3d4);
    func_0028d8c0(s6, *(u32*)(&D_0035f3d4), *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xe6, 0xe7, 0);
    s4 = ((((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) < (s32)(0xa)) ? *(s8*)((*(u32*)(&D_0035f230) + 7)) : 9) ? (((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) < (s32)(0xa)) ? *(s8*)((*(u32*)(&D_0035f230) + 7)) : 9) : 1);
    func_0027aed8(func_002570a0(0xf), (u32)frame + 0x10, (u32)frame + 0x14);
    if (((s32)(s4) > 0)) {
        *(u32*)(((u32)frame + 0x20)) = (*(u32*)(&D_0035f3d4) + 2);
        s3_1 = 0;
        t7_2 = 0x360000;
        do {
            s5_3 = *(u32*)(&D_0035f3d4);
            func_00288d80(*(u32*)(&D_0035f01c), s3_1, *(u32*)(&D_0035ef68), *(u32*)((t7_2 + -0x109c)), *(u32*)(&D_0035f03c), 0xffffffff, (u32)&D_01e21ee0, (u32)&D_01e21ee0 + 8);
            v0 = func_002891b8(*(u32*)(&D_0035f01c), s3_1);
            func_00138c10(v0, 0xf8);
            s1 = func_0023aa78(v0 + 0x18);
            *(u32*)(((u32)frame + 0x18)) = func_0023aa18(v0 + 0x18);
            *(u32*)(((u32)frame + 0x1c)) = func_0023aa38(v0 + 0x18);
            func_00138c10(v0, *(u32*)(&D_0035ef6c));
            func_00138c68(v0, 0, s3_1 * s1);
            func_0028dcc0(v0, s6);
            func_00139620(v0);
            if ((*(u32*)(((u32)frame + 0x10)) == 0)) {
                if (((s32)(*(u32*)(((u32)frame + 0x14))) != 0)) {
                    *(u32*)((v0 + 0x1b4)) = (u32)&D_0027b960;
                }
            }
            v0_4 = func_00257140(0);
            *(u32*)((u32)frame) = 0;
            func_0028d980((s6 + (s3_1 * 0x1b4)) + 0x5ef0, s5_3, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), v0_4, 0xffffffff, 0xffffffff);
            func_0028dcc0((s6 + (s3_1 * 0x1b4)) + 0x5ef0, v0);
            func_00139620((s6 + (s3_1 * 0x1b4)) + 0x5ef0);
            func_001395f8((s6 + (s3_1 * 0x1b4)) + 0x5ef0);
            *(u32*)((u32)frame) = 0;
            func_0028d980((s6 + (s3_1 * 0x1b4)) + 0x3610, s5_3, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xfb, 0xffffffff, 0xffffffff);
            func_0028dcc0((s6 + (s3_1 * 0x1b4)) + 0x3610, v0);
            func_00138c10((s6 + (s3_1 * 0x1b4)) + 0x3610, *(u32*)(&D_0035ef6c));
            func_00139620((s6 + (s3_1 * 0x1b4)) + 0x3610);
            *(u32*)((((s6 + (s3_1 * 0x1b4)) + 0x3610) + 0x1b0)) = 1;
            func_0028d8c0((s6 + (s3_1 * 0x198)) + 0x87d0, *(u32*)(((u32)frame + 0x20)), *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(u32*)(&D_0035ef6c), 0xffffffff, 0);
            func_0028dcc0((s6 + (s3_1 * 0x198)) + 0x87d0, v0);
            func_00138c68((s6 + (s3_1 * 0x198)) + 0x87d0, *(u32*)(((u32)frame + 0x18)), *(u32*)(((u32)frame + 0x1c)));
            s3_1 = (s3_1 + 1);
            t7_2 = 0x360000;
        } while (((s32)(t7_2) != 0));
        s5_5 = s5_3;
    } else {
        s5_5 = *(u32*)(&D_0035f3d4);
    }
    if (((s32)(s4) > 0)) {
        fp = 0x360000;
        s2 = s6;
        s3_6 = 0;
        s7 = 2;
        do {
            *(u32*)((u32)frame) = 0;
            func_0028d980(s2 + 0xd30, s5_5, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x114, 0xffffffff, 0xffffffff);
            func_00138c68(s2 + 0xd30, 0, func_0023aa78(s2 + 0xd48) * s3_6);
            func_00138c10(s2 + 0xd30, *(u32*)((fp + -0x1094)));
            func_001395f8(s2 + 0xd30);
            func_0028dcc0(s2 + 0xd30, s6);
            *(u32*)((s2 + 0xee0)) = s7;
            s2 = (s2 + 0x1b4);
            s3_6 = (s3_6 + 1);
        } while (((s32)(((s32)(s3_6) < (s32)(s4))) != 0));
    } else {
        sp = (u32)frame;
    }
    s3_7 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), *(u32*)(&D_0035ef68));
    s2_8 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f03c)) + 0x28)), *(u32*)(&D_0035ef64));
    if (((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) == 0)) {
        func_00257708(1);
        s1_9 = s4;
    } else {
        s1_9 = *(s8*)((*(u32*)(&D_0035f230) + 7));
    }
    v0_10 = func_002570f0();
    *(u32*)(sp) = 0;
    func_0028bae0(*(u32*)(&D_0035f04c), s5_5, s3_7, s2_8, v0_10, s1_9, s4, s6);
    s4_11 = (*(s8*)((*(u32*)(&D_0035f230) + 7)) ? *(s8*)((*(u32*)(&D_0035f230) + 7)) : 1);
    func_0028af90(*(u32*)(&D_0035f01c), *(s8*)((*(u32*)(&D_0035f230) + 7)) ? *(s8*)((*(u32*)(&D_0035f230) + 7)) : 1);
    func_0027c2f8();
    func_0028b218(*(u32*)(&D_0035f01c), 1);
    func_0028b248(*(u32*)(&D_0035f01c), 9);
    func_00257050(0x10, 0, 0);
    s2_12 = func_0028af88(*(u32*)(&D_0035f01c));
    s1_13 = (func_00258068(0) ? 0xc100 : 0xc000);
    if (((s32)(*(u32*)((sp + 0x10))) == 0)) {
        if (((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) != 0)) {
            s1_13 = (*(s8*)((((func_0028b040(*(u32*)(&D_0035f01c)) << 3) + *(u32*)(&D_0035f230)) + 0x11)) ? (s1_13 | 0x200) : s1_13);
        }
    }
    func_0028af18(*(u32*)(&D_0035f01c), s2_12 | s1_13);
    if (((s32)(*(s8*)((*(u32*)(&D_0035f230) + 7))) == 0)) {
        func_0028af28(*(u32*)(&D_0035f01c), 0x10);
    }
    if (((s32)(func_00283ab8(2)) != 0)) {
        s2_14 = (func_0028af88(*(u32*)(&D_0035f01c)) | 0x400);
        func_0028af18(*(u32*)(&D_0035f01c), func_0028af88(*(u32*)(&D_0035f01c)) | 0x400);
        s1_15 = 0xcbdd;
    } else {
        s1_15 = 0xffffffff;
    }
    func_00256cc0(0xb373, 0xb61a, s1_15);
    if (((s32)(*(u32*)((sp + 0x10))) == 0)) {
        func_0027b0f8();
    }
    func_0027a6d8();
    func_0027a208();
    return func_00287cc0(0);
}
