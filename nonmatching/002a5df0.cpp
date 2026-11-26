// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f214 asm("D_0035f214");
extern "C" u32 D_0035f5ec asm("D_0035f5ec");
extern "C" u32 D_00374ba8 asm("D_00374ba8");
extern "C" u32 D_00374bd8 asm("D_00374bd8");
extern "C" u32 D_00374bdc asm("D_00374bdc");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192b30(u32) asm("func_00192b30");
extern "C" u32 func_00192c90(u32, u32) asm("func_00192c90");
extern "C" u32 func_00192cc0(u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_001d44d8(u32) asm("func_001d44d8");
extern "C" u32 func_001d4550(u32) asm("func_001d4550");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028b038(u32) asm("func_0028b038");
extern "C" u32 func_002944d0(u32) asm("func_002944d0");
extern "C" u32 func_002a6368(u32) asm("func_002a6368");
extern "C" u32 func_002aaa38(u32) asm("func_002aaa38");
extern "C" u32 func_002aaab8(u32) asm("func_002aaab8");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");
extern "C" void func_0028be78(u32, u32) asm("func_0028be78");
extern "C" void func_0028de08(u32, u32, u32) asm("func_0028de08");

// 0x002a5df0 func_002a5df0
u32 func_002a5df0() asm("_ZN2Tz8JmBattle13UpdateTopListEv");
u32 func_002a5df0() {
    u8 frame[16];
    u32 s7;
    u32 loc_0;
    u32 v0;
    u32 s1;
    u32 s0;
    u32 s6;
    u32 v0_0;
    u32 sp;
    u32 t6;
    u32 s4;
    u32 s2;
    u32 s6_1;
    u32 v0_2;
    u32 v0_3;
    u32 s1_4;
    u32 s3;
    u32 s1_5;
    u32 s3_6;
    u32 v0_7;
    u32 s0_8;
    u32 v0_9;
    u32 v0_10;
    u32 v0_11;
    s7 = func_002766d0();
    loc_0 = func_0028b038(*(u32*)(&D_0035f200));
    func_0028be78(*(u32*)(&D_0035f214), loc_0);
    func_002fde18(*(u32*)(&D_0035f5ec) + 0x1f, 0, 0xa0);
    v0 = func_002fde18(s7 + 0x110a0, 0, 0x280);
    if (((s32)((((s32)(*(s8*)(*(u32*)(&D_0035f5ec))) < (s32)(0xa)) ? *(s8*)(*(u32*)(&D_0035f5ec)) : 0xa)) > 0)) {
        s1 = (((s32)(*(s8*)(*(u32*)(&D_0035f5ec))) < (s32)(0xa)) ? *(s8*)(*(u32*)(&D_0035f5ec)) : 0xa);
        s0 = (s7 + 0xa998);
        do {
            s6 = (((s32)(*(s8*)(*(u32*)(&D_0035f5ec))) < (s32)(0xa)) ? *(s8*)(*(u32*)(&D_0035f5ec)) : 0xa);
            v0_0 = func_00138c10(s0, 2);
            s1 = (s1 + -1);
            s0 = (s0 + 0x198);
            v0 = v0_0;
        } while (((s32)(s1) != 0));
    } else {
        sp = (u32)frame;
    }
    if (((s32)(*(s8*)(*(u32*)(&D_0035f5ec))) > 0)) {
        t6 = loc_0;
        s4 = 0;
        s2 = 0;
        do {
            s6_1 = *(s8*)(*(u32*)(&D_0035f5ec));
            if (((s32)(s2) >= (s32)(t6))) {
                v0_2 = func_002a6368(*(s8*)(((*(u32*)(&D_0035f5ec) + s2) + 6)));
                v0_3 = func_002944d0(v0_2);
                if (((s32)(v0_3) != 0)) {
                    s1_4 = *(u16*)((v0_2 + 2));
                    s3 = func_001d4550(func_001d44d8(*(u16*)(v0_2)));
                    func_00192c90(func_00192048(s1_4), (s7 + (s4 << 6)) + 0x110a0);
                    s3_6 = s3;
                } else {
                    s1_5 = *(u16*)((v0_2 + 2));
                    func_0028de08(*(u16*)((v0_2 + 2)), (s7 + (s4 << 6)) + 0x110a0, 0x40);
                    s3_6 = 0;
                }
                v0_7 = func_002891b8(*(u32*)(&D_0035f200), s4);
                t6 = (s7 + (s4 << 6));
                t6 = (t6 + 0x110a0);
                *(u32*)((v0_7 + 0x198)) = t6;
                s0_8 = func_00192b30(func_00192cc0((*(u32*)(&D_0035f5ec) + (s4 << 4)) + 0x1f, (u32)&D_00374ba8, s3_6));
                v0_9 = func_00192c90(func_00192048(0x4b06), ((*(u32*)(&D_0035f5ec) + (s4 << 4)) + s0_8) + 0x1f);
                if (((s32)(v0_3) != 0)) {
                    v0_10 = func_002aaa38(*(s8*)(((*(u32*)(&D_0035f5ec) + s2) + 6)));
                    if (((s32)(v0_10) != 0)) {
                        s3_6 = ((s32)(func_002aaab8(*(s8*)(((*(u32*)(&D_0035f5ec) + s2) + 6)))) != 0) ? *(u32*)(&D_00374bdc) : *(u32*)(&D_00374bd8);
                        v0_11 = func_00138c10((s7 + (s4 * 0x198)) + 0xa998, s3_6);
                        v0_10 = v0_11;
                    }
                    v0_9 = v0_10;
                }
                s4 = (s4 + 1);
                s2 = (s2 + 1);
                v0 = v0_9;
            } else {
                s2 = (s2 + 1);
            }
            if (((s32)(((s32)(s2) < (s32)(s6_1))) == 0)) {
                break;
            }
            t6 = loc_0;
        } while (((s32)(((s32)(s2) < (s32)(s6_1))) != 0));
    }
    return v0;
}
