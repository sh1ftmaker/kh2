// coverage: addr=0x001c2c98 symbol=func_001c2c98 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.53;m2c:near:97.53
#include "common/types.h"

extern "C" u32 D_00351468 asm("D_00351468");
extern "C" u32 func_001d7cd0(u32) asm("func_001d7cd0");

// 0x001c2c98 func_001c2c98
u32 func_001c2c98(u32 a0) asm("func_001c2c98");
u32 func_001c2c98(u32 a0) {
    u32 v0;
    v0 = func_001d7cd0(a0);
    *(u32*)(a0) = (u32)&D_00351468;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x200000);
    *(u32*)((a0 + 0xabc)) = (*(u32*)((a0 + 0xabc)) | 4);
    return v0;
}
