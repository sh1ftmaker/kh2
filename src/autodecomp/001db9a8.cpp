// coverage: addr=0x001db9a8 symbol=func_001db9a8 size=112 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.41
#include "common/types.h"

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001dba18(u32, u32, u32) asm("func_001dba18");
extern "C" void func_001db950(u32, u32, u32, u32) asm("func_001db950");

// 0x001db9a8 func_001db9a8
u32 func_001db9a8(u32 a0, u32 a1, u32 a2) asm("func_001db9a8");
u32 func_001db9a8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 v0_0;
    v0 = func_001dba18(a0, a1, a2);
    if (((s32)(v0) == 0)) {
        v0_0 = func_001050d8(0xa00);
        func_001db950(v0_0, a0, a1, a2);
        v0 = v0_0;
    }
    return v0;
}
