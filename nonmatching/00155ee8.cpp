// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x00155ee8 dk::GAUGE_PLAYER::getDriveInSqNum()
u32 lift_00155ee8(u32 a0) asm("_ZN2dk12GAUGE_PLAYER15getDriveInSqNumEv");
u32 lift_00155ee8(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x34))) != 0)) {
        switch (*(u8*)((*(u32*)((*(u32*)((a0 + 0x34)) + 0x48c)) + 0x1af))) {
        case 2:
            return 0x32;
        case 3:
            return 0x8c;
        case 4:
            return 0x12;
        case 0:
        case 1:
        default:
            return 0x15;
        }
    } else {
        return 0x15;
    }
}
