// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01d9e730 asm("D_01d9e730");
extern "C" u32 D_01d9e740 asm("D_01d9e740");
extern "C" u32 D_01d9e750 asm("D_01d9e750");
extern "C" u32 D_01d9e760 asm("D_01d9e760");
extern "C" u32 D_01d9e770 asm("D_01d9e770");
extern "C" u32 D_01d9e7b0 asm("D_01d9e7b0");
extern "C" u32 D_01d9e7f0 asm("D_01d9e7f0");
extern "C" u32 D_01d9e800 asm("D_01d9e800");
extern "C" u32 D_01d9e810 asm("D_01d9e810");
extern "C" u32 D_01d9e820 asm("D_01d9e820");
extern "C" u32 D_01d9e830 asm("D_01d9e830");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" u32 D_01d9e8d0 asm("D_01d9e8d0");
extern "C" u32 D_01d9e8e0 asm("D_01d9e8e0");
extern "C" u32 D_01d9e8f0 asm("D_01d9e8f0");
extern "C" u32 D_01d9ea00 asm("D_01d9ea00");
extern "C" f32 func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3e20(u32, u32) asm("func_002f3e20");
extern "C" void func_002f3f98(u32, u32, u32, u32) asm("func_002f3f98");

// 0x001e6ed8 func_001e6ed8
// minilink-rodata 0x0036ef3c   (float literals live here in the original)
f32 func_001e6ed8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_Z16pppSetPartMatrixPA4_fS0_PfS1_");
f32 func_001e6ed8(u32 a0, u32 a1, u32 a2, u32 a3) {
    func_002f3f98((u32)&D_01d9e770, (u32)&D_01d9e730, a2, a3);
    *(Q16*)(&D_01d9e730) = *(Q16*)(a0);
    *(Q16*)(&D_01d9e740) = *(Q16*)((a0 + 0x10));
    *(Q16*)(&D_01d9e750) = *(Q16*)((a0 + 0x20));
    *(Q16*)(&D_01d9e760) = *(Q16*)((a0 + 0x30));
    *(Q16*)(&D_01d9e8c0) = *(Q16*)(a1);
    *(Q16*)(&D_01d9e8d0) = *(Q16*)((a1 + 0x10));
    *(Q16*)(&D_01d9e8e0) = *(Q16*)((a1 + 0x20));
    *(Q16*)(&D_01d9e810) = *(Q16*)(&D_01d9e7f0);
    *(Q16*)(&D_01d9e820) = *(Q16*)(&D_01d9e800);
    *(Q16*)(&D_01d9e8f0) = *(Q16*)((a1 + 0x30));
    *(Q16*)(&D_01d9e7f0) = *(Q16*)(a2);
    *(Q16*)(&D_01d9e800) = *(Q16*)(a3);
    *(f32*)(&D_01d9e830) = 53.0f;
    func_002f3e20((u32)&D_01d9e7b0, (u32)&D_01d9e730);
    return func_002f3d08((u32)&D_01d9ea00, (u32)&D_01d9e8c0, (u32)&D_01d9e730);
}
