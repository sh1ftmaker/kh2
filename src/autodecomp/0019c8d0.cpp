// coverage: addr=0x0019c8d0 symbol=func_0019c8d0 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.05;ghidra:near:71.17
#include "common/types.h"

extern "C" u32 D_00350444 asm("D_00350444");
extern "C" u32 func_0019ca20(u32) asm("func_0019ca20");
extern "C" void func_00190128(u32) asm("func_00190128");

// 0x0019c8d0 func_0019c8d0
u32 func_0019c8d0(u32 a0) asm("func_0019c8d0");
u32 func_0019c8d0(u32 a0) {
    u32 v0;
    *(u32*)(a0) = 0;
    func_00190128(a0 + 4);
    *(u32*)((a0 + 0x18)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x2c)) = 0;
    v0 = func_0019ca20(a0);
    *(u32*)(&D_00350444) = (*(u32*)(&D_00350444) ? *(u32*)(&D_00350444) : a0);
    return v0;
}
