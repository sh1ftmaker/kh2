// coverage: addr=0x0022e160 symbol=func_0022e160 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:99.5;corpus:near:72.27
#include "common/types.h"

extern "C" u32 func_001de750(u32) asm("func_001de750");
extern "C" void func_00226030(u32) asm("func_00226030");

// 0x0022e160 func_0022e160
u32 func_0022e160(u32 a0, u32 a1, u32 a2) asm("func_0022e160");
u32 func_0022e160(u32 a0, u32 a1, u32 a2) {
    func_00226030(a0);
    return func_001de750(*(u32*)((a2 + 0x14)));
}
