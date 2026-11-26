// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" f32 func_002dd250(u32, u32) asm("func_002dd250");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");
extern "C" void func_002deb18(u32, u32) asm("func_002deb18");

// 0x002dfba8 func_002dfba8
// minilink-rodata 0x00375e78   (float literals live here in the original)
f32 func_002dfba8(u32 a0, u32 a1) asm("_ZN2Ti21ACTION_PO_JUMP_PLAYER5startEPN2YS3OBJE");
f32 func_002dfba8(u32 a0, u32 a1) {
    u32 s3;
    u32 v0;
    s3 = *(u32*)(&D_00361f60);
    *(f32*)((a0 + 0x18)) = (func_002dd250(*(u32*)(&D_00361f60), 0) * 0.009999999776482582f);
    func_002deb18(a0, a1);
    *(u8*)((a0 + 0x31)) = 0;
    *(u32*)((a0 + 0x48)) = 0;
    *(u8*)((a0 + 0x54)) = 0;
    v0 = func_0016c028(a1);
    if (((a0 + 0x70) != v0)) {
        *(Q16*)((a0 + 0x70)) = *(Q16*)(v0);
    }
    *(u32*)((a0 + 0x60)) = 0;
    *(f32*)((a0 + 0x18)) = (func_002dd250(s3, 0) * 0.009999999776482582f);
    *(f32*)((a0 + 0x58)) = 10.0f;
    *(f32*)((a0 + 0x5c)) = *(f32*)((func_002dc7c8(s3) + 0x90));
    *(f32*)((a0 + 0x3c)) = *(f32*)((func_002dc7c8(s3) + 4));
    *(f32*)((a0 + 0x40)) = *(f32*)((func_002dc7c8(s3) + 8));
    *(f32*)((a0 + 0x44)) = *(f32*)((func_002dc7c8(s3) + 0xc));
    return *(f32*)((func_002dc7c8(s3) + 0xc));
}
