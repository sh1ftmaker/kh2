// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb40 asm("D_0032bb40");
extern "C" u32 D_0032d7c0 asm("D_0032d7c0");
extern "C" u32 D_0034ec70 asm("D_0034ec70");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_00196540(u32) asm("func_00196540");
extern "C" u32 func_001b6d70(u32) asm("func_001b6d70");
extern "C" void func_00104cf0(u32, u32) asm("func_00104cf0");
extern "C" void func_00181178(u32) asm("_ZN2YS8PROGRESS7SetFlagEi");
extern "C" void func_001814b8(u32) asm("func_001814b8");
extern "C" void func_001815d0(u32) asm("func_001815d0");
extern "C" void func_00181670() asm("func_00181670");
extern "C" void func_00181778() asm("func_00181778");
extern "C" void func_001817f0(u32) asm("func_001817f0");
extern "C" void func_00196670(u32, u32, u32) asm("func_00196670");
extern "C" void func_00196698(u32) asm("func_00196698");
extern "C" void func_001966b0(u32) asm("func_001966b0");
extern "C" void func_00196710(u32) asm("func_00196710");
extern "C" void func_0019ef30() asm("func_0019ef30");
extern "C" void func_001a6c90(u32) asm("func_001a6c90");
extern "C" void func_001a6cd0(u32) asm("func_001a6cd0");
extern "C" void func_001a9140(u32, u32) asm("func_001a9140");
extern "C" void func_001b8ce0(u32) asm("func_001b8ce0");
extern "C" void func_001c0ba0(u32) asm("func_001c0ba0");
extern "C" void func_001d5218(u32) asm("func_001d5218");
extern "C" void func_001d59b0() asm("func_001d59b0");
extern "C" void func_001d7778() asm("func_001d7778");

