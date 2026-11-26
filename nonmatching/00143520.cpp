// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_00143648(u32, u32) asm("func_00143648");
extern "C" void func_0031b9e0(u32, u32) asm("func_0031b9e0");

// 0x00143520 func_00143520
// minilink-rodata 0x0036af3c   (float literals live here in the original)
f32 func_00143520(u32 a0, u32 a1) asm("_ZN2dk6Octree16getOnPolygonInfoERKN2kn7FVectorEPNS_13OnPolygonInfoE");
f32 func_00143520(u32 a0, u32 a1) {
    u8 frame[144];
    func_0031b9e0((u32)frame, a1);
    if ((((u32)frame + 0x30) != a0)) {
        *(Q16*)(((u32)frame + 0x30)) = *(Q16*)(a0);
    }
    *(u32*)(((u32)frame + 0x78)) = 0;
    *(u16*)(((u32)frame + 0x60)) = 0xffffffff;
    *(u16*)(((u32)frame + 0x62)) = 0xffffffff;
    *(u16*)(((u32)frame + 0x64)) = 0xffffffff;
    *(f32*)(((u32)frame + 0x6c)) = 100.0f;
    return func_00143648((u32)frame, a1);
}
