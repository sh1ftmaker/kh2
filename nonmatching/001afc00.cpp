// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct S12_4_u32 { u8 _p[4]; u32 m; u8 _q[4]; };
struct S12_8_u32 { u8 _p[8]; u32 m; };
extern "C" u32 D_001afdd0 asm("D_001afdd0");
extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00350df8 asm("D_00350df8");
extern "C" u32 D_00350e00 asm("D_00350e00");
extern "C" u32 D_0036d938 asm("D_0036d938");
extern "C" u32 D_0036d940 asm("D_0036d940");
extern "C" u32 D_01c94090 asm("D_01c94090");
extern "C" u32 func_00102448(u32, u32) asm("func_00102448");
extern "C" u32 func_00105c30() asm("func_00105c30");
extern "C" u32 func_00105ee8(u32) asm("func_00105ee8");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" u32 func_0016e920(u32, u32) asm("func_0016e920");
extern "C" u32 func_001947c0(u32, u32) asm("func_001947c0");
extern "C" void func_002fee78(u32, u32, u32, u32, u32, u32) asm("func_002fee78");

// 0x001afc00 YS::VOICE::ReadEntryId(unsigned int, void*)
u32 lift_001afc00(u32 a0, u32 a1) asm("_ZN2YS5VOICE11ReadEntryIdEjPv");
u32 lift_001afc00(u32 a0, u32 a1) {
    u8 frame[48];
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 t6;
    u32 t7;
    u32 t7_1;
    u32 t7_2;
    u32 s4;
    u32 s4_3;
    u32 t5;
    u32 t7_4;
    u32 s2;
    u32 t7_5;
    u32 t6_6;
    u32 t7_7;
    u32 t6_8;
    u32 s5;
    u32 loc_0;
    u32 v0_9;
    u32 t7_10;
    u32 s1;
    u32 v0_11;
    u32 t6_12;
    u32 sp;
    u32 sp_13;
    u32 sp_14;
    u32 sp_15;
    u32 v0_16;
    if (((s32)(a0) != 0)) {
        v0 = func_0016e920(a0, a1);
        if (((s32)(v0) != 0)) {
            s0 = *(u16*)((v0 + 0x4c));
            if (((s32)(((u32)((s0 + -1)) < (u32)(0xf))) != 0)) {
                v0_0 = func_001947c0(0xffffffff, 0xffffffff);
                t6 = (u32)&D_01c94090;
                t7 = *(u32*)(((u32)&D_01c94090 + 4));
                do {
                    t7_1 = *(u32*)((t6 + 4));
                    if ((t7_1 == s0)) {
                        t7_2 = *(u32*)((t6 + 8));
                        s4 = *(u16*)((v0_0 + 0x30));
                        s4_3 = s4;
                        t5 = ((u32)((t7_2 ^ s4)) < (u32)(1));
                    } else {
                        s4_3 = *(u16*)((v0_0 + 0x30));
                        t5 = 0;
                    }
                    if (((t5 & 0xff) != 0)) {
                        t7_4 = *(u32*)((t6 + 0xc));
                        *(u32*)((t6 + 0xc)) = (t7_4 | 1);
                        return v0_0;
                    }
                    t6 = (t6 + 0xc);
                    t7 = ((s32)(t6) < (s32)(((u32)&D_01c94090 + 0x24)));
                } while ((t7 != 0));
                s2 = 0;
                t7_5 = *(u32*)((u32)&D_01c94090);
                t6_6 = (u32)&D_01c94090;
                do {
                    t7_7 = *(u32*)((t6_6 + (s2 * 0xc)));
                    if (((s32)((t7_7 & 1)) == 0)) {
                        break;
                    }
                    s2 = (s2 + 1);
                    t7_5 = ((s32)(s2) < (s32)(3));
                } while ((t7_5 != 0));
                ((S12_8_u32*)&D_01c94090)[s2].m = s4_3;
                t6_8 = *(u32*)(((s2 * 0xc) + (u32)&D_01c94090));
                *(u32*)(((s2 * 0xc) + (u32)&D_01c94090)) = (t6_8 | 1);
                ((S12_4_u32*)&D_01c94090)[s2].m = s0;
                s5 = *(u32*)(&D_0033caf4);
                if ((func_00105c30() == 8)) {
                    s5 = (u32)&D_0036d938;
                }
                func_002fee78((u32)&loc_0, (u32)&D_0036d940, s5, func_00105ee8(*(u8*)(&D_0032bae0)), s4_3, *(u32*)(((s0 << 2) + (u32)&D_00350e00)));
                v0_9 = func_00168388((u32)&loc_0, a1, (u32)&D_001afdd0, s2);
                *(u32*)((*(u32*)(&D_00350df8) + 4)) = 1;
                t7_10 = *(u32*)((*(u32*)(&D_00350df8) + 4));
                if (((s32)(t7_10) != 0)) {
                    s1 = 0x350000;
                    do {
                        v0_11 = func_00102448(*(u32*)(&D_00350df8), 0);
                        v0_9 = v0_11;
                        t6_12 = *(u32*)((*(u32*)((s1 + 0xdf8)) + 4));
                    } while (((s32)(t6_12) != 0));
                } else {
                    sp = (u32)frame;
                }
                sp_13 = sp;
                v0 = v0_9;
            } else {
                sp_13 = (u32)frame;
            }
            sp_14 = sp_13;
        } else {
            sp_14 = (u32)frame;
        }
        sp_15 = sp_14;
        v0_16 = v0;
    } else {
        sp_15 = (u32)frame;
    }
    return v0_16;
}
