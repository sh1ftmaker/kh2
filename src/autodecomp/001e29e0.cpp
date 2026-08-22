// coverage: addr=0x001e29e0 symbol=func_001e29e0 size=112 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:89.21;ghidra:near:88.8;e3:near:53.46
#include "common/types.h"

extern "C" u32 D_001e2938 asm("D_001e2938");
extern "C" u32 D_001e2998 asm("D_001e2998");
extern "C" u32 D_00352bd0 asm("D_00352bd0");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c80(u32) asm("func_00102c80");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001e27c0(u32) asm("func_001e27c0");

// 0x001e29e0 func_001e29e0
u32 func_001e29e0(u32 a0) asm("func_001e29e0");
u32 func_001e29e0(u32 a0) {
    u32 v0;
    u32 v0_0;
    *(u32*)((func_00102788(*(u32*)((func_00102c80(a0) + 4)), 1, 0x5014, (u32)&D_001e2938) + 0x30)) = (u32)&D_001e2998;
    v0 = func_001050d8(0xe10);
    v0_0 = func_001e27c0(v0);
    *(u32*)(&D_00352bd0) = v0;
    *(u32*)((v0 + 0xdd0)) = a0;
    return v0_0;
}
