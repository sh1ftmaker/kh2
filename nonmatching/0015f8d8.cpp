// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034c720 asm("D_0034c720");
extern "C" u32 func_001433c0(u32, u32) asm("func_001433c0");
extern "C" void func_0015f9c8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0015f9c8");

// 0x0015f8d8 func_0015f8d8
u32 func_0015f8d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_0015f8d8");
u32 func_0015f8d8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    u8 frame[80];
    u32 v0;
    *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(a2);
    *(Q16*)(((u32)frame + 0x30)) = *(Q16*)(a3);
    *(Q16*)(((u32)frame + 0x40)) = *(Q16*)(a4);
    *(u32*)((u32)frame) = 0;
    *(u32*)(((u32)frame + 8)) = 0;
    *(u32*)(((u32)frame + 0x10)) = 0;
    func_0015f9c8(a0, 0, a1, (u32)frame + 0x20, (u32)frame + 0x30, (u32)frame + 0x40, a5, 0xffffffff);
    *(u32*)(a0) = (u32)&D_0034c720;
    if (((s32)(a6) == 0)) {
        *(u32*)((a0 + 0x1c8)) = (*(u32*)((a0 + 0x1c8)) | 2);
        *(u8*)((a0 + 0x1d0)) = 0xffffff80;
        *(u8*)((a0 + 0x1d1)) = 0xffffff80;
        *(u8*)((a0 + 0x1d2)) = 0xffffff80;
        *(u8*)((a0 + 0x1d3)) = 0xffffffff;
    }
    v0 = func_001433c0(a0 + 0x1c0, a6);
    *(u32*)((a0 + 0x1b0)) = 1;
    *(u32*)((a0 + 0x1f4)) = 0;
    *(u32*)((a0 + 0x2b8)) = ((*(u32*)((a0 + 0x2b8)) & 0xffffff7f) & 0xfffffeff);
    return v0;
}
