// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00120800(u32, u32, u32) asm("func_00120800");

// 0x001215b8 func_001215b8
u32 func_001215b8(u32 a0, u32 a1, u32 a2) asm("func_001215b8");
u32 func_001215b8(u32 a0, u32 a1, u32 a2) {
    u32 s1;
    u32 v0;
    u32 t4;
    u32 t4_0;
    s1 = *(u32*)((a0 + 4));
    v0 = func_00120800(a0, a1, a2);
    if (((s32)(*(u32*)((s1 + 0x1c))) > 0)) {
        t4 = 0;
        do {
            if ((a2 == 0xffffffff) || (((*(u32*)(((s1 + (t4 * 0x20)) + 0x20)) >> 6) & 0x1f) == a2)) {
                *(u8*)((a1 + t4)) = (*(u8*)((a1 + t4)) | 4);
            }
            t4 = (t4 + 1);
        } while (((s32)(((s32)(t4) < (s32)(*(u32*)((s1 + 0x1c))))) != 0));
    }
    if ((v0 != 0)) {
        if (((s32)(*(u32*)((v0 + 0x1c))) > 0)) {
            t4_0 = 0;
            do {
                if ((a2 == 0xffffffff) || ((*(u32*)(((v0 + (t4_0 * 0x20)) + 0x20)) & 0x1f) == a2)) {
                    *(u8*)((a1 + (*(u32*)((s1 + 0x1c)) + t4_0))) = (*(u8*)((a1 + (*(u32*)((s1 + 0x1c)) + t4_0))) | 4);
                }
                t4_0 = (t4_0 + 1);
            } while (((s32)(((s32)(t4_0) < (s32)(*(u32*)((v0 + 0x1c))))) != 0));
        }
    }
    return v0;
}
