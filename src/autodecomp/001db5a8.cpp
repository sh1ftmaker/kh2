// coverage: addr=0x001db5a8 symbol=func_001db5a8 size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:49.29;m2c:near:48.96
#include "common/types.h"

extern "C" u32 D_00321b28 asm("D_00321b28");
extern "C" u32 D_01d5baac asm("D_01d5baac");
extern "C" u32 func_002fd248(u32, u32, u32, u32, u32) asm("func_002fd248");

// 0x001db5a8 func_001db5a8
u32 func_001db5a8(u32 a0) asm("func_001db5a8");
u32 func_001db5a8(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_002fd248(a0, *(u32*)(&D_01d5baac) + 8, *(u32*)((*(u32*)(&D_01d5baac) + 4)), 0x5c, (u32)&D_00321b28);
    if (((s32)(v0) == 0)) {
        v0_0 = func_002fd248(0x45, *(u32*)(&D_01d5baac) + 8, *(u32*)((*(u32*)(&D_01d5baac) + 4)), 0x5c, (u32)&D_00321b28);
        v0 = v0_0;
    }
    return v0;
}
