// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00225738 asm("D_00225738");
extern "C" u32 func_00227a60(u32, u32) asm("func_00227a60");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_002b7148(u32) asm("func_002b7148");
extern "C" u32 func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");
extern "C" u32 func_002bd260(u32) asm("func_002bd260");
extern "C" u32 func_002bd2f0(u32, u32) asm("func_002bd2f0");
extern "C" void func_00136b48(u32, u32) asm("func_00136b48");
extern "C" void func_00136b60(u32, u32) asm("func_00136b60");
extern "C" void func_00136b78(u32, u32) asm("func_00136b78");
extern "C" void func_002ba298(u32) asm("func_002ba298");
extern "C" void func_002bd230(u32, u32) asm("func_002bd230");

// 0x00225898 func_00225898
u32 func_00225898(u32 a0) asm("_ZN2sa5EVENT12set_bgm_sendERNS_12BIN_SEND_BGMEP4TASK");
u32 func_00225898(u32 a0) {
    u32 v0;
    u32 v0_0;
    u32 loc_0;
    u32 s0;
    u32 s2;
    u32 s4;
    u32 s4_1;
    u32 s4_2;
    u32 v0_3;
    v0 = func_002282f0(*(u16*)((a0 + 4)));
    if (((s32)(v0) == 0)) {
        if (((s32)(func_002b7148(1)) != 0)) {
            func_002ba298(1);
        }
        v0_0 = func_00227a60(func_002bd260(*(s16*)((a0 + 8))), 6);
        loc_0 = 0;
        s0 = func_002bd2f0(*(u32*)((v0_0 + 0x14)), (u32)&loc_0);
        func_002bd230(loc_0, *(s16*)((a0 + 8)));
        s2 = *(s16*)((a0 + 6));
        if ((s2 == 2)) {
            s4 = func_00227a60(s0, 5);
            func_00136b48(0, *(s16*)((a0 + 8)));
            func_00136b48(1, *(s16*)((a0 + 8)));
            func_00136b60(0, *(s16*)((a0 + 8)));
            s2 = 0;
            s4_2 = s4;
        } else {
            s4_1 = func_00227a60(s0, 5);
            func_00136b48(s2, *(s16*)((a0 + 8)));
            s4_2 = s4_1;
        }
        func_00136b60(1, *(s16*)((a0 + 8)));
        func_00136b78(s2, 0);
        func_002baf48(s2, 2, *(u32*)((v0_0 + 0x14)), *(u32*)((v0_0 + 0x1c)), (u32)&D_00225738, v0_0);
        v0_3 = func_002baf48(0, 1, *(u32*)((s4_2 + 0x14)), *(u32*)((s4_2 + 0x1c)), (u32)&D_00225738, s4_2);
        v0 = v0_3;
    }
    return v0;
}
