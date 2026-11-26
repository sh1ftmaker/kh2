// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ebf8 asm("D_0035ebf8");
extern "C" u32 D_0035ec00 asm("D_0035ec00");
extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_003716b8 asm("D_003716b8");
extern "C" u32 func_00240108(u32) asm("func_00240108");
extern "C" u32 func_00240118(u32, u32, u32) asm("func_00240118");
extern "C" u32 func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x00240360 Tz::MCard::MakeFname(int)
void lift_00240360(u32 a0) asm("_ZN2Tz5MCard9MakeFnameEi");
void lift_00240360(u32 a0) {
    if ((a0 != 0xfffffffb)) {
        if ((a0 == 0xfffffffc)) {
            func_002ff2e8(*(u32*)(&D_0035ec88), (u32)&D_003716b8);
            return;
        } else {
            if ((a0 == 0xfffffffd)) {
                func_002ff2e8(*(u32*)(&D_0035ec88), *(u32*)(&D_0035ebf8));
                return;
            } else {
                if ((a0 == 0xfffffffe)) {
                    func_002ff2e8(*(u32*)(&D_0035ec88), *(u32*)(&D_0035ec00));
                    return;
                } else {
                    func_00240118(*(u32*)(&D_0035ec88), a0, func_00240108(a0));
                    return;
                }
            }
        }
    } else {
        return;
    }
}
