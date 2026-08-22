// coverage: addr=0x00172a10 symbol=func_00172a10 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:93.53;e3:near:30.17
#include "common/types.h"

extern "C" u32 func_0016c018(u32, u32, u32) asm("func_0016c018");
extern "C" void func_0019ba60(u32) asm("func_0019ba60");

// 0x00172a10 func_00172a10
void func_00172a10(u32 a0) asm("func_00172a10");
void func_00172a10(u32 a0) {
    if (((s32)(*(u32*)(a0)) != 0)) {
        func_0019ba60(*(u32*)((*(u32*)(a0) + 4)));
    }
    func_0016c018(*(u32*)((*(u32*)(a0) + 4)), *(u32*)((a0 + 4)), *(u32*)((a0 + 8)));
    return;
}
