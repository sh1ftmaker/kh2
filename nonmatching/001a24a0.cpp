// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001a80c8(u32, u32) asm("func_001a80c8");
extern "C" u32 func_001a8190(u32) asm("func_001a8190");
extern "C" u32 func_001c3150(u32, u32) asm("func_001c3150");

// 0x001a24a0 func_001a24a0
void func_001a24a0(u32 a0, u32 a1) asm("_ZN2YS5SHEET10apply_itemEi");
void func_001a24a0(u32 a0, u32 a1) {
    u32 v0;
    u32 t2;
    u32 t3;
    if (((s32)(a1) != 0)) {
        v0 = func_001a8190(func_001a80c8(a1, a1));
        if (((s32)(v0) != 0)) {
            *(u16*)((a0 + 0x188)) = (*(u16*)((a0 + 0x188)) + *(u8*)((v0 + 4)));
            *(u16*)((a0 + 0x18a)) = (*(u16*)((a0 + 0x18a)) + *(u8*)((v0 + 5)));
            *(u16*)((a0 + 0x18c)) = (*(u16*)((a0 + 0x18c)) + *(u8*)((v0 + 6)));
            *(u16*)((a0 + 0x18e)) = (*(u16*)((a0 + 0x18e)) + *(u8*)((v0 + 7)));
            t2 = 0;
            t3 = (a0 + 0x1a0);
            do {
                *(u8*)((t3 + 8)) = ((s32)(((*(u8*)((t3 + 8)) * *(u8*)(((v0 + t2) + 8))) + 0x63)) / 0x64);
                t2 = (t2 + 1);
                t3 = (t3 + 1);
            } while (((s32)(((s32)(t2) < (s32)(7))) != 0));
            func_001c3150(a0 + 0x1cc, *(u16*)((v0 + 2)));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
