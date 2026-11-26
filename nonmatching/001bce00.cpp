// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001bc720(u32) asm("func_001bc720");
extern "C" u32 func_001bc730(u32, u32) asm("func_001bc730");

// 0x001bce00 func_001bce00
void func_001bce00(u32 a0) asm("func_001bce00");
void func_001bce00(u32 a0) {
    u32 a1_0;
    u32 t7;
    if (((s32)(*(u32*)((a0 + 0x6c))) >= 0)) {
        if (((s32)(((s32)(*(u32*)((a0 + 0x6c))) < (s32)(*(u32*)((a0 + 8))))) == 0)) {
            func_001bc720(a0);
            return;
        } else {
            if ((*(u16*)(((a0 + (*(u32*)((a0 + 0x6c)) * 0xc)) + 0xe)) != *(u32*)((a0 + 0x70)))) {
                if (((s32)(*(u32*)((a0 + 8))) > 0)) {
                    a1_0 = 0;
                    t7 = *(u16*)((a0 + 0xe));
                    do {
                        if ((*(u16*)(((a0 + (a1_0 * 0xc)) + 0xe)) == *(u32*)((a0 + 0x70)))) {
                            func_001bc730(a0, a1_0);
                            return;
                        }
                        a1_0 = (a1_0 + 1);
                        t7 = ((s32)(a1_0) < (s32)(*(u32*)((a0 + 8))));
                    } while ((t7 != 0));
                }
                func_001bc730(a0, *(u32*)((a0 + 0x6c)));
                return;
            } else {
                return;
            }
        }
    } else {
        func_001bc720(a0);
        return;
    }
}
