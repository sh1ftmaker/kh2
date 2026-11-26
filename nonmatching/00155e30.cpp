// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a8a0 asm("D_0034a8a0");
extern "C" u32 D_0034a8c8 asm("D_0034a8c8");
extern "C" u32 D_0034a8f0 asm("D_0034a8f0");
extern "C" u32 func_00155d80(u32) asm("func_00155d80");

// 0x00155e30 func_00155e30
u32 func_00155e30(u32 a0) asm("_ZN2dk12GAUGE_PLAYER15getDriveCounterEv");
u32 func_00155e30(u32 a0) {
    u32 t7;
    u32 t7_0;
    if (((s32)(*(u32*)((a0 + 0x34))) != 0)) {
        switch (*(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1af))) {
        case 2:
            func_00155d80(a0);
            t7 = (u32)&D_0034a8f0;
            break;
        case 3:
            func_00155d80(a0);
            t7 = (u32)&D_0034a8a0;
            break;
        case 0:
        case 1:
        case 4:
        default:
            func_00155d80(a0);
            t7 = (u32)&D_0034a8c8;
            break;
        }
        t7_0 = t7;
    } else {
        func_00155d80(a0);
        t7_0 = (u32)&D_0034a8c8;
    }
    return *(u32*)(((func_00155d80(a0) << 2) + t7_0));
}
