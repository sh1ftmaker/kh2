// coverage: addr=0x001d4528 symbol=func_001d4528 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:75.0
#include "common/types.h"

extern "C" u32 func_001a35f8(u32, u32) asm("func_001a35f8");

// 0x001d4528 func_001d4528
u32 func_001d4528(u32 a0) asm("func_001d4528");
u32 func_001d4528(u32 a0) {
    return ((s32)(0) < (s32)(func_001a35f8(*(u16*)((a0 + 0x2a)), *(u8*)((a0 + 1)))));
}
