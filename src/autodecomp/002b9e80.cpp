// coverage: addr=0x002b9e80 symbol=func_002b9e80 size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:50.95;e3:near:5.26
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002b9ed0() asm("func_002b9ed0");
extern "C" void func_002b7fbc(u32) asm("func_002b7fbc");
extern "C" void func_002b9b78() asm("func_002b9b78");
extern "C" void func_002ba390() asm("func_002ba390");
extern "C" void func_002bce40(u32) asm("func_002bce40");
extern "C" void func_002bce50(u32) asm("func_002bce50");

// 0x002b9e80 func_002b9e80
u32 func_002b9e80() asm("func_002b9e80");
u32 func_002b9e80() {
    func_002b7fbc(0);
    func_002bce40((u32)&D_01e2a410);
    func_002bce50((u32)&D_01e2a410);
    func_002b9b78();
    func_002ba390();
    return func_002b9ed0();
}
