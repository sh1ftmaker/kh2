// coverage: addr=0x001922c8 symbol=func_001922c8 size=88 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.77;ghidra:near:82.88
#include "common/types.h"

extern "C" u32 D_01c61970 asm("D_01c61970");
extern "C" u32 func_00192028(u32) asm("func_00192028");
extern "C" void func_00170950(u32) asm("func_00170950");

// 0x001922c8 func_001922c8
void func_001922c8(u32 a0) asm("func_001922c8");
void func_001922c8(u32 a0) {
    if (((s32)(*(u32*)(((a0 << 3) + (u32)&D_01c61970))) != 0)) {
        func_00170950(*(u32*)(((a0 << 3) + (u32)&D_01c61970)));
        func_00192028(a0);
        return;
    } else {
        return;
    }
}
