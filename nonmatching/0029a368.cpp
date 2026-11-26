// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f5a8 asm("D_0035f5a8");
extern "C" u32 D_0035f5a9 asm("D_0035f5a9");
extern "C" u32 func_0029a3e0(u32) asm("func_0029a3e0");
extern "C" void func_0029a2a0() asm("func_0029a2a0");

// 0x0029a368 func_0029a368
void func_0029a368() asm("func_0029a368");
void func_0029a368() {
    if (((s32)((*(u8*)(&D_0035f5a8) & 0xff)) != 0)) {
        if ((*(u8*)(&D_0035f5a9) == 0)) {
            if (((s32)((*(u8*)(&D_0035f5a8) & 0xff)) != 0)) {
                if (((s32)(*(u8*)(&D_0035f5a9)) == 0)) {
                    func_0029a3e0(1);
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
        func_0029a2a0();
        if (((s32)((*(u8*)(&D_0035f5a8) & 0xff)) != 0)) {
            if (((s32)(*(u8*)(&D_0035f5a9)) == 0)) {
                func_0029a3e0(1);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    }
}
