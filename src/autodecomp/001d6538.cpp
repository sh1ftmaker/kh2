// coverage: addr=0x001d6538 symbol=func_001d6538 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.6;m2c:near:99.6
#include "common/types.h"

extern "C" u32 D_00352780 asm("D_00352780");
extern "C" u32 D_01d5ba78 asm("D_01d5ba78");
extern "C" u32 func_001ce378(u32) asm("func_001ce378");

// 0x001d6538 func_001d6538
u32 func_001d6538(u32 a0) asm("func_001d6538");
u32 func_001d6538(u32 a0) {
    u32 v0;
    v0 = func_001ce378(a0);
    *(u32*)(a0) = (u32)&D_00352780;
    *(u32*)((a0 + 0x9f8)) = (u32)&D_01d5ba78;
    return v0;
}
