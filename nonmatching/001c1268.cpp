// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001050c8(u32, u32, u32, u32, u32) asm("func_001050c8");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001db710(u32, u32, u32, u32) asm("func_001db710");

// 0x001c1268 func_001c1268
u32 func_001c1268(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001c1268");
u32 func_001c1268(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 8)) = 0x10;
    *(u32*)((a0 + 4)) = a2;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    v0 = func_001db710(a0 + 0x14, func_001050c8(a0, a1, a2, a3, a4), a3, a4);
    *(u32*)((a0 + 0x34)) = 0;
    if (((s32)(a2) != 0)) {
        if ((a2 == 1)) {
            v0_0 = func_001050d8(a4 << 4);
            *(u32*)((a0 + 0x30)) = v0_0;
            v0 = v0_0;
        }
    } else {
        v0_1 = func_001050d8(a4 << 4);
        *(u32*)((a0 + 0x30)) = v0_1;
        v0 = v0_1;
    }
    return v0;
}
