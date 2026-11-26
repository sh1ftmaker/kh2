// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f110 asm("D_0035f110");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0026e340() asm("func_0026e340");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028d6e8(u32) asm("func_0028d6e8");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x0026ebc0 func_0026ebc0
u32 func_0026ebc0() asm("func_0026ebc0");
u32 func_0026ebc0() {
    u32 s1;
    u32 s0;
    if (((s32)(func_0028acc8(*(u32*)(&D_0035f10c))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035f10c));
    }
    s1 = 2;
    s0 = 0;
    do {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f104) + s0)) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)((s0 + *(u32*)(&D_0035f104))) + 0x14))))(s0 + *(u32*)(&D_0035f104));
        }
        s0 = (s0 + 0x1b4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(func_0028d6e8(*(u32*)(&D_0035f110))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f110)) + 0x14))))(*(u32*)(&D_0035f110));
    }
    return func_0026e340();
}
