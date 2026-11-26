// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ece8 asm("D_0034ece8");
extern "C" u32 func_00140d38(u32, u32) asm("func_00140d38");
extern "C" u32 func_001586b8() asm("func_001586b8");
extern "C" u32 func_00159700() asm("func_00159700");
extern "C" u32 func_00194898(u32) asm("func_00194898");

// 0x00178100 func_00178100
u32 func_00178100(u32 a0) asm("func_00178100");
u32 func_00178100(u32 a0) {
    if ((*(u32*)(&D_0034ece8) != 1)) {
        if (((s32)(*(u32*)(&D_0034ece8)) < (s32)(2))) {
            if (((s32)(*(u32*)(&D_0034ece8)) != 0)) {
                return;
            } else {
                return func_00140d38(a0, (u32)(0) < (u32)(func_00194898(a0)));
            }
        } else {
            if ((*(u32*)(&D_0034ece8) != 2)) {
                if ((*(u32*)(&D_0034ece8) == 3)) {
                    func_00140d38(a0, 0);
                    return func_001586b8();
                } else {
                    return;
                }
            } else {
                return func_00140d38(a0, 2);
            }
        }
    } else {
        func_00140d38(a0, 0);
        return func_00159700();
    }
}
