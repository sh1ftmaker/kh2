// coverage: addr=0x0019d438 symbol=func_0019d438 size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.12;ghidra:near:87.78
#include "common/types.h"

extern "C" u32 func_0015a638(u32, u32) asm("func_0015a638");
extern "C" u32 func_0019d4a8(u32) asm("func_0019d4a8");
extern "C" u32 func_002c0688(u32, u32) asm("func_002c0688");

// 0x0019d438 func_0019d438
u32 func_0019d438(u32 a0) asm("func_0019d438");
u32 func_0019d438(u32 a0) {
    if (((s32)(func_0019d4a8(a0)) != 0)) {
        return func_002c0688(*(u32*)((a0 + 0x28)), a0 + 4);
    } else {
        return func_0015a638(a0 + 4, a0 + 4);
    }
}
