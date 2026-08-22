// coverage: addr=0x0018f858 symbol=func_0018f858 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_001a4550(u32, u32) asm("func_001a4550");

// 0x0018f858 func_0018f858
u32 func_0018f858(u32 a0) asm("func_0018f858");
u32 func_0018f858(u32 a0) {
    u32 v0;
    v0 = func_001a4550(*(u32*)(a0), *(u32*)((a0 + 4)));
    *(u32*)(a0) = v0;
    return v0;
}
