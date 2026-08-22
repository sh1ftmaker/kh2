// coverage: addr=0x0031e520 symbol=func_0031e520 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.85;ghidra:near:30.21;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_002ee6d8(u32) asm("func_002ee6d8");
extern "C" void func_002edfd8(u32, u32) asm("func_002edfd8");

// 0x0031e520 func_0031e520
u32 func_0031e520(u32 a0) asm("func_0031e520");
u32 func_0031e520(u32 a0) {
    u32 v0;
    if (((s32)(func_002ee6d8(a0 + 0x24)) != 0)) {
        func_002edfd8(a0, a0 + 0x24);
        if (((s32)(a0) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 4))))(a0);
        }
        v0 = 0;
    } else {
        v0 = 1;
    }
    return v0;
}
