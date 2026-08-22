// coverage: addr=0x0023d3d0 symbol=func_0023d3d0 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:78.42
#include "common/types.h"

extern "C" u32 func_001058e8() asm("func_001058e8");
extern "C" u32 func_00257000() asm("func_00257000");
extern "C" void func_0023d410() asm("func_0023d410");
extern "C" void func_00242880() asm("func_00242880");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x0023d3d0 func_0023d3d0
u32 func_0023d3d0() asm("func_0023d3d0");
u32 func_0023d3d0() {
    func_002fde18(func_001058e8() + 0x419c, 0, 0x1404);
    func_00242880();
    func_0023d410();
    return func_00257000();
}