// 0x00181178 YS::PROGRESS::SetFlag(int)
u32 lift_00181178(u32 a0) asm("_ZN2YS8PROGRESS7SetFlagEi");
u32 lift_00181178(u32 a0) {
    u8 frame[16];
    u32 s0;
    u32 t6;
    u32 a0_0;
    u32 s2;
    u32 s5;
    u32 s6;
    u32 s7;
    u32 t6_1;
    u32 s4;
    u32 s7_2;
    u32 sp;
    u32 t6_3;
    u32 s2_4;
    u32 s7_5;
    u32 t6_6;
    u32 s7_7;
    u32 sp_8;
    u32 t7;
    u32 s2_9;
    u32 s7_10;
    u32 t6_11;
    u32 s7_12;
    u32 sp_13;
    u32 t7_14;
    u32 s2_15;
    u32 s7_16;
    u32 t6_17;
    u32 s7_18;
    u32 sp_19;
    u32 t7_20;
    u32 s2_21;
    u32 t6_22;
    u32 t7_23;
    u32 v0;
    u32 s4_24;
    u32 s7_25;
    u32 sp_26;
    u32 t7_27;
    u32 sp_28;
    *(u32*)((((((s32)(a0) >> 0xa) << 5) + (u32)&D_0032d7c0) + (((a0 & 0x3ff) >> 5) << 2))) = (*(u32*)((((((s32)(a0) >> 0xa) << 5) + (u32)&D_0032d7c0) + (((a0 & 0x3ff) >> 5) << 2))) | (1 << (a0 & 0x1f)));
    if (((s32)((*(u8*)((*(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70)) + *(u16*)((((a0 & 0x3ff) << 1) + *(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70)))))) & 0xff)) != 0)) {
        s0 = (*(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70)) + *(u16*)((((a0 & 0x3ff) << 1) + *(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70)))));
        t6 = *(u8*)((*(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70)) + *(u16*)((((a0 & 0x3ff) << 1) + *(u32*)(((((s32)(a0) >> 0xa) << 2) + (u32)&D_0034ec70))))));
        for (;;) {
            switch ((t6 & 0xff)) {
            case 1:
                if (((s32)(((*(u8*)((s0 + 1)) & 0xff) >> 2)) != 0)) {
                    a0_0 = *(u16*)((s0 + 2));
                    s2 = 0;
                    s5 = 6;
                    s6 = (u32)&D_0032bb40;
                    s7 = ((s32)(a0) >> 0xa);
                    do {
                        func_00104cf0(((((s32)(a0) >> 0xa) * 0x180) + (*(u16*)(((s0 + (s2 * 8)) + 2)) * s5)) + s6, ((s0 + (s2 * 8)) + 2) + 2);
                        s2 = (s2 + 1);
                        t6_1 = *(u8*)((s0 + 1));
                    } while (((s32)(s2) < (s32)(((*(u8*)((s0 + 1)) & 0xff) >> 2))));
                    s4 = (((s32)(a0) >> 0xa) * 0x180);
                    s7_2 = s7;
                    t6_3 = t6_1;
                } else {
                    s7_2 = ((s32)(a0) >> 0xa);
                    sp = (u32)frame;
                    t6_3 = *(u8*)((s0 + 1));
                }
                s4_24 = s4;
                s7_25 = s7_2;
                sp_26 = sp;
                t7_27 = (t6_3 & 0xff);
                break;
            case 2:
                func_00196670(*(u16*)((s0 + 2)), *(u16*)(((s0 + 2) + 2)), *(u16*)(((s0 + 2) + 4)));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 3:
                func_00196698(*(u16*)((s0 + 2)));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 4:
                func_001966b0(*(u16*)((s0 + 2)));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 5:
                func_00196710(*(u16*)((s0 + 2)));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 6:
                func_001a9140((s32)(a0) >> 0xa, *(u16*)((s0 + 2)));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 7:
                if (((s32)((*(u8*)((s0 + 1)) & 0xff)) != 0)) {
                    s2_4 = 0;
                    s7_5 = ((s32)(a0) >> 0xa);
                    do {
                        func_001814b8(*(u16*)(((s0 + (s2_4 * 2)) + 2)));
                        s2_4 = (s2_4 + 1);
                        t6_6 = *(u8*)((s0 + 1));
                    } while (((s32)(((s32)(s2_4) < (s32)((*(u8*)((s0 + 1)) & 0xff)))) != 0));
                    s7_7 = s7_5;
                    t7 = (t6_6 & 0xff);
                } else {
                    s7_7 = ((s32)(a0) >> 0xa);
                    sp_8 = (u32)frame;
                    t7 = (*(u8*)((s0 + 1)) & 0xff);
                }
                s7_25 = s7_7;
                sp_26 = sp_8;
                t7_27 = t7;
                break;
            case 8:
                if (((s32)((*(u8*)((s0 + 1)) & 0xff)) != 0)) {
                    s2_9 = 0;
                    s7_10 = ((s32)(a0) >> 0xa);
                    do {
                        func_001a6c90(*(u16*)(((s0 + (s2_9 * 2)) + 2)));
                        s2_9 = (s2_9 + 1);
                        t6_11 = *(u8*)((s0 + 1));
                    } while (((s32)(((s32)(s2_9) < (s32)((*(u8*)((s0 + 1)) & 0xff)))) != 0));
                    s7_12 = s7_10;
                    t7_14 = (t6_11 & 0xff);
                } else {
                    s7_12 = ((s32)(a0) >> 0xa);
                    sp_13 = (u32)frame;
                    t7_14 = (*(u8*)((s0 + 1)) & 0xff);
                }
                s7_25 = s7_12;
                sp_26 = sp_13;
                t7_27 = t7_14;
                break;
            case 9:
                if (((s32)((*(u8*)((s0 + 1)) & 0xff)) != 0)) {
                    s2_15 = 0;
                    s7_16 = ((s32)(a0) >> 0xa);
                    do {
                        func_001a6cd0(*(u16*)(((s0 + (s2_15 * 2)) + 2)));
                        s2_15 = (s2_15 + 1);
                        t6_17 = *(u8*)((s0 + 1));
                    } while (((s32)(((s32)(s2_15) < (s32)((*(u8*)((s0 + 1)) & 0xff)))) != 0));
                    s7_18 = s7_16;
                    t7_20 = (t6_17 & 0xff);
                } else {
                    s7_18 = ((s32)(a0) >> 0xa);
                    sp_19 = (u32)frame;
                    t7_20 = (*(u8*)((s0 + 1)) & 0xff);
                }
                s7_25 = s7_18;
                sp_26 = sp_19;
                t7_27 = t7_20;
                break;
            case 12:
                if (((s32)((*(u8*)((s0 + 1)) & 0xff)) != 0)) {
                    s2_21 = 0;
                    do {
                        if ((func_00181500(*(u16*)(((s0 + (s2_21 * 2)) + 2))) == 0)) {
                            func_00181178(*(u16*)(((s0 + (s2_21 * 2)) + 2)));
                        }
                        s2_21 = (s2_21 + 1);
                        t6_22 = *(u8*)((s0 + 1));
                    } while (((s32)(((s32)(s2_21) < (s32)((*(u8*)((s0 + 1)) & 0xff)))) != 0));
                    t7_23 = (t6_22 & 0xff);
                } else {
                    t7_23 = (*(u8*)((s0 + 1)) & 0xff);
                }
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = t7_23;
                break;
            case 13:
                v0 = func_001b6d70((s32)(a0) >> 0xa);
                *(u8*)((v0 + 1)) = (*(u16*)((s0 + 2)) >> 8);
                *(u8*)((v0 + 2)) = *(u8*)((s0 + 2));
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            case 0:
            case 10:
            case 11:
            default:
                s7_25 = ((s32)(a0) >> 0xa);
                sp_26 = (u32)frame;
                t7_27 = (*(u8*)((s0 + 1)) & 0xff);
                break;
            }
            if (((s32)((*(u8*)(((s0 + (t7_27 << 1)) + 2)) & 0xff)) == 0)) break;
            s0 = ((s0 + (t7_27 << 1)) + 2);
            t6 = *(u8*)(s0);
        }
        sp_28 = sp_26;
    } else {
        sp_28 = (u32)frame;
    }
    func_001815d0(a0);
    func_00181670();
    func_001817f0(a0);
    func_00181778();
    func_001d59b0();
    func_001d5218(a0);
    func_001b8ce0(a0);
    func_001c0ba0(a0);
    func_001d7778();
    if ((a0 == 0x8d0)) {
        func_0019ef30();
    }
    return func_00196540(a0);
}
