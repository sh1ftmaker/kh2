// coverage: addr=0x001a5380 symbol=func_001a5380 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:96.25
#include "common/types.h"

extern "C" u32 func_001a52a8(u32, u32, u32) asm("func_001a52a8");
extern "C" void func_001c79a0(u32, u32, u32) asm("func_001c79a0");

// 0x001a5380 func_001a5380
u32 func_001a5380(u32 a0, u32 a1, u32 a2) asm("func_001a5380");
u32 func_001a5380(u32 a0, u32 a1, u32 a2) {
    func_001c79a0(a2, a1, 0);
    return func_001a52a8(a0, a1, a2);
}
