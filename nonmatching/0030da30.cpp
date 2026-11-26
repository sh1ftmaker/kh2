// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0036617c asm("D_0036617c");
extern "C" u32 D_01e38a80 asm("D_01e38a80");
extern "C" u32 D_01e38ac0 asm("D_01e38ac0");
extern "C" u32 D_01e38b40 asm("D_01e38b40");
extern "C" u32 func_003094b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_003094b8");

// 0x0030da30 func_0030da30
u32 func_0030da30(u32 a0, u32 a1) asm("func_0030da30");
u32 func_0030da30(u32 a0, u32 a1) {
    u32 v0;
    u32 t0;
    u32 t0_0;
    u32 loc_0;
    u32 v0_1;
    u32 a0_2;
    u32 t0_3;
    u32 v0_4;
    u32 v0_5;
    if (((s32)(*(u32*)(&D_0036617c)) < 0)) {
        v0_5 = 0;
    } else {
        *(u8*)(((u32)&D_01e38b40 + 4)) = *(u8*)(a0);
        v0 = (*(u8*)(a0) << 0x18);
        if (((s32)(v0) != 0)) {
            t0 = 1;
            do {
                t0_0 = (t0 + 1);
                if (((s32)(((s32)(t0_0) < (s32)(0xfc))) == 0)) {
                    if ((t0_0 == 0xfc)) {
                        *(u32*)(&D_01e38b40) = a1;
                        *(u8*)(((u32)&D_01e38b40 + 0xff)) = 0;
                        t0_0 = 0xfb;
                    } else {
                        *(u32*)(&D_01e38b40) = a1;
                    }
                    loc_0 = 0;
                    *(u8*)(((u32)&D_01e38b40 + 0xff)) = 0;
                    v0_1 = ((s32)(func_003094b8((u32)&D_01e38a80, 3, 0, (u32)&D_01e38b40, t0_0 + 5, (u32)&D_01e38ac0, 4, 0)) < 0) ? 0xffffffff : *(u32*)(&D_01e38ac0);
                    return v0_1;
                }
                *(u8*)((((u32)&D_01e38b40 + t0_0) + 4)) = *(u8*)((a0 + t0_0));
                t0 = t0_0;
                a0_2 = (*(u8*)((a0 + t0_0)) << 0x18);
            } while ((a0_2 != 0));
            t0_3 = t0;
        } else {
            t0_3 = 0;
        }
        if ((t0_3 == 0xfc)) {
            *(u32*)(&D_01e38b40) = a1;
            *(u8*)(((u32)&D_01e38b40 + 0xff)) = 0;
            t0_3 = 0xfb;
        } else {
            *(u32*)(&D_01e38b40) = a1;
        }
        loc_0 = 0;
        *(u8*)(((u32)&D_01e38b40 + 0xff)) = 0;
        v0_4 = ((s32)(func_003094b8((u32)&D_01e38a80, 3, 0, (u32)&D_01e38b40, t0_3 + 5, (u32)&D_01e38ac0, 4, 0)) < 0) ? 0xffffffff : *(u32*)(&D_01e38ac0);
        v0_5 = v0_4;
    }
    return v0_5;
}
