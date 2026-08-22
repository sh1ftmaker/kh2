// coverage: addr=0x00120cf0 symbol=func_00120cf0 size=156 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:75.82;ghidra:near:74.83
#include "common/types.h"

extern "C" u32 func_00120a20(u32, u32, u32, u32, u32) asm("func_00120a20");

// 0x00120cf0 func_00120cf0
u32 func_00120cf0(u32 a0, u32 a1, u32 a2) asm("func_00120cf0");
u32 func_00120cf0(u32 a0, u32 a1, u32 a2) {
    *(u32*)((a1 + 0x108)) = a2;
    *(u32*)((a1 + 0x10c)) = (*(u32*)((a1 + 0x108)) + (((u32(*)(u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x30))))(a0, a1, a2) << 2));
    return func_00120a20(a0, a1, *(u32*)((a1 + 0x10c)), func_00120a20(a0, a1, *(u32*)((a1 + 0x108)), ((*(u32*)((a1 + 0x10c)) + (((u32(*)(u32))(*(u32*)((*(u32*)(a0) + 0x30))))(a0) << 2)) + 0xf) & 0xfffffff0, 0), 1);
}
