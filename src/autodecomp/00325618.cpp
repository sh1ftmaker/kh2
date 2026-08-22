// coverage: addr=0x00325618 symbol=func_00325618 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_00362c70 asm("D_00362c70");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_002dea80(u32) asm("func_002dea80");

// 0x00325618 func_00325618
u32 func_00325618(u32 a0) asm("func_00325618");
u32 func_00325618(u32 a0) {
    *(u32*)(a0) = (u32)&D_00362c70;
    func_002dea80(a0);
    return func_00106420(a0);
}
