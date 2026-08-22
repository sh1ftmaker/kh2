// coverage: addr=0x00251e90 symbol=func_00251e90 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.0;m2c:near:55.29;e3:near:17.38
#include "common/types.h"

extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_00372608 asm("D_00372608");
extern "C" u32 D_00372610 asm("D_00372610");
extern "C" u32 func_0028dbf8(u32, u32, u32) asm("func_0028dbf8");

// 0x00251e90 func_00251e90
u32 func_00251e90(u32 a0) asm("func_00251e90");
u32 func_00251e90(u32 a0) {
    return func_0028dbf8(*(u32*)(&D_0035ee60), (u32)&D_00372608, (a0 << 3) + (u32)&D_00372610);
}
