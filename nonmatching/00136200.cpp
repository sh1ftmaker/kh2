// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00136020(u32) asm("func_00136020");
extern "C" u32 func_001dc5f0(u32, u32) asm("func_001dc5f0");

// 0x00136200 func_00136200
void func_00136200(u32 a0, u32 a1) asm("func_00136200");
void func_00136200(u32 a0, u32 a1) {
    u32 s2;
    u32 t6;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 0xc))) > 0)) {
        s2 = 0;
        t6 = *(u32*)((a0 + 0xc));
        do {
            if ((*(u32*)(((a0 + (s2 * 8)) + 0x10)) == a1)) {
                if ((*(u32*)(((a0 + (s2 * 8)) + 0x14)) == func_001dc5f0(a1, a1))) {
                    t7 = *(u32*)(((a0 + (s2 * 8)) + 0x14));
                    *(u32*)(((a0 + (s2 * 8)) + 0x10)) = 0;
                    *(u32*)(((a0 + (s2 * 8)) + 0x14)) = 0;
                    break;
                }
                t6 = *(u32*)((a0 + 0xc));
            }
            s2 = (s2 + 1);
        } while (((s32)(((s32)(s2) < (s32)(t6))) != 0));
    }
    func_00136020(a0);
    return;
}
