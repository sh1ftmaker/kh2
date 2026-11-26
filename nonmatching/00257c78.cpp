// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bae0 asm("D_0032bae0");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f058 asm("D_0035f058");
extern "C" u32 D_0035f059 asm("D_0035f059");
extern "C" u32 D_0035f05a asm("D_0035f05a");
extern "C" u32 D_0035f060 asm("D_0035f060");
extern "C" u32 D_0035f064 asm("D_0035f064");
extern "C" u32 func_001a8bd0(u32) asm("func_001a8bd0");
extern "C" u32 func_001a8bf8(u32, u32) asm("func_001a8bf8");
extern "C" u32 func_00257000() asm("func_00257000");
extern "C" u32 func_0027aa78() asm("func_0027aa78");
extern "C" u32 func_00281100(u32) asm("func_00281100");
extern "C" u32 func_002813b8() asm("func_002813b8");

// 0x00257c78 func_00257c78
u32 func_00257c78() asm("_ZN2Tz5CmTop9ChkCurPosEv");
u32 func_00257c78() {
    u32 s4;
    u32 v0;
    u32 s1;
    u32 s2;
    u32 v0_0;
    u32 t5;
    u32 t5_1;
    u32 t5_2;
    u32 t5_3;
    u32 s1_4;
    u32 s6;
    u32 s0;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    s4 = func_00281100(*(u32*)(&D_0035f010));
    v0 = func_002813b8();
    s1 = 0;
    s2 = 0;
    do {
        s1 = (s1 + 1);
        s2 = (s2 + (((s32)(v0) >> s1) & 1));
    } while (((s32)(((s32)(s1) < (s32)(7))) != 0));
    v0_0 = func_0027aa78();
    if ((s4 == *(s8*)(&D_0035f058))) {
        if ((*(s8*)(&D_0035f059) == s2)) {
            if ((*(s8*)(&D_0035f05a) == ((u32)(0) < (u32)(v0_0)))) {
                if ((*(s8*)(&D_0035f064) != *(u8*)(&D_0032bae0))) {
                    t5 = 1;
                } else {
                    t5 = 0;
                }
                t5_1 = t5;
            } else {
                t5_1 = 1;
            }
            t5_2 = t5_1;
        } else {
            t5_2 = 1;
        }
        t5_3 = t5_2;
    } else {
        t5_3 = 1;
    }
    if (((s32)(t5_3) == 0)) {
        if ((s4 == *(s8*)(&D_0035f058))) {
            s1_4 = 0;
            do {
                s6 = func_001a8bd0(0xffffffff);
                s1_4 = (s1_4 + 1);
                s0 = func_001a8bf8((u32)&D_0035f060, 0);
                v0_6 = func_001a8bf8(s6, s1_4);
                if ((s0 != v0_6)) {
                    break;
                }
            } while (((s32)(((s32)(s1_4) < (s32)(4))) != 0));
            v0_0 = v0_6;
        }
        if (((s32)(t5_3) != 0)) {
            v0_7 = func_00257000();
            v0_0 = v0_7;
        }
    } else {
        v0_8 = func_00257000();
        v0_0 = v0_8;
    }
    *(u8*)(&D_0035f059) = s2;
    *(u8*)(&D_0035f05a) = ((u32)(0) < (u32)(v0_0));
    *(u8*)(&D_0035f058) = s4;
    *(u8*)(&D_0035f064) = *(u8*)(&D_0032bae0);
    return v0_0;
}
