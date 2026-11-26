// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 D_0035f5a0 asm("D_0035f5a0");
extern "C" u32 D_0035f5a1 asm("D_0035f5a1");
extern "C" u32 D_0035f5a2 asm("D_0035f5a2");
extern "C" u32 D_0035f5a3 asm("D_0035f5a3");
extern "C" u32 D_003747bc asm("D_003747bc");
extern "C" u32 D_003747c0 asm("D_003747c0");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00276568() asm("func_00276568");
extern "C" u32 func_00276608(u32) asm("func_00276608");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_00294348(u32) asm("func_00294348");
extern "C" u32 func_002983d8(u32) asm("func_002983d8");
extern "C" u32 func_002aa668(u32, u32) asm("func_002aa668");
extern "C" u32 func_002aa788(u32, u32) asm("func_002aa788");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_002765e8(u32, u32, u32) asm("func_002765e8");
extern "C" void func_00276690(u32) asm("func_00276690");
extern "C" void func_002766b0(u32) asm("func_002766b0");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e88(u32) asm("func_00288e88");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028de08(u32, u32, u32) asm("func_0028de08");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002982f0() asm("func_002982f0");
extern "C" void func_00299260() asm("func_00299260");
extern "C" void func_00299290() asm("func_00299290");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00297e68 func_00297e68
u32 func_00297e68() asm("_ZN2Tz7JmAlbum5SetupEv");
u32 func_00297e68() {
    u8 frame[48];
    u32 s6;
    u32 v0;
    u32 s1;
    u32 t7;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 s0;
    u32 loc_14;
    u32 fp;
    u32 s1_1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s6_2;
    u32 s7;
    u32 loc_0;
    u32 s0_3;
    u32 v0_4;
    u32 s4_5;
    u32 loc_10;
    u32 s4_6;
    u32 s0_7;
    u32 s4_8;
    u32 loc_18;
    u32 loc_1c;
    u32 loc_20;
    u32 s1_9;
    u32 s6_10;
    u32 s4_11;
    u32 v0_12;
    u32 s2_13;
    u32 s2_14;
    u32 s2_15;
    s6 = func_00276348();
    v0 = func_002766d0();
    *(u8*)(&D_0035f5a0) = 0xffffffff;
    *(u8*)(&D_0035f5a1) = 0xffffffff;
    *(u8*)(&D_0035f5a2) = 0;
    *(u8*)(&D_0035f5a3) = 0;
    func_00288e88(*(u32*)(&D_0035f200));
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    s1 = 0;
    t7 = (0 << 3);
    do {
        t5 = 2;
        t6 = 3;
        t7_0 = (t7 + (u32)frame);
        do {
            *(u16*)(t7_0) = t5;
            t6 = (t6 + -1);
            t7_0 = (t7_0 + 2);
        } while (((s32)(t6) >= 0));
        s1 = (s1 + 1);
        t7 = (s1 << 3);
    } while (((s32)(t7) != 0));
    s0 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(v0, s0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x5a, 0xffffffff, 0);
    func_00139620(v0);
    func_0028dcc0(v0, s6);
    loc_14 = func_0023aa78(v0 + 0x18);
    fp = 0x360000;
    s1_1 = 0;
    s2 = (v0 + 0xa998);
    s3 = (*(u32*)(&D_0035f3d4) + 1);
    s4 = 0;
    s6_2 = 0x360000;
    s7 = 0x60000008;
    do {
        s0_3 = *(u32*)(&D_0035f3d4);
        func_00288d80(*(u32*)((s6_2 + -0xe00)), s1_1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)((fp + -0xdf0)), 0xffffffff, (u32)&loc_0, (u32)&loc_0 + 8);
        v0_4 = func_002891b8(*(u32*)((s6_2 + -0xe00)), s1_1);
        func_00139620(v0_4);
        func_0028dcc0(v0_4, v0);
        func_00138c68(v0_4, 0, s4);
        *(u32*)((v0_4 + 0x1a4)) = s7;
        *(u32*)((v0_4 + 0x1ac)) = 3;
        s4_5 = (s4 + loc_14);
        func_001395f8(v0_4);
        func_0028d8c0(s2, s3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)((fp + -0xdf0)), 2, 0xffffffff, 0);
        func_0028dcc0(s2, v0_4);
        s1_1 = (s1_1 + 1);
        s2 = (s2 + 0x198);
        s4 = s4_5;
    } while (((s32)(((s32)(s1_1) < (s32)(8))) != 0));
    func_002982f0();
    func_002fde18(v0 + 0x110a0, 0, 0x280);
    if ((*(u32*)(*(u32*)(&D_0035f598)) == 0)) {
        loc_10 = 1;
        s4_6 = *(u32*)(*(u32*)(&D_0035f598));
        func_00276690(1);
        s0_7 = func_002891b8(*(u32*)(&D_0035f200), 0);
        *(u32*)((s0_7 + 0x198)) = func_00192048(0x32dd);
    } else {
        loc_10 = *(u32*)(*(u32*)(&D_0035f598));
        s4_8 = *(u32*)(*(u32*)(&D_0035f598));
        loc_18 = (func_00294000(2) + 0x10);
        if (((s32)(loc_10) > 0)) {
            loc_1c = 0x10000;
            loc_1c = 0x110a0;
            loc_20 = 0x110a0;
            s1_9 = 0;
            s6_10 = (v0 + 0xa998);
            do {
                s4_11 = loc_10;
                v0_12 = func_00294348(func_002983d8(*(s16*)((((s1_9 << 1) + *(u32*)(&D_0035f598)) + 4))));
                if (((s32)(v0_12) == 0)) {
                    s2_13 = *(s16*)((((s1_9 << 1) + *(u32*)(&D_0035f598)) + 4));
                    func_0028de08(*(u16*)((((*(s16*)((((s1_9 << 1) + *(u32*)(&D_0035f598)) + 4)) * 0xc) + loc_18) + 8)), (v0 + (s1_9 << 6)) + loc_1c, 0x40);
                    s2_15 = s2_13;
                } else {
                    s2_14 = *(s16*)((((s1_9 << 1) + *(u32*)(&D_0035f598)) + 4));
                    func_00192c90(func_00192048(*(u16*)((((*(s16*)((((s1_9 << 1) + *(u32*)(&D_0035f598)) + 4)) * 0xc) + loc_18) + 8))), (v0 + (s1_9 << 6)) + loc_20);
                    s2_15 = s2_14;
                }
                *(u32*)((func_002891b8(*(u32*)(&D_0035f200), s1_9) + 0x198)) = ((v0 + (s1_9 << 6)) + 0x110a0);
                if (((s32)(v0_12) != 0)) {
                    if (((s32)(func_002aa668(*(s8*)(func_00276568()), s2_15)) != 0)) {
                        func_00138c10(s6_10, func_002aa788(*(s8*)(func_00276568()), s2_15) ? *(u32*)(&D_003747c0) : *(u32*)(&D_003747bc));
                    }
                }
                s1_9 = (s1_9 + 1);
                s6_10 = (s6_10 + 0x198);
            } while (((s32)(((s32)(s1_9) < (s32)(s4_11))) != 0));
        }
    }
    func_0028af90(*(u32*)(&D_0035f200), loc_10);
    func_002891f0(*(u32*)(&D_0035f200), func_00276608(func_00287bc0()), 0, 0xffffffff, 0xffffffff);
    func_002765e8(func_00287bc0(), 0, 0);
    if (((s32)(*(u32*)(*(u32*)(&D_0035f598))) == 0)) {
        func_0028af28(*(u32*)(&D_0035f200), 0x10);
    }
    func_00299260();
    func_00299290();
    func_002766b0(1);
    return func_00287cc0(0);
}
