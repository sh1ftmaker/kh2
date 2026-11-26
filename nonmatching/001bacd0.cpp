// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034f240 asm("D_0034f240");
extern "C" u32 D_01d49324 asm("D_01d49324");
extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_00191990() asm("func_00191990");
extern "C" u32 func_001d5458(u32) asm("func_001d5458");

// 0x001bacd0 YS::MISSION::prepare()
u32 lift_001bacd0(u32 a0) asm("_ZN2YS7MISSION7prepareEv");
u32 lift_001bacd0(u32 a0) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_001708f8(a0 + 0x28, 0xffffffff);
    *(u32*)((a0 + 0x48)) = v0;
    s0 = *(u32*)((func_00168b38(v0, 2, 0) + 8));
    v0_0 = func_001d5458(*(u32*)((func_00168b38(v0, 2, 0) + 8)));
    *(u32*)((a0 + 8)) = s0;
    *(u32*)(&D_01d49324) = s0;
    if (((*(u16*)((*(u32*)((a0 + 8)) + 4)) & 1) != 0)) {
        v0_1 = func_00191990();
        v0_0 = v0_1;
    }
    if (((*(u16*)((*(u32*)((a0 + 8)) + 4)) & 0x20) != 0)) {
        *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 4);
    }
    if (((*(u16*)((*(u32*)((a0 + 8)) + 4)) & 0x40) != 0)) {
        *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 0x200);
    }
    if (((*(u16*)((*(u32*)((a0 + 8)) + 4)) & 0x80) != 0)) {
        *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 0x400);
    }
    if (((s32)((*(u16*)((*(u32*)((a0 + 8)) + 4)) & 0x100)) != 0)) {
        *(u32*)(&D_0034f240) = (*(u32*)(&D_0034f240) | 0x8000);
    }
    return v0_0;
}
