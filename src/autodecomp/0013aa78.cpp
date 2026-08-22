// coverage: addr=0x0013aa78 symbol=func_0013aa78 size=168 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:78.06;m2c:near:48.95
#include "common/types.h"

extern "C" u32 func_0013ac60(u32, u32, u32) asm("func_0013ac60");
extern "C" void func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");

// 0x0013aa78 func_0013aa78
u32 func_0013aa78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) asm("func_0013aa78");
u32 func_0013aa78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6) {
    func_00138d60(a0, 0x14b7, a2, a3, a1, 0, a5);
    *(u32*)((a0 + 0x19c)) = 0xa;
    *(u32*)((a0 + 0x1a0)) = 0xfffffff9;
    *(u32*)((a0 + 0x1a8)) = 0xe;
    *(u32*)((a0 + 0x1ac)) = 1;
    func_00139620(a0);
    func_00239988(a0 + 0x1b4, a2, a3);
    return func_0013ac60(a0, a6, a4);
}
