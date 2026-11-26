// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00160fd0(u32) asm("func_00160fd0");
extern "C" u32 func_00161000(u32) asm("func_00161000");

// 0x002c1cb0 func_002c1cb0
u32 func_002c1cb0(u32 a0, u32 a1) asm("func_002c1cb0");
u32 func_002c1cb0(u32 a0, u32 a1) {
    if ((a1 != 1)) {
        if ((a1 != 2)) {
            func_00161000(*(u8*)(a0));
            func_00161000(*(u8*)((a0 + 1)));
            return func_00161000(*(u8*)((a0 + 2)));
        } else {
            func_00161000(*(u8*)(a0));
            func_00160fd0(*(u8*)((a0 + 1)));
            return func_00160fd0(*(u8*)((a0 + 2)));
        }
    } else {
        func_00160fd0(*(u8*)(a0));
        func_00161000(*(u8*)((a0 + 1)));
        return func_00161000(*(u8*)((a0 + 2)));
    }
}
