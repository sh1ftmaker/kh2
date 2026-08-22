// coverage: addr=0x002d5e10 symbol=func_002d5e10 size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.94;ghidra:near:88.61;corpus:near:70.56
#include "common/types.h"

extern "C" u32 D_00362428 asm("D_00362428");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_002cff98(u32) asm("func_002cff98");
extern "C" void func_002e7328(u32) asm("func_002e7328");

// 0x002d5e10 func_002d5e10
u32 func_002d5e10(u32 a0) asm("func_002d5e10");
u32 func_002d5e10(u32 a0) {
    *(u32*)(a0) = (u32)&D_00362428;
    func_002e7328(a0 + 0xb38);
    func_002cff98(a0);
    return func_00105110(a0);
}
