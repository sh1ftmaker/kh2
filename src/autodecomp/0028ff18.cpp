// coverage: addr=0x0028ff18 symbol=func_0028ff18 size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:80.43
#include "common/types.h"

extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00290060(u32) asm("func_00290060");

// 0x0028ff18 func_0028ff18
u32 func_0028ff18(u32 a0) asm("func_0028ff18");
u32 func_0028ff18(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_00290060(a0);
    if ((*(u32*)((*(u32*)(a0) + 0x184)) != *(s16*)((a0 + 0xc)))) {
        v0_0 = func_00138c10(*(u32*)(a0), *(s16*)((a0 + 0xc)));
        *(u32*)((*(u32*)(a0) + 0x188)) = 0xffffffff;
        v0 = v0_0;
    }
    return v0;
}
