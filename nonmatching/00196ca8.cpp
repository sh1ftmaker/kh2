// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" u32 func_00138480(u32) asm("func_00138480");
extern "C" u32 func_001d30c0(u32) asm("func_001d30c0");
extern "C" void func_0019ef70(u32) asm("func_0019ef70");
extern "C" void func_0031cc28(u32, u32, u32) asm("func_0031cc28");

// 0x00196ca8 func_00196ca8
u32 func_00196ca8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS5EVENTC1EiPv");
u32 func_00196ca8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    *(u32*)(a0) = 0;
    *(u32*)((a0 + 4)) = a2;
    *(u32*)((a0 + 8)) = 0;
    *(u8*)((a0 + 0x10)) = 0xffff;
    *(u16*)((a0 + 0x14)) = 0xffff;
    *(u8*)(((a0 + 0x10) + 1)) = 0xffff;
    *(u8*)(((a0 + 0x10) + 2)) = 0xffff;
    *(u16*)(((a0 + 0x14) + 2)) = 0xffff;
    *(u16*)(((a0 + 0x14) + 4)) = 0xffff;
    func_0031cc28(a0 + 0x2c, a1, a2);
    func_0019ef70(a0 + 0xc);
    *(u32*)((a0 + 0x3c)) = func_001d30c0(a1 & 0x3f);
    *(u32*)((a0 + 0x40)) = 1;
    v0 = func_0011b6a8(a0 + 0x50);
    *(u32*)((a0 + 0x94)) = 0;
    *(u32*)((a0 + 0x98)) = 0;
    *(u32*)((a0 + 0x9c)) = 0xffffffff;
    *(u32*)((a0 + 0xa0)) = 0xffffffff;
    if (((s32)((a1 & 0x80)) != 0)) {
        return func_00138480(1);
    } else {
        return v0;
    }
}
