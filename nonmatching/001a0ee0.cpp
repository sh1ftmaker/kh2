// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" u32 func_001c0c80(u32, u32) asm("func_001c0c80");
extern "C" u32 func_001c0cc8(u32, u32) asm("func_001c0cc8");

// 0x001a0ee0 func_001a0ee0
void func_001a0ee0(u32 a0, u32 a1) asm("_ZN2YS5SHEET3setEPKNS_10ENEMYPARAME");
void func_001a0ee0(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 t2;
    u32 t4;
    u32 t5;
    u32 t0;
    u32 t1;
    u32 t2_2;
    if (((s32)(*(u16*)((a1 + 2))) != 0)) {
        v0 = func_001c0c80(*(u16*)((a1 + 2)), a1);
        v0_1 = v0;
    } else {
        v0_0 = func_001c0cc8(*(u16*)((a1 + 2)), a1);
        v0_1 = v0_0;
    }
    t2 = 0x1f;
    t4 = (a1 + 4);
    t5 = a0;
    do {
        *(u32*)(t5) = ((s32)(((*(u16*)(v0_1) * *(u16*)(t4)) + 0x63)) / 0x64);
        *(u32*)((t5 + 4)) = ((s32)(((*(u16*)(v0_1) * *(u16*)(t4)) + 0x63)) / 0x64);
        *(u32*)((t5 + 8)) = 0;
        t2 = (t2 + -1);
        t4 = (t4 + 2);
        t5 = (t5 + 0xc);
    } while (((s32)(t2) >= 0));
    *(u16*)((a0 + 0x188)) = *(u16*)((v0_1 + 2));
    *(u16*)((a0 + 0x18c)) = *(u16*)((v0_1 + 4));
    *(u32*)((a0 + 0x198)) = *(u16*)((v0_1 + 6));
    *(u32*)((a0 + 0x19c)) = *(u16*)((v0_1 + 8));
    *(u32*)((a0 + 0x1a0)) = ((s32)(((*(u32*)((a0 + 4)) * *(u16*)((a1 + 0x44))) + 0x270f)) / 0x2710);
    *(u32*)((a0 + 0x1a4)) = ((s32)(((*(u32*)((a0 + 4)) * *(u16*)((a1 + 0x46))) + 0x270f)) / 0x2710);
    t0 = (a0 + 0x1a8);
    t1 = (a1 + 0x48);
    t2_2 = 6;
    do {
        *(u8*)(t0) = *(u8*)(t1);
        t0 = (t0 + 1);
        t1 = (t1 + 2);
        t2_2 = (t2_2 + -1);
    } while (((s32)(t2_2) >= 0));
    *(f32*)((a0 + 0x1c4)) = *(f32*)((*(u32*)(&D_00352130) + 0x12c));
    *(u32*)((a0 + 0x264)) = a1;
    return;
}
