// coverage: addr=0x001d7e00 symbol=func_001d7e00 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:86.67
#include "common/types.h"

extern "C" u32 func_00198450(u32) asm("_ZN2YS6STDOBJ15_OVR_initializeEv");
extern "C" void func_00190920(u32, u32, u32) asm("func_00190920");

// 0x001d7e00 func_001d7e00
u32 func_001d7e00(u32 a0) asm("func_001d7e00");
u32 func_001d7e00(u32 a0) {
    func_00190920(a0 + 0x9f4, 2, a0);
    return func_00198450(a0);
}
