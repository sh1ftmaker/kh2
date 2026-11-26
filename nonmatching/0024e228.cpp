// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035ede4 asm("D_0035ede4");
extern "C" u32 D_0035edf4 asm("D_0035edf4");
extern "C" u32 D_0035edf8 asm("D_0035edf8");
extern "C" u32 D_00372140 asm("D_00372140");
extern "C" u32 D_00372150 asm("D_00372150");
extern "C" u32 D_003722e0 asm("D_003722e0");
extern "C" u32 D_003722e8 asm("D_003722e8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00192b30(u32) asm("func_00192b30");
extern "C" u32 func_00192c40(u32, u32) asm("func_00192c40");
extern "C" u32 func_00192c90(u32, u32) asm("func_00192c90");
extern "C" u32 func_00192cc0(u32, u32, u32, u32, u32) asm("func_00192cc0");
extern "C" u32 func_001d56c8(u32) asm("func_001d56c8");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_0014ca80(u32, u32, u32, u32, u32) asm("func_0014ca80");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0024e228 Tz::TTPT::UpdateScore()
u32 lift_0024e228() asm("_ZN2Tz4TTPT11UpdateScoreEv");
u32 lift_0024e228() {
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 t7;
    u32 v0_1;
    u32 loc_0;
    u32 loc_4;
    u32 loc_8;
    u32 loc_c;
    u32 s2;
    u32 v0_2;
    u32 a3_3;
    u32 t0;
    u32 s2_4;
    u32 a3_5;
    u32 t0_6;
    u32 s2_7;
    u32 v0_8;
    v0 = func_00139d78(*(u32*)(&D_0035ede4));
    if (((s32)(v0) != 0)) {
        func_002fde18(*(u32*)(&D_0035edf8), 0, 0x20);
        s1 = *(u32*)(&D_0035edf8);
        v0_0 = func_002891e8(*(u32*)(&D_0035edcc));
        if (((s32)(*(u32*)(&D_0035edf4)) == 0)) {
            t7 = (u32)&D_003722e0;
        } else {
            t7 = (u32)&D_003722e8;
        }
        v0_1 = func_001d56c8(*(u8*)((v0_0 + t7)));
        if ((*(u8*)(v0_1) == 4)) {
            s2 = func_00192c40(func_00192048(0xcb99), s1);
            func_0014ca80(*(u32*)((v0_1 + 4)), (u32)&loc_0, (u32)&loc_4, (u32)&loc_8, (u32)&loc_c);
            v0_2 = func_00192cc0(s1 + s2, (u32)&D_00372140, loc_4, loc_8, loc_c);
            v0_1 = v0_2;
        } else {
            if ((*(u8*)(v0_1) == 3)) {
                s2_4 = func_00192b30(func_00192cc0(s1, (u32)&D_00372150, *(u32*)((v0_1 + 4)), a3_3, t0));
            } else {
                if ((*(u8*)(v0_1) == 6)) {
                    s2_7 = func_00192b30(func_00192cc0(s1, (u32)&D_00372150, *(u32*)((v0_1 + 4)), a3_5, t0_6));
                }
            }
            v0_8 = func_00192c90(func_00192048(0xcb98), s1 + s2_4);
            v0_1 = v0_8;
        }
        v0 = v0_1;
    }
    return v0;
}
