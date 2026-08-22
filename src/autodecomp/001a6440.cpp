// coverage: addr=0x001a6440 symbol=func_001a6440 size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:82.63
#include "common/types.h"

extern "C" u32 func_0016cbc8(u32, u32, u32, u32) asm("func_0016cbc8");
extern "C" void func_00177998(u32) asm("func_00177998");

// 0x001a6440 func_001a6440
void func_001a6440(u32 a0) asm("func_001a6440");
void func_001a6440(u32 a0) {
    if (((*(u32*)((*(u32*)((a0 + 4)) + 0x588)) & 4) != 0)) {
        func_00177998(*(u32*)((a0 + 4)));
    }
    func_0016cbc8(*(u32*)(a0), 0x15, 0, 0);
    return;
}
