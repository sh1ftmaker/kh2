// coverage: addr=0x00132f38 symbol=func_00132f38 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.5;ghidra:near:73.21
#include "common/types.h"

extern "C" u32 func_001325c8(u32, u32, u32) asm("func_001325c8");
extern "C" u32 func_00132c68(u32) asm("func_00132c68");

// 0x00132f38 func_00132f38
u32 func_00132f38(u32 a0) asm("func_00132f38");
u32 func_00132f38(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = func_00132c68(a0);
    v0_0 = func_001325c8(a0, 0, *(u32*)((v0 + 0x24)));
    if (((s32)(v0_0) >= 0)) {
        *(u32*)((a0 + 0x274)) = (v0 + *(u32*)(((v0_0 << 2) + (v0 + *(u32*)((v0 + 0x1c))))));
    }
    return v0_0;
}
