// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035daf0 asm("D_0035daf0");
extern "C" u32 D_0035dd04 asm("D_0035dd04");
extern "C" u32 D_0035dd08 asm("D_0035dd08");
extern "C" u32 D_0035de20 asm("D_0035de20");
extern "C" u32 D_0035de28 asm("D_0035de28");
extern "C" u32 D_0035de60 asm("D_0035de60");
extern "C" u32 func_00170888(u32) asm("func_00170888");
extern "C" u32 func_00226268(u32, u32) asm("func_00226268");
extern "C" void func_0022c508(u32, u32) asm("func_0022c508");
extern "C" void func_0022e1f8(u32, u32) asm("func_0022e1f8");
extern "C" void func_0022f5a0(u32, u32, u32) asm("func_0022f5a0");
extern "C" void func_00232510(u32, u32) asm("func_00232510");
extern "C" void func_002331a0(u32, u32, u32, u32, u32) asm("func_002331a0");

// 0x00226090 sa::EVENT::read_ctrl()
void lift_00226090() asm("_ZN2sa5EVENT9read_ctrlEv");
void lift_00226090() {
    u32 a1_0;
    u32 t6;
    u32 a0_1;
    u32 t7;
    u32 t6_2;
    u32 t7_3;
    u32 s2;
    u32 s0;
    u32 s1;
    u32 t7_4;
    u32 t7_5;
    u32 t7_6;
    u32 s1_7;
    u32 t4;
    u32 t6_8;
    u32 t7_9;
    u32 t7_10;
    u32 t7_11;
    a1_0 = *(u32*)(&D_0035dd04);
    if (((s32)(((u32)(a1_0) < (u32)(0x40))) != 0)) {
        t6 = (a1_0 << 2);
        a0_1 = *(u32*)((t6 + (u32)&D_0035dd08));
        if (((s32)(a0_1) != 0)) {
            t7 = *(s16*)((a0_1 + 6));
            t6_2 = *(u32*)(&D_0035de20);
            if (((s32)(((s32)(t6_2) < (s32)(t7))) == 0)) {
                t7_3 = *(s16*)((a0_1 + 8));
                if (((s32)(((s32)(t7_3) < (s32)(t6_2))) == 0)) {
                    s2 = *(s16*)((a0_1 + 4));
                    if (((s32)(s2) > 0)) {
                        s0 = (a0_1 + 0xc);
                        s1 = 0;
                        t7_4 = *(u16*)(s0);
                        do {
                            t7_5 = *(u16*)(s0);
                            t7_6 = (t7_5 + -0x25);
                            switch ((t7_6 & 0xffff)) {
                            case 0:
                                func_002331a0(s0 + 0xa, a1_0 & 1, *(s16*)((s0 + 4)), *(s16*)((s0 + 6)), *(s16*)((s0 + 8)));
                                s0 = (s0 + *(s16*)((s0 + 2)));
                                break;
                            case 1:
                                func_00232510(s0 + 4, a1_0 & 1);
                                s0 = (s0 + *(s16*)((s0 + 2)));
                                break;
                            case 19:
                                func_0022f5a0(s0 + 8, *(s16*)((s0 + 4)), *(s16*)((s0 + 6)));
                                s0 = (s0 + *(s16*)((s0 + 2)));
                                break;
                            case 20:
                                func_0022e1f8(s0 + 6, *(s16*)((s0 + 4)));
                                s0 = (s0 + *(u16*)((s0 + 2)));
                                break;
                            case 25:
                                func_0022c508(s0 + 4, a1_0);
                                s0 = (s0 + *(u16*)((s0 + 2)));
                                break;
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10:
                            case 11:
                            case 12:
                            case 13:
                            case 14:
                            case 15:
                            case 16:
                            case 17:
                            case 18:
                            case 21:
                            case 22:
                            case 23:
                            case 24:
                            default:
                                break;
                            }
                            s1_7 = (s1 + 1);
                            s1 = s1_7;
                            t7_4 = ((s32)(s1_7) < (s32)(s2));
                        } while ((t7_4 != 0));
                    }
                    t4 = *(u32*)(&D_0035dd04);
                    t6_8 = (t4 << 2);
                    t7_9 = *(s16*)((*(u32*)((t6_8 + (u32)&D_0035dd08)) + 8));
                    t7_10 = (t7_9 + -1);
                    *(u32*)(&D_0035daf0) = t7_10;
                    if (((s32)(t7_10) < 0)) {
                        *(u32*)(&D_0035daf0) = *(u32*)(&D_0035de28);
                    }
                    t7_11 = (t4 + 1);
                    *(u32*)(&D_0035dd04) = t7_11;
                    *(u32*)(&D_0035de60) = t7_11;
                    if ((t7_11 != 1)) {
                        func_00170888(0);
                        return;
                    } else {
                        return;
                    }
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            func_00226268(a0_1, a1_0);
            return;
        }
    } else {
        return;
    }
}
