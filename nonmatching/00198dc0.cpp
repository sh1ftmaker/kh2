// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0019ef70(u32) asm("func_0019ef70");
extern "C" void func_0031cc28(u32) asm("func_0031cc28");

// 0x00198dc0 func_00198dc0
u32 func_00198dc0(u32 a0) asm("func_00198dc0");
u32 func_00198dc0(u32 a0) {
    u32 t4;
    u32 t3;
    *(u32*)(a0) = 0xffffffff;
    *(u32*)((a0 + 4)) = 0xffffffff;
    *(u32*)((a0 + 8)) = 0xffff;
    *(u32*)((a0 + 0xc)) = 0xffffffff;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x14)) = 0xffffffff;
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x1c)) = 0;
    *(u16*)((a0 + 0x2e)) = 0;
    *(u8*)((a0 + 0x30)) = 0;
    *(u8*)((a0 + 0x38)) = 0xffff;
    t4 = (a0 + 0x38);
    *(u8*)((t4 + 1)) = 0xffffffff;
    *(u8*)((t4 + 2)) = 0xffffffff;
    t3 = (a0 + 0x3c);
    *(u16*)((t3 + 2)) = 0xffffffff;
    *(u16*)((t3 + 4)) = 0xffffffff;
    *(u16*)((a0 + 0x3c)) = 0xffff;
    func_0031cc28(a0 + 0x54);
    return func_0019ef70(a0 + 0x34);
}
