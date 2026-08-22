// coverage: addr=0x002e5f70 symbol=func_002e5f70 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.24;ghidra:near:88.0
#include "common/types.h"

extern "C" u32 func_00108398(u32) asm("func_00108398");

// 0x002e5f70 func_002e5f70
u32 func_002e5f70(u32 a0) asm("func_002e5f70");
u32 func_002e5f70(u32 a0) {
    u32 v0;
    func_00108398(a0 + 0x10);
    v0 = func_00108398(a0 + 0x120);
    *(u32*)((a0 + 0x220)) = 0;
    *(u32*)((a0 + 0x224)) = 0;
    *(u32*)((a0 + 0x228)) = 0;
    *(u32*)((a0 + 0x22c)) = 0;
    *(u64*)((a0 + 0x230)) = 0;
    return v0;
}
