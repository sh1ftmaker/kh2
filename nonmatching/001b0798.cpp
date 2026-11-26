// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016bc20(u32, u32, u32, f32) asm("func_0016bc20");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");
extern "C" void func_001ad990(u32, f32, f32) asm("func_001ad990");

// 0x001b0798 func_001b0798
// minilink-rodata 0x0036d970   (float literals live here in the original)
void func_001b0798(u32 a0, u32 a1, u32 a2, f32 fa0) asm("_ZN2YS6LOOKAT5startEPNS_3OBJEfj");
void func_001b0798(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u8 frame[16];
    u32 v0;
    u32 s1;
    if (((s32)(*(u32*)((a0 + 0xc))) >= 0)) {
        v0 = func_0016bc20(*(u32*)(a0), 0x14, 0xffffffff, fa0);
        if (((s32)(v0) != 0)) {
            *(u32*)((a0 + 4)) = 2;
            *(u32*)((a0 + 0xc)) = *(u16*)((v0 + 6));
            *(u32*)((a0 + 0x30)) = a1;
            s1 = (a0 + 0x40);
            func_0016af58((u32)frame, a1);
            if ((s1 != (u32)frame)) {
                *(u32*)((a0 + 0x50)) = 0;
                *(Q16*)(s1) = *(Q16*)((u32)frame);
            } else {
                *(u32*)((a0 + 0x50)) = 0;
            }
            func_001ad990(a0 + 0x10, *(f32*)((a0 + 0x50)), 1.0f);
            *(u32*)((a0 + 8)) = a2;
        }
    }
    return;
}
