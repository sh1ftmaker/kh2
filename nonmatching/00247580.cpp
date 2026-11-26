// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed40 asm("D_0035ed40");
extern "C" u32 D_00371ab8 asm("D_00371ab8");
extern "C" u32 D_00371ac0 asm("D_00371ac0");
extern "C" u32 D_00371cb8 asm("D_00371cb8");
extern "C" u32 D_00371cc0 asm("D_00371cc0");
extern "C" f32 func_0028af18(u32, u32) asm("func_0028af18");
extern "C" u32 func_00105c30(u32) asm("func_00105c30");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192b30(u32) asm("func_00192b30");
extern "C" u32 func_00192c40(u32, u32) asm("func_00192c40");
extern "C" u32 func_00192cc0(u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_00246840() asm("func_00246840");
extern "C" u32 func_002469a0(u32) asm("func_002469a0");
extern "C" u32 func_002474e0(u32) asm("func_002474e0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_002892f8(u32) asm("func_002892f8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00247580 func_00247580
void func_00247580(u8 a0) asm("_ZN2Tz4HECO11UpdateMakerEb");
void func_00247580(u8 a0) {
    u8 frame[16];
    u32 loc_0;
    u32 v0;
    u32 s1;
    u32 s4;
    u32 s5;
    u32 s6;
    u32 t7;
    u32 s0;
    u32 s3;
    u32 sp;
    u32 sp_0;
    u32 s0_1;
    u32 s7;
    u32 v0_2;
    u32 s1_3;
    u32 s3_4;
    u32 a0_5;
    u32 t7_6;
    u32 t7_7;
    u32 s0_8;
    u32 s1_9;
    u32 s0_10;
    u32 t7_11;
    u32 s2;
    u32 s0_12;
    loc_0 = func_002891e8(*(u32*)(&D_0035ed20));
    v0 = func_002892f8(*(u32*)(&D_0035ed20));
    if (((s32)(a0) != 0)) {
        if (((s32)(v0) > 0)) {
            s1 = 0;
            s4 = 0x1f;
            s5 = 0x60;
            s6 = 0x360000;
            t7 = *(u32*)(&D_0035ed40);
            s0 = 0;
            do {
                s3 = (func_002474e0(s1) ? s4 : s5);
                func_00138c10((t7 + (s0 + (s1 * 0x198))) + 0x2b68, func_002474e0(s1) ? s4 : s5);
                s1 = (s1 + 1);
                t7 = *(u32*)((s6 + -0x12c0));
            } while (((s32)(t7) != 0));
        } else {
            sp = (u32)frame;
        }
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    s0_1 = (*(u32*)(&D_0035ed40) + 0x1b4);
    if (((s32)(func_002474e0(loc_0)) != 0)) {
        s7 = ((*(u32*)(&D_0035ed40) + (loc_0 * 0x198)) + 0x2b68);
        if (((s32)(a0) != 0)) {
            func_00138c10(s0_1, 0x21);
            func_00138c10(s7, 0x20);
            v0_2 = func_002891e8(*(u32*)(&D_0035ed20));
            func_0028dcc0(s0_1, (*(u32*)(&D_0035ed40) + (v0_2 * 0x198)) + 0x2b68);
        }
        s1_3 = (*(u32*)(&D_0035ed40) + 0x3928);
        s3_4 = *(s8*)(((loc_0 + *(u32*)(&D_0035ed40)) + 0x3948));
        if ((func_00105c30(*(u32*)(&D_0035ed40)) != 1)) {
            if ((func_00105c30(a0_5) == 8)) {
                t7_6 = 1;
            } else {
                t7_6 = 0;
            }
            t7_7 = t7_6;
        } else {
            t7_7 = 1;
        }
        if (((s32)(t7_7) != 0)) {
            s0_8 = func_00192b30(func_00192cc0(s1_3, (u32)&D_00371ab8, s3_4 + 1));
            func_00192c90(func_00192048(0x4c0c), s1_3 + s0_8);
        } else {
            func_00192cc0(s1_3 + func_00192c40(func_00192048(0x4c0c), s1_3), (u32)&D_00371ac0, s3_4 + 1);
        }
        s1_9 = func_0023aa98((*(u32*)(&D_0035ed40) + (loc_0 * 0x198)) + 0x1ec0);
        s0_10 = func_002469a0(loc_0);
        if (((s32)(func_00246840()) != 0)) {
            t7_11 = (u32)&D_00371cc0;
        } else {
            t7_11 = (u32)&D_00371cb8;
        }
        s2 = *(u8*)((s0_10 + t7_11));
        func_00138c68(s7, (s32)((((f32)((s32)(s1_9)) / (f32)((s32)((*(u8*)((s0_10 + t7_11)) + -1)))) * (f32)((s32)(s3_4)))), 0);
    } else {
        func_00138c10(s0_1, 0x60);
        func_002fde18(*(u32*)(&D_0035ed40) + 0x3928, 0, 0x20);
    }
    s0_12 = func_0028af88(*(u32*)(&D_0035ed20));
    if (((s32)(func_002474e0(loc_0)) != 0)) {
        s0_12 = (s0_12 | 0xc0000);
    } else {
        s0_12 = (s0_12 & 0xfff3ffff);
    }
    func_0028af18(*(u32*)(&D_0035ed20), s0_12);
    return;
}
