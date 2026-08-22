// coverage: addr=0x002db7d0 symbol=func_002db7d0 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:61.81
#include "common/types.h"

extern "C" u32 func_002db610(u32, u32) asm("func_002db610");
extern "C" void func_0016a9a0(u32) asm("func_0016a9a0");

// 0x002db7d0 func_002db7d0
u32 func_002db7d0(u32 a0) asm("func_002db7d0");
u32 func_002db7d0(u32 a0) {
    func_0016a9a0(a0);
    return func_002db610(a0, (*(u8*)((a0 + 0x238)) & 1) ? 0 : 0xffffffff);
}
