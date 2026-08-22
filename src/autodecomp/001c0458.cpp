// coverage: addr=0x001c0458 symbol=func_001c0458 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"


// 0x001c0458 func_001c0458
void func_001c0458(u32 a0, u32 a1) asm("func_001c0458");
void func_001c0458(u32 a0, u32 a1) {
    u32 a0_0;
    u32 a0_1;
    u32 t6;
    a0_0 = (a0 + 4);
    a0_1 = (a0_0 + ((*(u32*)((a1 + 0x1c)) >> 5) << 2));
    t6 = (1 << (*(u32*)((a1 + 0x1c)) & 0x1f));
    *(u32*)(a0_1) = (*(u32*)(a0_1) & ~((0 | t6)));
}
