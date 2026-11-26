// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003617fc asm("D_003617fc");
extern "C" u32 _ZN8worldmap8Libretto13parseCallbackEPKN2YS4CODEEPNS1_8LIBRETTOE asm("_ZN8worldmap8Libretto13parseCallbackEPKN2YS4CODEEPNS1_8LIBRETTOE");
extern "C" f32 func_002c2168(u32) asm("func_002c2168");
extern "C" u32 func_001b8680(u32, u32) asm("func_001b8680");
extern "C" void func_002c20f8(u32) asm("func_002c20f8");
extern "C" void func_002edf68(u32) asm("func_002edf68");

// 0x002bd998 func_002bd998
f32 func_002bd998(u32 a0, u32 a1) asm("_ZN8worldmap8LibrettoC1Ei");
f32 func_002bd998(u32 a0, u32 a1) {
    u8 frame[16];
    u32 t5;
    *(u32*)(a0) = a1;
    *(u32*)((a0 + 4)) = func_001b8680(a1, (u32)&_ZN8worldmap8Libretto13parseCallbackEPKN2YS4CODEEPNS1_8LIBRETTOE);
    func_002edf68(a0 + 8);
    *(u32*)((a0 + 0x3c)) = 0;
    *(u32*)((a0 + 0x68)) = 0;
    *(u32*)(&D_003617fc) = a0;
    t5 = 3;
    do {
        *(u32*)(((a0 + ((t5 - 3) * -4)) + 0x2c)) = 0;
        t5 = (t5 + -1);
    } while (((s32)(t5) >= 0));
    *(u8*)((a0 + 0x40)) = 0;
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_002c20f8((u32)frame);
    return func_002c2168((u32)frame);
}
