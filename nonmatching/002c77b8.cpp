// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347e40 asm("D_00347e40");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_00361dd8 asm("D_00361dd8");
extern "C" u32 D_00361de8 asm("D_00361de8");
extern "C" u32 func_00105f80(u32) asm("func_00105f80");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_001c0c18() asm("func_001c0c18");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0023f848(u32) asm("func_0023f848");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_002beb90() asm("func_002beb90");
extern "C" u32 func_002c22b8(u32) asm("func_002c22b8");
extern "C" u32 func_002c5238(u32, u32, u32) asm("func_002c5238");
extern "C" u32 func_002c83a8(u32, u32) asm("func_002c83a8");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");
extern "C" void func_00139570(u32) asm("func_00139570");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0014cc40(u32, u32, u32, u32, u32) asm("func_0014cc40");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023eea0(u32, u32, u32, u32, u32, u32) asm("func_0023eea0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_0023f800(u32) asm("func_0023f800");
extern "C" void func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" void func_002c8680(u32, u32) asm("func_002c8680");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x002c77b8 func_002c77b8
u32 func_002c77b8(u32 a0, u32 a1) asm("func_002c77b8");
u32 func_002c77b8(u32 a0, u32 a1) {
    u8 frame[96];
    u32 s5;
    u32 s4;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 s7;
    u32 s4_0;
    u32 s2_1;
    u32 s1_2;
    u32 s0_3;
    u32 s4_4;
    u32 s2_5;
    u32 s1_6;
    u32 s0_7;
    u32 s6;
    u32 s4_8;
    u32 s2_9;
    u32 s1_10;
    u32 s0_11;
    u32 s2_12;
    u32 s0_13;
    u32 s1_14;
    u32 v0;
    u32 s5_15;
    u32 s4_16;
    u32 s2_17;
    u32 s1_18;
    u32 s0_19;
    u32 s5_20;
    u32 v0_21;
    u32 s4_22;
    u32 s3;
    u32 s2_23;
    u32 s0_24;
    u32 s4_25;
    u32 s2_26;
    u32 s5_27;
    u32 s4_28;
    u32 s1_29;
    u32 s0_30;
    u32 s2_31;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)(a0) = (u32)&D_00361de8;
    *(u32*)((a0 + 0x1c)) = (u32)&D_00347f98;
    *(u32*)((a0 + 0x18)) = 0;
    func_0031a838(a0 + 0x28);
    *(u32*)((a0 + 0x1c)) = (u32)&D_0035eb98;
    func_002369a0(a0 + 0x34);
    func_0023c008(a0 + 0x4c);
    *(u32*)((a0 + 0xbc)) = func_001708f8(func_002beb90(), 0xffffffff);
    *(u32*)((a0 + 0xc4)) = (u32)&D_00347f98;
    *(u32*)((a0 + 0xc0)) = a1;
    func_0031a838(a0 + 0xd0);
    *(u32*)((a0 + 0xc4)) = (u32)&D_00347e60;
    s5 = (a0 + 0xc4);
    func_00239700(a0 + 0xdc);
    *(u32*)((s5 + 0x198)) = 0;
    *(u32*)((a0 + 0xc4)) = (u32)&D_00347e40;
    s4 = 0xffffffff;
    s2 = 2;
    s1 = (a0 + 0x278);
    s0 = (u32)&D_00347e60;
    do {
        *(u32*)((s1 + 0xc)) = 0;
        *(u32*)(s1) = s0;
        func_00239700(s1 + 0x18);
        s1 = (s1 + 0x198);
        s2 = (s2 + -1);
    } while ((s2 != s4));
    *(u32*)((a0 + 0x74c)) = 0;
    *(u32*)((a0 + 0x740)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x758);
    *(u32*)(((u32)frame + 0x50)) = (a0 + 0x8d8);
    *(u32*)((a0 + 0x8d8)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x8e4)) = 0;
    func_00239700(a0 + 0x8f0);
    s7 = (a0 + 0x740);
    s4_0 = (u32)&D_00347e60;
    s2_1 = 0xffffffff;
    s1_2 = 1;
    s0_3 = (a0 + 0xa70);
    do {
        *(u32*)((s0_3 + 0xc)) = 0;
        *(u32*)(s0_3) = s4_0;
        func_00239700(s0_3 + 0x18);
        s0_3 = (s0_3 + 0x198);
        s1_2 = (s1_2 + -1);
    } while ((s1_2 != s2_1));
    s4_4 = (u32)&D_00347e60;
    s2_5 = 0xffffffff;
    s1_6 = 2;
    s0_7 = (a0 + 0xda0);
    do {
        *(u32*)((s0_7 + 0xc)) = 0;
        *(u32*)(s0_7) = s4_4;
        func_00239700(s0_7 + 0x18);
        s0_7 = (s0_7 + 0x198);
        s1_6 = (s1_6 + -1);
    } while ((s1_6 != s2_5));
    *(u32*)((a0 + 0x1274)) = 0;
    *(u32*)((a0 + 0x1268)) = (u32)&D_00347e60;
    func_00239700(a0 + 0x1280);
    s6 = (a0 + 0x1268);
    s4_8 = (u32)&D_00347e60;
    s2_9 = 0xffffffff;
    s1_10 = 1;
    s0_11 = (a0 + 0x1400);
    do {
        *(u32*)((s0_11 + 0xc)) = 0;
        *(u32*)(s0_11) = s4_8;
        func_00239700(s0_11 + 0x18);
        s0_11 = (s0_11 + 0x198);
        s1_10 = (s1_10 + -1);
    } while ((s1_10 != s2_9));
    *(u32*)(&D_00361dd8) = a0;
    func_0023f800((u32)frame);
    func_0023fa08((u32)frame, *(u32*)((a0 + 0xbc)));
    s2_12 = func_0023f948((u32)frame, 0);
    s0_13 = func_0023f908((u32)frame, 0);
    s1_14 = (a0 + 0x1c);
    func_0023eea0(s1_14, 0x7581, s2_12, s0_13, func_002c83a8(a0, 0), 0);
    func_0023ef50(s1_14);
    func_0023f0c8(s1_14, func_002c83a8(a0, 2));
    func_00139570(s1_14);
    *(u32*)((a0 + 0x1734)) = func_0023c4b8(func_0023f1b0(s1_14), 1);
    *(u32*)((a0 + 0x1730)) = func_00236ca8(*(u32*)((func_0023f1b0(s1_14) + 0x28)), 1);
    func_00138d60(s5, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), 0x98, func_00192048(func_00105f80(a1)), 0xc9);
    *(u32*)((s5 + 0x1b0)) = 2;
    func_00139620(s5);
    *(u32*)((s5 + 0x188)) = 0x99;
    v0 = func_002c22b8(a1);
    if (((s32)(v0) != 0)) {
        func_002c8680(a0, v0);
    }
    func_001386e0(s7, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), 0x48, 0xc9);
    *(u32*)((s7 + 0x188)) = 0x49;
    func_001386e0(*(u32*)(((u32)frame + 0x50)), 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), 0x41, 0xc9);
    *(u32*)((*(u32*)(((u32)frame + 0x50)) + 0x188)) = 0x42;
    func_002c5238(*(u8*)((func_001c0c18() + a1)), 2, (u32)frame + 0x20);
    s5_15 = 0;
    s4_16 = ((u32)frame + 0x20);
    s2_17 = 1;
    s1_18 = a0;
    s0_19 = (a0 + 0xa70);
    do {
        func_001386e0(s0_19, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), *(u32*)(s4_16) + 0x12, 0xc9);
        *(u32*)((s1_18 + 0xbfc)) = *(u32*)(((u32)frame + 0x50));
        func_001396b0(s0_19);
        if (((s32)(*(u32*)((s1_18 + 0xbfc))) != 0)) {
            *(u32*)((s1_18 + 0xc00)) = 0;
            func_001396b0(s0_19);
            if (((s32)(*(u32*)((s1_18 + 0xc00))) != 0)) {
                func_0031a260(s0_19, 0);
            }
        }
        func_00139660(s0_19);
        func_00139688(s0_19);
        func_00138c68(s0_19, s5_15, 0);
        func_001396b0(s0_19);
        s0_19 = (s0_19 + 0x198);
        s5_20 = (s5_15 + func_0023aa98(s1_18 + 0xa88));
        s1_18 = (s1_18 + 0x198);
        s2_17 = (s2_17 + -1);
        s4_16 = (s4_16 + 4);
        s5_15 = s5_20;
    } while (((s32)(s2_17) >= 0));
    func_0014cc40((u32)frame + 0x40, (u32)frame + 0x44, (u32)frame + 0x48, (u32)frame + 0x4c, a1);
    v0_21 = func_002c5238(*(u32*)(((u32)frame + 0x40)), 3, (u32)frame + 0x30);
    s4_22 = 0;
    if (((s32)(v0_21) > 0)) {
        s3 = (((u32)frame - (v0_21 << 2)) + 0x3c);
        s2_23 = a0;
        s0_24 = (a0 + 0xda0);
        do {
            func_001386e0(s0_24, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), *(u32*)(s3) + 0x1c, 0xc9);
            *(u32*)((s2_23 + 0xf2c)) = s7;
            func_001396b0(s0_24);
            if (((s32)(*(u32*)((s2_23 + 0xf2c))) != 0)) {
                *(u32*)((s2_23 + 0xf30)) = 0;
                func_001396b0(s0_24);
                if (((s32)(*(u32*)((s2_23 + 0xf30))) != 0)) {
                    func_0031a260(s0_24, 0);
                }
            }
            func_00139660(s0_24);
            func_00139688(s0_24);
            func_00138c68(s0_24, s4_22, 0);
            func_001396b0(s0_24);
            s0_24 = (s0_24 + 0x198);
            v0_21 = (v0_21 + -1);
            s4_25 = (s4_22 + func_0023aa98(s2_23 + 0xdb8));
            s2_23 = (s2_23 + 0x198);
            s3 = (s3 + 4);
            s4_22 = s4_25;
        } while (((s32)(v0_21) != 0));
    }
    func_001386e0(s6, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), 0x26, 0xc9);
    *(u32*)((s6 + 0x18c)) = s7;
    func_001396b0(s6);
    if (((s32)(*(u32*)((s6 + 0x18c))) != 0)) {
        *(u32*)((s6 + 0x190)) = 0;
        func_001396b0(s6);
        if (((s32)(*(u32*)((s6 + 0x190))) != 0)) {
            func_0031a260(s6, 0);
        }
    }
    func_00139660(s6);
    func_00139688(s6);
    func_00138c68(s6, s4_22, 0);
    func_001396b0(s6);
    s2_26 = (s4_22 + func_0023aa98(a0 + 0x1280));
    func_002c5238(*(u32*)(((u32)frame + 0x44)), 2, (u32)frame + 0x20);
    s5_27 = ((u32)frame + 0x20);
    s4_28 = 1;
    s1_29 = a0;
    s0_30 = (a0 + 0x1400);
    do {
        func_001386e0(s0_30, 0x7585, *(u32*)((a0 + 0x1734)), *(u32*)((a0 + 0x1730)), *(u32*)(s5_27) + 0x1c, 0xc9);
        *(u32*)((s1_29 + 0x158c)) = s7;
        func_001396b0(s0_30);
        if (((s32)(*(u32*)((s1_29 + 0x158c))) != 0)) {
            *(u32*)((s1_29 + 0x1590)) = 0;
            func_001396b0(s0_30);
            if (((s32)(*(u32*)((s1_29 + 0x1590))) != 0)) {
                func_0031a260(s0_30, 0);
            }
        }
        func_00139660(s0_30);
        func_00139688(s0_30);
        func_00138c68(s0_30, s2_26, 0);
        func_001396b0(s0_30);
        s0_30 = (s0_30 + 0x198);
        s2_31 = (s2_26 + func_0023aa98(s1_29 + 0x1418));
        s1_29 = (s1_29 + 0x198);
        s2_26 = s2_31;
        s4_28 = (s4_28 + -1);
        s5_27 = (s5_27 + 4);
    } while (((s32)(s4_28) >= 0));
    func_001391c8(a0, 0x7582, 0xc9);
    return func_0023f848((u32)frame);
}
