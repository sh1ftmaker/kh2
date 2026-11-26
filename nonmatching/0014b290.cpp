// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349b40 asm("D_00349b40");
extern "C" u32 D_00535310 asm("D_00535310");
extern "C" void func_0014b150(u32) asm("func_0014b150");

// 0x0014b290 ctarget_0014b290(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0014b290(u32 a0) asm("_Z16ctarget_0014b290jjjj");
void lift_0014b290(u32 a0) {
    u32 t6;
    u32 t7;
    u32 a3_0;
    u32 t5;
    u32 t2;
    u32 t3;
    func_0014b150(a0);
    *(u32*)(a0) = (u32)&D_00349b40;
    t6 = *(u8*)((a0 + 0x12));
    t7 = *(u8*)((a0 + 0x11));
    a3_0 = *(u8*)((a0 + 0x10));
    *(u64*)((a0 + 0x20)) = (((u64)(0xffffffff) << 0x3f) | 1);
    *(u64*)((a0 + 0x30)) = 0;
    *(u64*)((a0 + 0x60)) = 0;
    *(u64*)((a0 + 0x38)) = 0x3f;
    *(u64*)((a0 + 0x28)) = ((0x7777 << 0x11) | 0xeeee);
    t5 = *(s16*)((a0 + 0xa));
    *(u64*)((a0 + 0x40)) = 0x800d8;
    t2 = *(s16*)((a0 + 8));
    *(u64*)((a0 + 0x48)) = 0x4c;
    *(u64*)((a0 + 0x58)) = 0x4e;
    *(u64*)((a0 + 0x50)) = 0x31000070;
    *(u64*)((a0 + 0x70)) = 0x60;
    *(u64*)((a0 + 0x68)) = 6;
    *(u64*)((a0 + 0x80)) = 0x30000;
    *(u64*)((a0 + 0x78)) = 0x14;
    t3 = *(u8*)((a0 + 0x13));
    *(u64*)((a0 + 0x90)) = 0x44;
    *(u64*)((a0 + 0x88)) = 0x47;
    *(u64*)((a0 + 0xa0)) = 5;
    *(u64*)((a0 + 0x98)) = 0x42;
    *(u64*)((a0 + 0xc8)) = (((a3_0 | (u64)(1)) | ((t6 << 0x10) | (t7 << 8))) | (t3 << 0x18));
    *(u64*)((a0 + 0xe0)) = 0x80008;
    *(u64*)((a0 + 0xa8)) = 8;
    *(u64*)((a0 + 0xd0)) = 0x80008;
    *(u64*)((a0 + 0xb0)) = (((u64)(0x19) << 0x3a) | 0x8001);
    *(u64*)((a0 + 0xd8)) = ((((t2 << 4) + 0x7000) | (((t5 << 4) + 0x7300) << 0x10)) | (u64)(1));
    *(u64*)((a0 + 0xb8)) = (u32)&D_00535310;
    *(u64*)((a0 + 0xc0)) = 0x146;
    *(u64*)((a0 + 0xe8)) = (((((t2 + *(u16*)((a0 + 4))) << 4) + 0x7000) | ((((t5 + *(u16*)((a0 + 6))) << 4) + 0x7300) << 0x10)) | (u64)(1));
    return;
}
