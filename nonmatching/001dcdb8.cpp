// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");
extern "C" u32 D_00352ae8 asm("D_00352ae8");
extern "C" u32 D_0036e7f0 asm("D_0036e7f0");
extern "C" u32 D_01d5bb00 asm("D_01d5bb00");
extern "C" u32 D_01d5bb04 asm("D_01d5bb04");
extern "C" u32 D_01d5bb08 asm("D_01d5bb08");
extern "C" u32 func_001e6d38(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001e6d38");

// 0x001dcdb8 func_001dcdb8
u32 func_001dcdb8(u32 a0, u32 a1, u32 a2) asm("func_001dcdb8");
u32 func_001dcdb8(u32 a0, u32 a1, u32 a2) {
    u8 frame[80];
    u32 v0;
    u32 v0_0;
    *(u32*)(&D_01d5bb00) = a0;
    *(u32*)(&D_01d5bb04) = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(a0))))(a0, a1, 0);
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)(&D_01d5bb00)))))(*(u32*)(&D_01d5bb00), a2, 0);
    *(u32*)(&D_01d5bb08) = v0;
    *(u32*)(((u32)frame + 0x10)) = 0;
    *(u32*)((u32)frame) = 0x70;
    *(u64*)(((u32)frame + 0x40)) = 0;
    *(u32*)(((u32)frame + 8)) = 0xd8;
    *(u64*)(((u32)frame + 0x18)) = 0x800d8;
    *(u64*)(((u32)frame + 0x20)) = 0x31000070;
    *(u64*)(((u32)frame + 0x28)) = (((u64)(0x73) << 0x28) | 0x7000);
    *(u64*)(((u32)frame + 0x30)) = *(u64*)(&D_0036e7f0);
    *(u64*)(((u32)frame + 0x38)) = 0x5000d;
    *(u64*)(((u32)frame + 0x48)) = 1;
    v0_0 = func_001e6d38(*(u32*)(&D_01d5bb04), a1, v0, a2, 0x200, 0x1c0, 0x200, 0x1a0);
    *(u32*)(&D_00352ae0) = 0;
    *(u32*)(((u32)&D_00352ae0 + 4)) = 0;
    *(u32*)(&D_00352ae8) = 0;
    return v0_0;
}
