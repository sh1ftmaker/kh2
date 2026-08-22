// coverage: addr=0x0028b940 symbol=func_0028b940 size=112 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.37;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 func_0028dfe8(u32) asm("func_0028dfe8");

// 0x0028b940 func_0028b940
u32 func_0028b940(u32 a0) asm("func_0028b940");
u32 func_0028b940(u32 a0) {
    u32 v0;
    u32 v0_0;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x3c, 0);
    v0_0 = func_0028dfe8(v0);
    *(u32*)(a0) = v0;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)((a0 + 0x28)) = 0;
    *(u32*)((a0 + 0x2c)) = 0;
    *(u32*)((a0 + 0x30)) = 0;
    return v0_0;
}
