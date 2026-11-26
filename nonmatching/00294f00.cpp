// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f580 asm("D_0035f580");
extern "C" u32 D_0035f581 asm("D_0035f581");
extern "C" u32 func_00294f78(u32) asm("func_00294f78");
extern "C" void func_00294e48() asm("func_00294e48");

// 0x00294f00 func_00294f00
void func_00294f00() asm("func_00294f00");
void func_00294f00() {
    if (((s32)((*(u8*)(&D_0035f580) & 0xff)) != 0)) {
        if ((*(u8*)(&D_0035f581) == 0)) {
            if (((s32)((*(u8*)(&D_0035f580) & 0xff)) != 0)) {
                if (((s32)(*(u8*)(&D_0035f581)) == 0)) {
                    func_00294f78(1);
                    return;
                } else {
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        func_00294e48();
        if (((s32)((*(u8*)(&D_0035f580) & 0xff)) != 0)) {
            if (((s32)(*(u8*)(&D_0035f581)) == 0)) {
                func_00294f78(1);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    }
}
