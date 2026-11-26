// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0016e898 asm("D_0016e898");
extern "C" u32 D_004f6330 asm("D_004f6330");
extern "C" u32 D_004f6340 asm("D_004f6340");
extern "C" u32 func_0017d538(u32, u32, f32) asm("func_0017d538");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x0016d5d0 func_0016d5d0
u32 func_0016d5d0(u32 a0) asm("_ZN2YS16trap_vector_rotyEP8BD_VALUE");
u32 func_0016d5d0(u32 a0) {
    u8 frame[16];
    u32 v0;
    if (((s32)(*(s8*)(&D_004f6330)) == 0)) {
        *(u8*)(&D_004f6330) = 1;
        func_002fd188((u32)&D_0016e898);
    }
    v0 = func_0017d538((u32)frame, *(u32*)(a0), *(f32*)((a0 + 4)));
    if (((u32)frame != (u32)&D_004f6340)) {
        *(Q16*)((u32)&D_004f6340) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_004f6340;
    return v0;
}
