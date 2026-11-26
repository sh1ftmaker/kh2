// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f12c asm("D_0035f12c");
extern "C" u32 func_001145b0(u32) asm("func_001145b0");
extern "C" u32 func_002570a0(u32) asm("func_002570a0");
extern "C" u32 func_00273180(u32, u32) asm("func_00273180");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00287bc0(u32) asm("func_00287bc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");

// 0x00273cb8 func_00273cb8
u32 func_00273cb8(u32 a0) asm("_ZN2Tz8CmCustom12ChageAbilityEi");
u32 func_00273cb8(u32 a0) {
    u32 s0;
    u32 s4;
    u32 s3;
    u32 v0;
    u32 s3_0;
    u32 v0_1;
    u32 s3_2;
    u32 v0_3;
    u32 v0_4;
    u32 t5;
    u32 t7;
    u32 t5_5;
    s0 = (func_00287bc0(a0) + -0x1a);
    s4 = func_00273180(4, 0xffffffff);
    if (((s32)(((u32)(s0) < (u32)(2))) != 0)) {
        s3 = *(u32*)((func_00281180(*(u32*)(&D_0035f010), func_002570a0(0x19)) + 0x244));
        v0 = func_0028b040(*(u32*)(&D_0035f01c));
        s3_2 = s3;
        v0_3 = v0;
    } else {
        s3_0 = *(u32*)((func_00281180(*(u32*)(&D_0035f010), func_002570a0(0x19)) + 0x244));
        v0_1 = func_002570a0(0x1a);
        s3_2 = s3_0;
        v0_3 = v0_1;
    }
    v0_4 = func_001145b0(*(s16*)(((v0_3 << 3) + *(u32*)(&D_0035f12c))));
    if (((s32)(a0) < 0)) {
        t5 = 0;
        t7 = *(u8*)((s4 + 5));
        do {
            if ((*(s8*)((((v0_3 << 3) + *(u32*)(&D_0035f12c)) + 3)) == *(u8*)(((s4 + (t5 * 8)) + 5)))) {
                break;
            }
            t5 = (t5 + 1);
            t7 = ((s32)(t5) < (s32)(3));
        } while ((t7 != 0));
        t5_5 = ((((s32)((a0 + 1)) < (s32)(3)) ? (a0 + 1) : 0) << 3);
    } else {
        t5_5 = (a0 << 3);
    }
    *(u8*)(((v0_4 + s3_2) + 0xf5)) = *(u8*)(((t5_5 + s4) + 5));
    *(u8*)((((v0_3 << 3) + *(u32*)(&D_0035f12c)) + 3)) = *(u8*)(((t5_5 + s4) + 5));
    return v0_4;
}
