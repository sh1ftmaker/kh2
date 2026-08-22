// coverage: addr=0x001db888 symbol=func_001db888 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:compile:0.0
#include "common/types.h"


// 0x001db888 func_001db888
u32 func_001db888(u32 a0) asm("func_001db888");
u32 func_001db888(u32 a0) {
    u32 t7;
    u32 t5;
    u32 v0;
    t7 = *(u32*)((a0 + 8));
    *(u32*)((a0 + 8)) = (t7 + -1);
    t5 = *(u32*)((a0 + 0x14));
    v0 = *(u32*)((a0 + 0xc));
    return (v0 + (t5 * *(u32*)((((t7 + -1) << 2) + *(u32*)((a0 + 0x10))))));
}
