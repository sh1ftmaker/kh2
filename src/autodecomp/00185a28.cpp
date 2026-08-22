// coverage: addr=0x00185a28 symbol=func_00185a28 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.12;ghidra:near:76.75
#include "common/types.h"

extern "C" u32 func_0016a2e0(u32) asm("func_0016a2e0");

// 0x00185a28 func_00185a28
u32 func_00185a28(u32 a0) asm("func_00185a28");
u32 func_00185a28(u32 a0) {
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x44))))(a0);
    ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x28))))(a0);
    return func_0016a2e0(a0);
}
