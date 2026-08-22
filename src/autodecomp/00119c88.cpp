// coverage: addr=0x00119c88 symbol=func_00119c88 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00119e60(u32, u32) asm("func_00119e60");
extern "C" u32 func_001c8cd8(u32) asm("func_001c8cd8");

// 0x00119c88 func_00119c88
u32 func_00119c88(u32 a0) asm("func_00119c88");
u32 func_00119c88(u32 a0) {
    return func_00119e60(a0, func_001c8cd8(a0));
}
