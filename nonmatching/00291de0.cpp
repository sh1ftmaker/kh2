// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00374498 asm("D_00374498");
extern "C" u32 func_001a1728(u32, u32, u32, u32, u32, u32, u32) asm("func_001a1728");
extern "C" u32 func_001a17c8(u32) asm("func_001a17c8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00291370(u32, u32) asm("func_00291370");
extern "C" u32 func_002920c0(u32, u32, u32, u32, u32) asm("func_002920c0");
extern "C" u32 func_00292148(u32, u32, u32, u32, u32) asm("func_00292148");
extern "C" u32 func_002921d0(u32, u32, u32, u32, u32) asm("func_002921d0");
extern "C" u32 func_00292258(u32, u32, u32, u32, u32) asm("func_00292258");
extern "C" u32 func_002922e0(u32, u32, u32, u32, u32, u32) asm("func_002922e0");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00192cc0(u32, u32, u32) asm("func_00192cc0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x00291de0 func_00291de0
u32 func_00291de0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("_ZN2Tz8ItemStat14UpdateNextStatEiiiiii");
u32 func_00291de0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u32 loc_4;
    u32 loc_8;
    u32 loc_c;
    u32 s7;
    u32 s3;
    u32 s6;
    u32 t7;
    u8 t7_0;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 loc_0;
    u32 v0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    loc_4 = a1;
    loc_8 = a2;
    loc_c = a3;
    s7 = func_001a1728(a4, a5, a2, a3, a4, a5, a6);
    if ((loc_4 != 2)) {
        func_00291370(a0, 2);
    }
    s3 = 0;
    s6 = 0;
    t7 = ((s32)(a6) >> 0);
    do {
        t7_0 = ((t7 ^ 1) & 1);
        if ((t7_0 == 0)) {
            if ((s3 != 8)) {
                if ((loc_4 == 2)) {
                    s2 = ((a0 + (s6 * 0x1b4)) + 0x888);
                } else {
                    s2 = ((a0 + (s6 * 0x1b4)) + 4);
                }
                s1 = func_0023aa18(s2 + 0x18);
                s0 = func_0023aa38(s2 + 0x18);
                func_0028dcc0((a0 + ((s6 + 0xa) * 0x1b4)) + 0x110c, s2);
                func_00138c68((a0 + ((s6 + 0xa) * 0x1b4)) + 0x110c, s1, s0);
                loc_0 = 0xffffffff;
                switch (s3) {
                case 0:
                    v0 = func_002920c0(a0, (u32)&loc_0, loc_8, loc_c, s7);
                    v0_8 = v0;
                    break;
                case 1:
                    v0_1 = func_00292148(a0, (u32)&loc_0, loc_8, loc_c, s7);
                    v0_8 = v0_1;
                    break;
                case 2:
                    v0_2 = func_002921d0(a0, (u32)&loc_0, loc_8, loc_c, s7);
                    v0_8 = v0_2;
                    break;
                case 3:
                    v0_3 = func_00292258(a0, (u32)&loc_0, loc_8, loc_c, s7);
                    v0_8 = v0_3;
                    break;
                case 4:
                    v0_4 = func_002922e0(a0, (u32)&loc_0, loc_8, loc_c, 1, s7);
                    v0_8 = v0_4;
                    break;
                case 5:
                    v0_5 = func_002922e0(a0, (u32)&loc_0, loc_8, loc_c, 2, s7);
                    v0_8 = v0_5;
                    break;
                case 6:
                    v0_6 = func_002922e0(a0, (u32)&loc_0, loc_8, loc_c, 3, s7);
                    v0_8 = v0_6;
                    break;
                case 7:
                    v0_7 = func_002922e0(a0, (u32)&loc_0, loc_8, loc_c, 4, s7);
                    v0_8 = v0_7;
                    break;
                case 8:
                default:
                    v0_8 = 1;
                    break;
                }
                *(u32*)((((a0 + ((s6 + 0xa) * 0x1b4)) + 0x110c) + 0x1b0)) = 1;
                func_00138c10((a0 + ((s6 + 0xa) * 0x1b4)) + 0x110c, func_00291370(a0, v0_8 ? 0 : 3));
                func_00192cc0((a0 + ((s6 + 0xa) << 3)) + 0x2a98, (u32)&D_00374498, loc_0);
                *(u32*)((((a0 + ((s6 + 0xa) * 0x1b4)) + 0x110c) + 0x198)) = ((a0 + ((s6 + 0xa) << 3)) + 0x2a98);
                s6 = (s6 + 1);
            }
        }
        s3 = (s3 + 1);
        t7 = ((s32)(a6) >> s3);
    } while (((s32)(t7) != 0));
    return func_001a17c8(s7);
}
