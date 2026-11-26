// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00175538 asm("D_00175538");
extern "C" u32 D_01c5f4d0 asm("D_01c5f4d0");
extern "C" u32 D_01c5f4e0 asm("D_01c5f4e0");
extern "C" u32 func_00143e50(u32, u32, u32) asm("func_00143e50");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x00173348 func_00173348
u32 func_00173348(u32 a0) asm("_ZN2YS18trap_bg_get_normalEP8BD_VALUE");
u32 func_00173348(u32 a0) {
    u8 frame[16];
    u32 v0;
    if (((s32)(*(s8*)(&D_01c5f4d0)) == 0)) {
        *(u8*)(&D_01c5f4d0) = 1;
        func_002fd188((u32)&D_00175538);
    }
    v0 = func_00143e50((u32)frame, *(u16*)(a0), 0);
    if (((u32)frame != (u32)&D_01c5f4e0)) {
        *(Q16*)((u32)&D_01c5f4e0) = *(Q16*)((u32)frame);
    }
    *(u32*)(a0) = (u32)&D_01c5f4e0;
    return v0;
}
