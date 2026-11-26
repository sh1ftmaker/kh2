// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_002b9728(u32, u32, u32, u32) asm("func_002b9728");
extern "C" u32 func_002bb510(u32) asm("func_002bb510");
extern "C" u32 func_002bc358(u32, u32) asm("func_002bc358");
extern "C" void func_002b95e8(u32, u32, u32, u32) asm("func_002b95e8");
extern "C" void func_002bb5f8(u32) asm("func_002bb5f8");
extern "C" void func_002bb8b0(u32) asm("func_002bb8b0");

// 0x002bbc90 func_002bbc90
void func_002bbc90(u32 a0) asm("func_002bbc90");
void func_002bbc90(u32 a0) {
    u32 t6;
    t6 = *(u8*)((a0 + 0x30));
    if ((t6 != 1)) {
        if (((s32)(t6) >= (s32)(2))) {
            if ((t6 != 2)) {
                if ((t6 != 3)) {
                    return;
                } else {
                    func_002bc358(*(u32*)((a0 + 0x14)), 1);
                    return;
                }
            } else {
                if ((func_002bb510(a0) != 0)) {
                    func_002bb5f8(a0);
                    func_002bb8b0(a0);
                    func_002b9728(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(s16*)((a0 + 0x28)), *(s16*)((a0 + 0x2c)));
                    return;
                } else {
                    func_002bc358(*(u32*)((a0 + 0x14)), 1);
                    return;
                }
            }
        } else {
            return;
        }
    } else {
        func_002bb8b0(a0);
        func_002b95e8(*(u32*)((a0 + 0x18)), *(u32*)((a0 + 0x10)), *(s16*)((a0 + 0x28)), *(s16*)((a0 + 0x2c)));
        *(u8*)((a0 + 0x30)) = 2;
        return;
    }
}
