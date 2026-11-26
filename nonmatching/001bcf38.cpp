// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"


// 0x001bcf38 YS::COMMAND_MENU::is_shortcut_menu()
u32 lift_001bcf38(u32 a0) asm("_ZN2YS12COMMAND_MENU16is_shortcut_menuEv");
u32 lift_001bcf38(u32 a0) {
    if ((*(u32*)(a0) != 0xa)) {
        if (((s32)(((s32)(*(u32*)(a0)) < (s32)(0xb))) != 0)) {
            if ((*(u32*)(a0) != 5)) {
                return 0;
            } else {
                return 1;
            }
        } else {
            if (((s32)(((u32)((*(u32*)(a0) + -0xd)) < (u32)(6))) != 0)) {
                return 1;
            } else {
                return 0;
            }
        }
    } else {
        return 1;
    }
}
