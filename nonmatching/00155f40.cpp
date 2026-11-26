// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a1de0(u32) asm("func_001a1de0");

// 0x00155f40 dk::GAUGE_PLAYER::getDriveLoopSqNum()
u32 lift_00155f40(u32 a0) asm("_ZN2dk12GAUGE_PLAYER17getDriveLoopSqNumEv");
u32 lift_00155f40(u32 a0) {
    u32 t4;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    t4 = *(u32*)((a0 + 0x34));
    if (((s32)(t4) != 0)) {
        t7 = *(u32*)((t4 + 0x48c));
        t7_0 = *(u8*)((t7 + 0x1af));
        switch (t7_0) {
        case 2:
            t7_0 = 0x33;
            break;
        case 3:
            t7_0 = 0x8d;
            break;
        case 4:
            t7_0 = 0x13;
            break;
        case 0:
        case 1:
        default:
            if (((s32)(func_001a1de0(*(u32*)((t4 + 0x48c)))) == 0)) {
                t7_1 = 0x17;
            } else {
                t7_1 = 0x1a;
            }
            t7_0 = t7_1;
            break;
        }
        t7_2 = t7_0;
    } else {
        t7_2 = 0x17;
    }
    return t7_2;
}
