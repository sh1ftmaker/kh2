// coverage: addr=0x0015bab8 symbol=func_0015bab8 size=268 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.01;ghidra:near:67.73
#include "common/types.h"

extern "C" u32 func_0014bb00(u32, u32, u32, u32, u32) asm("func_0014bb00");
extern "C" void func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");

// 0x0015bab8 func_0015bab8
u32 func_0015bab8(u32 a0) asm("func_0015bab8");
u32 func_0015bab8(u32 a0) {
    func_0014b1e0(a0 + 0x270, 0x198, (s32)(((*(u16*)((a0 + 0xb74)) + 8) << 0x10)) >> 0x10);
    func_0014b1e0(a0 + 0x370, 0x198, *(s16*)((a0 + 0xb74)));
    func_0014b1e0(a0 + 0x470, 0x198, (s32)(((*(u16*)((a0 + 0xb74)) + 0x58) << 0x10)) >> 0x10);
    func_0014b1e0(a0 + 0x570, 0x190, (s32)(((*(u16*)((a0 + 0xb74)) + 8) << 0x10)) >> 0x10);
    func_0014b1e0(a0 + 0x670, 0x1e8, (s32)(((*(u16*)((a0 + 0xb74)) + 8) << 0x10)) >> 0x10);
    func_0014b1e0(a0 + 0x770, 0x190, *(s16*)((a0 + 0xb74)));
    func_0014b1e0(a0 + 0x870, 0x1e8, *(s16*)((a0 + 0xb74)));
    func_0014b1e0(a0 + 0x970, 0x190, (s32)(((*(u16*)((a0 + 0xb74)) + 0x58) << 0x10)) >> 0x10);
    func_0014b1e0(a0 + 0xa70, 0x1e8, (s32)(((*(u16*)((a0 + 0xb74)) + 0x58) << 0x10)) >> 0x10);
    return func_0014bb00(a0, 0x190, *(s16*)((a0 + 0xb74)), 0x60, 0x60);
}
