// coverage: addr=0x002e2dd8 symbol=func_002e2dd8 size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.69;ghidra:near:64.89;e3:near:62.73
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" void func_002ceb08() asm("func_002ceb08");

// 0x002e2dd8 func_002e2dd8
u32 func_002e2dd8() asm("func_002e2dd8");
u32 func_002e2dd8() {
    u32 s0;
    u32 v0;
    if ((*(u32*)(&D_00361f60) != 0)) {
        s0 = *(u32*)(&D_00361f60);
        func_002ceb08();
        v0 = *(u32*)((s0 + 0x110));
    } else {
        v0 = *(u32*)((*(u32*)(&D_00361f60) + 0x110));
    }
    return ((u32)(0) < (u32)(v0));
}
