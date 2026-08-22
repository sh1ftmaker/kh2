// coverage: addr=0x002ffc08 symbol=func_002ffc08 size=68 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.88;m2c:near:99.0;ghidra:near:94.33
#include "common/types.h"

extern "C" u32 func_003032d0(u32) asm("func_003032d0");

// 0x002ffc08 func_002ffc08
u32 func_002ffc08(u32 a0, u32 a1) asm("func_002ffc08");
u32 func_002ffc08(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u32*)((a1 + 8))) == 0)) {
        *(u32*)((a1 + 4)) = 0;
        v0_0 = 0;
    } else {
        v0 = func_003032d0(a0);
        *(u32*)((a1 + 8)) = 0;
        *(u32*)((a1 + 4)) = 0;
        v0_0 = v0;
    }
    return v0_0;
}
