// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef60 asm("D_0035ef60");
extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f02c asm("D_0035f02c");
extern "C" u32 D_0035f030 asm("D_0035f030");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f056 asm("D_0035f056");
extern "C" u32 D_00372974 asm("D_00372974");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023ec18(u32, u32) asm("func_0023ec18");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_0027aa78() asm("func_0027aa78");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_00281128(u32, u32) asm("func_00281128");
extern "C" u32 func_002811b0(u32, u32) asm("func_002811b0");
extern "C" u32 func_002811e0(u32, u32) asm("func_002811e0");
extern "C" u32 func_00281238(u32, u32) asm("func_00281238");
extern "C" u32 func_00281538(u32, u32) asm("func_00281538");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" void func_0023d808(u32, u32) asm("func_0023d808");
extern "C" void func_0023e858(u32, u32, f32) asm("func_0023e858");
extern "C" void func_0023e8b8(u32, u32, f32) asm("func_0023e8b8");
extern "C" void func_0023e8d8(u32, u32, f32) asm("func_0023e8d8");
extern "C" void func_0023e958(u32, u32, u32, u32, u32, u32) asm("func_0023e958");
extern "C" void func_0023e9c8(u32, u32, u32) asm("func_0023e9c8");
extern "C" void func_0023e9e0(u32, u32, u32) asm("func_0023e9e0");
extern "C" void func_0023eac0(u32, u32, u32) asm("func_0023eac0");
extern "C" void func_0023eae0(u32, u32, u32, u32) asm("func_0023eae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");

// 0x00254ab8 Tz::CmTop::SetupPartyObj()
// minilink-rodata 0x00372878   (float literals live here in the original)
void lift_00254ab8() asm("_ZN2Tz5CmTop13SetupPartyObjEv");
void lift_00254ab8() {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s5;
    u32 s3;
    u32 s4;
    u32 s4_1;
    u32 s3_2;
    u32 s4_3;
    u32 s3_4;
    u32 s4_5;
    s32 s6;
    u32 s1;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f02c))) == 0)) {
        func_0028d8c0(*(u32*)(&D_0035f02c), 0x7533, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x2e, 0x2f, 0);
    }
    v0 = func_00256b68(0);
    if (((s32)(func_00139d78(v0)) == 0)) {
        func_0028d8c0(v0, 0x7532, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x74, 0xffffffff, 0);
    }
    v0_0 = func_00287dc0();
    if (((s32)(func_00139d78(v0_0)) == 0)) {
        func_0023d808(v0_0, 0x7538);
    }
    s0 = 0;
    s5 = 0;
    do {
        if ((s0 == 3)) {
            break;
        }
        if ((s0 != 1)) {
            if (((s32)(((s32)(s0) < (s32)(2))) != 0)) {
                if ((s0 != 0)) {
                    s3 = 0x10;
                    s4 = 0;
                } else {
                    s3 = 0x11;
                    s4 = 0x2f;
                }
                s3_2 = s3;
                s4_3 = s4;
            } else {
                if ((s0 != 2)) {
                    s4_1 = 0;
                } else {
                    s4_1 = 0xf3;
                }
                s3_2 = 0x10;
                s4_3 = s4_1;
            }
            s3_4 = s3_2;
            s4_5 = s4_3;
        } else {
            s3_4 = 0x10;
            s4_5 = 0x91;
        }
        s6 = ((s32)((((((s32)(func_00281100(*(u32*)(&D_0035f010))) < (s32)(4)) ? func_00281100(*(u32*)(&D_0035f010)) : 3) * 0x62) + -0x62)) / (s32)((((s32)(func_00281100(*(u32*)(&D_0035f010))) < (s32)(4)) ? func_00281100(*(u32*)(&D_0035f010)) : 3)));
        if (((s32)(func_00281128(*(u32*)(&D_0035f010), s0)) != 0)) {
            if (((s32)(func_00281538(*(u32*)(&D_0035f010), s0)) != 0)) {
                if (((s32)(func_0023ec18(v0_0, s0)) != 0)) {
                    if ((func_00281538(*(u32*)(&D_0035f010), s0) == 0)) {
                        s5 = 1;
                    }
                } else {
                    if (((s32)(s0) != 0)) {
                        s3_4 = ((func_002811e0(*(u32*)(&D_0035f010), s0) ^ 3) ? s3_4 : 0);
                    }
                    s1 = func_00281238(*(u32*)(&D_0035f010), s0);
                    ((void(*)(u32, u32, u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(v0_0) + 0x18))))(v0_0, s0, s1 | 0x20000000, 0x8b, 2, s4_5 - s6, *(u32*)(&D_00372974));
                    func_0023e858(v0_0, s0, -100.0f);
                    func_0023e8b8(v0_0, s0, 0.0f);
                    func_0023e8d8(v0_0, s0, 0.0f);
                    if ((func_002811b0(*(u32*)(&D_0035f010), s0) == 8)) {
                        func_0023eae0(v0_0, s0, 0x14, 0x20);
                    }
                    func_0023eac0(v0_0, s0, s3_4);
                    func_0023e958(v0_0, s0, 0x60, 0x60, 0x60, 0xffffffff);
                    func_0023e9c8(v0_0, s0, *(u32*)(&D_0035f02c));
                    if (((s32)(*(u8*)(&D_0035ef60)) != 0)) {
                        if (((s32)(func_00139d78(*(u32*)(&D_0035f030))) == 0)) {
                            func_0028d8c0(*(u32*)(&D_0035f030), s3_4, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0x7d, 0xffffffff, 0);
                        }
                        func_0023e9e0(v0_0, s0, *(u32*)(&D_0035f030));
                    }
                }
            } else {
                if ((func_00281538(*(u32*)(&D_0035f010), s0) == 0)) {
                    s5 = 1;
                }
            }
        }
        s0 = (s0 + 1);
    } while (((s32)(3) != 0));
    if (((s32)(s5) == 0)) {
        if (((s32)(*(u8*)(&D_0035f056)) == 0)) {
            *(u8*)(&D_0035f056) = 1;
        }
    }
    *(u8*)(&D_0035ef60) = s5;
    return;
}
