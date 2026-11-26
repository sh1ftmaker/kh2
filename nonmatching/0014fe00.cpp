// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00150660(u32) asm("func_00150660");
extern "C" u32 func_0023a950(u32) asm("func_0023a950");
extern "C" u32 func_0023a988(u32) asm("func_0023a988");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_00138650(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00138650");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00139660(u32) asm("func_00139660");
extern "C" void func_00139688(u32) asm("func_00139688");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0014fc40(u32, u32, u32, u32, u32, u32) asm("func_0014fc40");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239c38(u32, u32) asm("func_00239c38");
extern "C" void func_0023acd8(u32) asm("func_0023acd8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x0014fe00 func_0014fe00
u32 func_0014fe00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) asm("_ZN2dk7COUNTER6createEPvS1_NS_9INFO_BASE5ALIGNEiiPiS4_i");
u32 func_0014fe00(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7) {
    u32 loc_0;
    u32 s2;
    u32 s2_0;
    u32 s2_1;
    u32 s2_2;
    u32 s5;
    u32 s0;
    u32 s3;
    u32 fp;
    u32 loc_4;
    u32 s2_3;
    u32 s0_4;
    u32 s7;
    u32 s4;
    u32 s2_5;
    u32 s0_6;
    u32 s1;
    u32 v0;
    u32 s4_7;
    u32 s0_8;
    u32 s7_9;
    u32 s4_10;
    u32 s2_11;
    u32 s0_12;
    u32 s1_13;
    u32 s4_14;
    u32 v0_15;
    loc_0 = a3;
    *(u32*)((a0 + 0x1800)) = a6;
    *(u32*)((a0 + 0x1818)) = a5;
    *(u32*)((a0 + 0x181c)) = a4;
    *(u32*)((a0 + 0x1820)) = 0;
    *(u32*)((a0 + 0x1804)) = *(u32*)(a6);
    *(u32*)((a0 + 0x180c)) = a7;
    *(u32*)((a0 + 0x1810)) = *(u32*)(a7);
    func_00138650(a0 + 0x30, 0xc80, a1, 8, a4, a5, a6, a7);
    if ((loc_0 != 1)) {
        if (((s32)(((s32)(loc_0) < (s32)(2))) != 0)) {
            if ((loc_0 != 0)) {
                s2 = 0;
            } else {
                s2 = 0x24;
            }
            s2_1 = s2;
        } else {
            if ((loc_0 != 2)) {
                s2_0 = 0;
            } else {
                s2_0 = 0x23;
            }
            s2_1 = s2_0;
        }
        s2_2 = s2_1;
    } else {
        s2_2 = 0x25;
    }
    s5 = (a0 + 0x50);
    s0 = (a0 + 0x1f0);
    func_00239988(s0, a2, s5);
    func_00239c38(s0, s2_2);
    func_0023acd8(s0);
    *(u32*)((a0 + 0x20)) = func_0023a950(s0);
    s3 = (a0 + 0x348);
    fp = (a0 + 0x360);
    func_001386e0(s3, 0xc80, a2, s5, 3, 8);
    loc_4 = func_0023aa78(fp);
    s2_3 = (a0 + 0x4e0);
    func_001386e0(s2_3, 0xc80, a2, s5, 9, 8);
    *(u32*)((s2_3 + 0x18c)) = s3;
    func_001396b0(s2_3);
    if (((s32)(*(u32*)((s2_3 + 0x18c))) != 0)) {
        *(u32*)((s2_3 + 0x190)) = 0;
        func_001396b0(s2_3);
        if (((s32)(*(u32*)((s2_3 + 0x190))) != 0)) {
            func_0031a260(s2_3, 0);
        }
    }
    func_00139660(s2_3);
    func_00139688(s2_3);
    s0_4 = func_0023a950(fp);
    func_00138c68(s2_3, s0_4, func_0023a988(fp));
    s7 = 0;
    if (((s32)(*(u32*)((a0 + 0x1818))) > 0)) {
        s4 = 0;
        s2_5 = (*(u32*)((a0 + 0x1818)) + -1);
        s0_6 = (a0 + 0x678);
        do {
            func_001386e0(s0_6, 0xc80, a2, s5, 0xc, 8);
            *(u32*)((s0_6 + 0x18c)) = s3;
            func_001396b0(s0_6);
            if (((s32)(*(u32*)((s0_6 + 0x18c))) != 0)) {
                *(u32*)((s0_6 + 0x190)) = 0;
                func_001396b0(s0_6);
                if (((s32)(*(u32*)((s0_6 + 0x190))) != 0)) {
                    func_0031a260(s0_6, 0);
                }
            }
            func_00139660(s0_6);
            s1 = (a0 + 0x690);
            func_00139688(s0_6);
            v0 = func_0023aa98(s1);
            s4_7 = (s4 + 1);
            func_00138c68(s0_6, s2_5 * v0, 0);
            s0_6 = (s0_6 + 0x198);
            s2_5 = (s2_5 + -1);
            s4 = s4_7;
            s7 = (s7 + v0);
        } while (((s32)(((s32)(s4_7) < (s32)(*(u32*)((a0 + 0x1818))))) != 0));
    }
    if ((*(u32*)((a0 + 0x181c)) == 1)) {
        s0_8 = (a0 + 0x1668);
        func_001386e0(s0_8, 0xc80, a2, s5, 0x17, 8);
        *(u32*)((s0_8 + 0x18c)) = s3;
        func_001396b0(s0_8);
        if (((s32)(*(u32*)((s0_8 + 0x18c))) != 0)) {
            *(u32*)((s0_8 + 0x190)) = 0;
            func_001396b0(s0_8);
            if (((s32)(*(u32*)((s0_8 + 0x190))) != 0)) {
                func_0031a260(s0_8, 0);
            }
        }
        func_00139660(s0_8);
        func_00139688(s0_8);
        s7_9 = (s7 + func_0023aa98(a0 + 0x1680));
        func_00138c68(s0_8, s7, 0);
        if (((s32)(*(u32*)((a0 + 0x1818))) > 0)) {
            s4_10 = 0;
            s2_11 = (*(u32*)((a0 + 0x1818)) + -1);
            s0_12 = (a0 + 0xe70);
            do {
                func_001386e0(s0_12, 0xc80, a2, s5, 0x18, 8);
                *(u32*)((s0_12 + 0x18c)) = s3;
                func_001396b0(s0_12);
                if (((s32)(*(u32*)((s0_12 + 0x18c))) != 0)) {
                    *(u32*)((s0_12 + 0x190)) = 0;
                    func_001396b0(s0_12);
                    if (((s32)(*(u32*)((s0_12 + 0x190))) != 0)) {
                        func_0031a260(s0_12, 0);
                    }
                }
                func_00139660(s0_12);
                s1_13 = (a0 + 0xe88);
                func_00139688(s0_12);
                s4_14 = (s4_10 + 1);
                func_00138c68(s0_12, s7_9 + (s2_11 * func_0023aa98(s1_13)), 0);
                s0_12 = (s0_12 + 0x198);
                s2_11 = (s2_11 + -1);
                s4_10 = s4_14;
            } while (((s32)(((s32)(s4_14) < (s32)(*(u32*)((a0 + 0x1818))))) != 0));
        }
    }
    func_0014fc40(a0, *(u32*)(((u32)&loc_4 + 0x5c)), loc_4, 0xc80, 8, loc_0);
    *(u32*)((s3 + 0x18c)) = 0;
    func_001396b0(s3);
    if ((*(u32*)((s3 + 0x18c)) != 0)) {
        *(u32*)((s3 + 0x190)) = 0;
        func_001396b0(s3);
        if ((*(u32*)((s3 + 0x190)) != 0)) {
            func_0031a260(s3, 0);
        }
    }
    func_00138c40(s3, *(u32*)((a0 + 0x20)), *(u32*)((a0 + 0x24)));
    v0_15 = func_00150660(a0);
    *(u32*)((a0 + 0x1808)) = 0xffffffff;
    *(u32*)((a0 + 0x1814)) = 0xffffffff;
    return v0_15;
}
