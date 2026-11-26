// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003637b0 asm("D_003637b0");
extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" u32 func_0016a020(u32) asm("func_0016a020");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" u32 func_0016f7d0(u32, u32) asm("func_0016f7d0");
extern "C" u32 func_00182690(f32) asm("func_00182690");
extern "C" u32 func_00312db8(u32, u32) asm("func_00312db8");

// 0x002ed8e0 Ts::SUMMON_ENEMY::Get(YS::OBJ*)
u32 lift_002ed8e0(u32 a0) asm("_ZN2Ts12SUMMON_ENEMY3GetEPN2YS3OBJE");
u32 lift_002ed8e0(u32 a0) {
    u8 frame[48];
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u8 v0;
    u32 s0_0;
    u32 v0_1;
    u32 v0_2;
    s0 = (u32)&D_003637b0;
    s1 = 7;
    s2 = 0;
    s3 = (u32)frame;
    do {
        v0 = (func_0016f7d0(*(u32*)(s0), 0) & 1);
        if ((v0 == 0)) {
            if (((s32)(func_00182690((f32)((s32)(*(u8*)((func_0016e920(*(u32*)(s0)) + 0x54)))))) != 0)) {
                *(u32*)(s3) = *(u32*)(s0);
                s2 = (s2 + 1);
                s3 = (s3 + 4);
            }
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(s2) > 0)) {
        s0_0 = *(u32*)(&D_003638d0);
        *(u32*)(&D_003638d0) = (s0_0 * 0x10dcd);
        v0_2 = *(u32*)((((s32)((u64)(func_00312db8((u32)((s0_0 * 0x10dcd)), func_00312db8((u32)((s2 + -1)) + (u64)(1), (u32)(s2))))) << 2) + (u32)frame));
    } else {
        v0_1 = func_0016a020(a0);
        v0_2 = v0_1;
    }
    return v0_2;
}
