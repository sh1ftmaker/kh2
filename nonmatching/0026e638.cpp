// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f114 asm("D_0035f114");
extern "C" u32 D_0035f11c asm("D_0035f11c");
extern "C" u32 D_0035f120 asm("D_0035f120");
extern "C" u32 func_00197e68() asm("func_00197e68");
extern "C" u32 func_001bba88() asm("func_001bba88");
extern "C" u32 func_001bbba8(u32) asm("func_001bbba8");
extern "C" u32 func_00242660(u32) asm("func_00242660");
extern "C" u32 func_00242790() asm("func_00242790");
extern "C" u32 func_00258af0(u32) asm("func_00258af0");
extern "C" u32 func_0026e840() asm("func_0026e840");
extern "C" u32 func_00287da0() asm("func_00287da0");
extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" void func_00136a18() asm("func_00136a18");
extern "C" void func_00225e28() asm("func_00225e28");
extern "C" void func_002427c0() asm("func_002427c0");
extern "C" void func_002892f8(u32) asm("func_002892f8");

// 0x0026e638 func_0026e638
u32 func_0026e638(u32 a0) asm("_ZN2Tz8Selector12CtrlSelectorEP4TASK");
u32 func_0026e638(u32 a0) {
    u32 s1;
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    u32 v0_12;
    u32 v0_13;
    u32 v0_14;
    u32 v0_15;
    u32 v0_16;
    u32 v0_17;
    u32 v0_18;
    u32 v0_19;
    u32 v0_20;
    u32 v0_21;
    s1 = func_00289380(*(u32*)(&D_0035f10c));
    func_002892f8(*(u32*)(&D_0035f10c));
    v0 = func_00287df0(s1, func_00289310(*(u32*)(&D_0035f10c)), 1, 0, 0);
    if ((s1 != 0xfffffffe)) {
        if (((s32)(((s32)(s1) < (s32)(-1))) != 0)) {
            if ((s1 != 0xfffffffc)) {
                switch (*(u16*)(((s1 << 1) + *(u32*)(&D_0035f114)))) {
                case 1:
                    v0_0 = func_00258af0(3);
                    v0 = v0_0;
                    break;
                case 3:
                case 4:
                    v0_1 = func_001bbba8(*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))));
                    v0 = v0_1;
                    break;
                case 5:
                case 19:
                    func_00225e28();
                    func_00136a18();
                    func_00242790();
                    func_002427c0();
                    v0_2 = func_00197e68();
                    v0 = v0_2;
                    break;
                case 6:
                    v0_3 = func_00242790();
                    v0 = v0_3;
                    break;
                case 10:
                    v0_4 = func_00258af0(4);
                    v0 = v0_4;
                    break;
                case 12:
                    v0_5 = func_001bba88();
                    if ((v0_5 != 0)) {
                        v0_6 = func_0026e840();
                        v0_5 = v0_6;
                    }
                    v0 = v0_5;
                    break;
                case 17:
                    v0_7 = func_00258af0(1);
                    v0 = v0_7;
                    break;
                case 0:
                case 2:
                case 7:
                case 8:
                case 9:
                case 11:
                case 13:
                case 14:
                case 15:
                case 16:
                case 18:
                default:
                    if ((*(u32*)(&D_0035f11c) != 0)) {
                        if (((s32)(*(u32*)((*(u32*)(&D_0035f11c) + 0x18))) != 0)) {
                            v0_8 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(&D_0035f11c) + 0x18))))(*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))), a0);
                            v0 = v0_8;
                        }
                    }
                    break;
                }
                *(u8*)(&D_0035f120) = s1;
                if ((*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))) != 0xc)) {
                    v0_9 = func_00287da0();
                    v0 = v0_9;
                }
            } else {
                func_00242790();
                v0_10 = func_00287da0();
                v0 = v0_10;
            }
        } else {
            if ((s1 != 0xffffffff)) {
                switch (*(u16*)(((s1 << 1) + *(u32*)(&D_0035f114)))) {
                case 1:
                    v0_11 = func_00258af0(3);
                    v0 = v0_11;
                    break;
                case 3:
                case 4:
                    v0_12 = func_001bbba8(*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))));
                    v0 = v0_12;
                    break;
                case 5:
                case 19:
                    func_00225e28();
                    func_00136a18();
                    func_00242790();
                    func_002427c0();
                    v0_13 = func_00197e68();
                    v0 = v0_13;
                    break;
                case 6:
                    v0_14 = func_00242790();
                    v0 = v0_14;
                    break;
                case 10:
                    v0_15 = func_00258af0(4);
                    v0 = v0_15;
                    break;
                case 12:
                    v0_16 = func_001bba88();
                    if ((v0_16 != 0)) {
                        v0_17 = func_0026e840();
                        v0_16 = v0_17;
                    }
                    v0 = v0_16;
                    break;
                case 17:
                    v0_18 = func_00258af0(1);
                    v0 = v0_18;
                    break;
                case 0:
                case 2:
                case 7:
                case 8:
                case 9:
                case 11:
                case 13:
                case 14:
                case 15:
                case 16:
                case 18:
                default:
                    if ((*(u32*)(&D_0035f11c) != 0)) {
                        if (((s32)(*(u32*)((*(u32*)(&D_0035f11c) + 0x18))) != 0)) {
                            v0_19 = ((u32(*)(u32, u32))(*(u32*)((*(u32*)(&D_0035f11c) + 0x18))))(*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))), a0);
                            v0 = v0_19;
                        }
                    }
                    break;
                }
                *(u8*)(&D_0035f120) = s1;
                if ((*(s16*)(((s1 << 1) + *(u32*)(&D_0035f114))) != 0xc)) {
                    v0_20 = func_00287da0();
                    v0 = v0_20;
                }
            }
        }
    } else {
        func_00242790();
        v0_21 = func_00287da0();
        v0 = v0_21;
    }
    if (((s32)(v0) != 0)) {
        return func_00242660(v0);
    } else {
        return v0;
    }
}
