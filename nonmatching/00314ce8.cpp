// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00314a50(u32, u32) asm("func_00314a50");
extern "C" u32 func_00314b00(u32, u32) asm("func_00314b00");
extern "C" u32 func_00314b90(u32, u32, u32, u32) asm("func_00314b90");
extern "C" u32 func_00317128(u32, u32, u32) asm("func_00317128");

// 0x00314ce8 func_00314ce8
u32 func_00314ce8(u32 a0, u32 a1, u32 a2) asm("func_00314ce8");
u32 func_00314ce8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 s1;
    u32 t6;
    u32 s1_1;
    u32 loc_0;
    u32 v0_2;
    u32 t7;
    u32 v0_3;
    u32 t7_4;
    if (((s32)(a0) != 0)) {
        v0 = func_00317128(a0, a1, a2);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    *(u32*)(a2) = v0_0;
    s2 = *(u8*)(a1);
    if ((s2 != 0xff)) {
        s1 = func_00314b90(s2, func_00314a50(s2, a0), a1 + 1, a2 + 4);
    } else {
        *(u32*)((a2 + 4)) = v0_0;
        s1 = (a1 + 1);
    }
    t6 = *(u8*)(s1);
    *(u8*)((a2 + 0x14)) = t6;
    s1_1 = (s1 + 1);
    if ((t6 != 0xff)) {
        v0_2 = func_00314b00(s1_1, (u32)&loc_0);
        t7 = loc_0;
        *(u32*)((a2 + 0xc)) = (v0_2 + t7);
        s1_1 = v0_2;
    } else {
        *(u32*)((a2 + 0xc)) = 0;
    }
    *(u8*)((a2 + 0x15)) = *(u8*)(s1_1);
    v0_3 = func_00314b00(s1_1 + 1, (u32)&loc_0);
    t7_4 = loc_0;
    *(u32*)((a2 + 0x10)) = (v0_3 + t7_4);
    return v0_3;
}
