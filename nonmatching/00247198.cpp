// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ed40 asm("D_0035ed40");
extern "C" u32 D_00371ab8 asm("D_00371ab8");
extern "C" u32 D_00371ac4 asm("D_00371ac4");
extern "C" u32 D_00371ca8 asm("D_00371ca8");
extern "C" u32 D_00371cb0 asm("D_00371cb0");
extern "C" u32 D_00371cb8 asm("D_00371cb8");
extern "C" u32 D_00371cc0 asm("D_00371cc0");
extern "C" u32 D_00371cd0 asm("D_00371cd0");
extern "C" f32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" f32 func_00246968(u32) asm("func_00246968");
extern "C" u32 func_00105c30() asm("func_00105c30");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192b30(u32) asm("func_00192b30");
extern "C" u32 func_00192c40(u32, u32) asm("func_00192c40");
extern "C" u32 func_00192cc0(u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_001d56c8(u32) asm("func_001d56c8");
extern "C" u32 func_00246840() asm("func_00246840");
extern "C" u32 func_002474e0(u32) asm("func_002474e0");
extern "C" void func_00192c90(u32, u32) asm("func_00192c90");
extern "C" void func_00239f18(u32, f32) asm("func_00239f18");

// 0x00247198 func_00247198
// minilink-rodata 0x00371abc   (float literals live here in the original)
f32 func_00247198() asm("_ZN2Tz4HECO11UpdateScoreEv");
f32 func_00247198() {
    u32 s1;
    u32 s4;
    u32 s6;
    f32 f0;
    u32 s5;
    u32 t6;
    u32 v0;
    u32 s2;
    u32 s0;
    u32 t6_0;
    f32 f0_1;
    u32 loc_0;
    u32 s0_2;
    u32 s2_3;
    u32 t7;
    u32 t7_4;
    u32 s0_5;
    u32 s2_6;
    u32 s2_7;
    u32 s0_8;
    u32 s0_9;
    f32 f0_10;
    s1 = 0;
    s4 = 0;
    s6 = 0;
    s5 = (u32)&D_00371cd0;
    do {
        if ((func_00246968(s1) != 0)) {
            if (((s32)(func_00246840()) != 0)) {
                t6 = (u32)&D_00371cb0;
            } else {
                t6 = (u32)&D_00371ca8;
            }
            v0 = func_001d56c8(*(u8*)((s1 + t6)));
            if (((s32)(((u32)(*(u8*)(v0)) < (u32)(2))) != 0)) {
                func_00239f18((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x2520, 0.0f);
                s2 = ((*(u32*)(&D_0035ed40) + s6) + 0x3828);
                func_00192c90(func_00192048(0xcb9b), s2);
            } else {
                if ((*(u8*)(v0) == 2)) {
                    s0 = ((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x2508);
                    if (((s32)(func_00246840()) != 0)) {
                        t6_0 = (u32)&D_00371cc0;
                    } else {
                        t6_0 = (u32)&D_00371cb8;
                    }
                    f0_1 = ((s32)(*(u32*)((v0 + 4))) >= 0) ? (f32)(*(s32*)((v0 + 4))) : ((f32)((s32)(((*(u32*)((v0 + 4)) & 1) | (*(u32*)((v0 + 4)) >> 1)))) + (f32)((s32)(((*(u32*)((v0 + 4)) & 1) | (*(u32*)((v0 + 4)) >> 1)))));
                    loc_0 = s6;
                    func_00239f18(s0 + 0x18, f0_1 / (f32)((s32)((*(u8*)((s1 + t6_0)) + -1))));
                    s0_2 = (*(u32*)(&D_0035ed40) + (s4 * 0x1b4));
                    *(u32*)(((s0_2 + 0x1108) + 0x198)) = func_00192048(0xcc0b);
                    s2_3 = ((*(u32*)(&D_0035ed40) + s6) + 0x38a8);
                    if ((func_00105c30() != 1)) {
                        if ((func_00105c30() == 8)) {
                            t7 = 1;
                        } else {
                            t7 = 0;
                        }
                        t7_4 = t7;
                    } else {
                        t7_4 = 1;
                    }
                    if (((s32)(t7_4) != 0)) {
                        s0_5 = func_00192b30(func_00192cc0(s2_3, (u32)&D_00371ab8, *(u32*)((v0 + 4))));
                        func_00192c90(func_00192048(0xcb9a), s2_3 + s0_5);
                    } else {
                        func_00192cc0(s2_3 + func_00192c40(func_00192048(0xcb9a), s2_3), (u32)&D_00371ab8, *(u32*)((v0 + 4)));
                    }
                    s2_6 = ((*(u32*)(&D_0035ed40) + loc_0) + 0x3828);
                    func_00192c90(func_00192048(0xcb9b), s2_6);
                } else {
                    if ((*(u8*)(v0) == 3)) {
                        func_00239f18((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x2520, 1.0f);
                        s2_7 = ((*(u32*)(&D_0035ed40) + s6) + 0x3828);
                        func_00192cc0((*(u32*)(&D_0035ed40) + s6) + 0x3828, (u32)&D_00371ab8, *(u32*)((v0 + 4)));
                        s0_8 = ((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x31c8);
                        func_00138c10((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x31c8, *(s16*)((s5 + (s1 * 2))));
                    }
                }
            }
            s0_9 = ((*(u32*)(&D_0035ed40) + (s4 * 0x198)) + 0x2b68);
            func_00138c10(s0_9, *(u32*)(&D_00371ac4));
            f0_10 = func_00138c10(s0_9, *(u32*)(&D_00371ac4));
            s4 = (s4 + 1);
            s6 = (s6 + 0x20);
        } else {
            f0_10 = func_00246968(s1);
        }
        f0 = f0_10;
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(4))) != 0));
    return f0;
}
