// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f590 asm("D_0035f590");
extern "C" u32 D_0035f591 asm("D_0035f591");
extern "C" u32 func_00296b80(u32) asm("func_00296b80");
extern "C" void func_002969e0() asm("func_002969e0");

// 0x00296b08 func_00296b08
void func_00296b08() asm("func_00296b08");
void func_00296b08() {
    if (((s32)((*(u8*)(&D_0035f590) & 0xff)) != 0)) {
        if ((*(u8*)(&D_0035f591) == 0)) {
            if (((s32)((*(u8*)(&D_0035f590) & 0xff)) != 0)) {
                if (((s32)(*(u8*)(&D_0035f591)) == 0)) {
                    func_00296b80(1);
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
        func_002969e0();
        if (((s32)((*(u8*)(&D_0035f590) & 0xff)) != 0)) {
            if (((s32)(*(u8*)(&D_0035f591)) == 0)) {
                func_00296b80(1);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    }
}
