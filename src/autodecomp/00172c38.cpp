// coverage: addr=0x00172c38 symbol=func_00172c38 size=100 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:55.2;ghidra:near:40.28;e3:near:37.58
#include "common/types.h"

extern "C" u32 func_0016c008(u32, u32) asm("func_0016c008");
extern "C" u32 func_001b9bc8(u32) asm("func_001b9bc8");

// 0x00172c38 func_00172c38
void func_00172c38(u32 a0) asm("func_00172c38");
void func_00172c38(u32 a0) {
    u32 s0;
    u32 v0;
    s0 = 0;
    while ((v0 = func_001b9bc8(s0)), (s0 = v0), ((s32)(v0) != 0)) {
        if ((func_0016c008(v0, *(u32*)((a0 + 4))) == *(u32*)((a0 + 8)))) {
            break;
        }
    }
    *(u32*)((*(u32*)(a0) + 4)) = s0;
    return;
}
