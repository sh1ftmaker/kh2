// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00eeeeee asm("D_00eeeeee");

// 0x0014d948 func_0014d948
void func_0014d948(u32 a0) asm("func_0014d948");
void func_0014d948(u32 a0) {
    u32 t5;
    u32 t0;
    u32 t6;
    u32 t4;
    u32 t1;
    u32 a3_0;
    t5 = *(u16*)((a0 + 4));
    t0 = *(u32*)(a0);
    t6 = *(u16*)((a0 + 8));
    *(u64*)((a0 + 0x40)) = ((t0 | (((t5 >> 6) & 0xffff) << 0x10)) | (t6 << 0x18));
    *(u64*)((a0 + 0x20)) = (((u64)(3) << 0x3d) | 0x8001);
    t4 = *(u16*)((a0 + 6));
    *(u64*)((a0 + 0x50)) = 0x30000;
    *(u64*)((a0 + 0x28)) = (u32)&D_00eeeeee;
    *(u64*)((a0 + 0x38)) = 0x4e;
    t1 = *(u16*)((a0 + 0x1d4));
    *(u64*)((a0 + 0x60)) = 0x44;
    *(u64*)((a0 + 0x48)) = 0x4c;
    *(u64*)((a0 + 0x70)) = (((t5 + -1) << 0x10) | ((u64)((t4 + -1)) << 0x30));
    *(u64*)((a0 + 0x58)) = 0x47;
    a3_0 = *(u32*)((a0 + 0x1d0));
    *(u64*)((a0 + 0x80)) = (((0x800 - (t5 >> 1)) << 4) | ((u64)((0x800 - (t4 >> 1))) << 0x24));
    *(u64*)((a0 + 0x30)) = (a3_0 | (t1 << 0x18));
    *(u64*)((a0 + 0x68)) = 0x42;
    *(u16*)((a0 + 0x10)) = 7;
    *(u64*)((a0 + 0x78)) = 0x40;
    *(u64*)((a0 + 0x88)) = 0x18;
    *(u32*)(((a0 + 0x10) + 4)) = (a0 + 0x20);
    *(u8*)(((a0 + 0x10) + 3)) = 0;
}
