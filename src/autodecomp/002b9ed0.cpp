// coverage: addr=0x002b9ed0 symbol=func_002b9ed0 size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:43.29
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002bd140(u32) asm("func_002bd140");
extern "C" void func_002baa78() asm("func_002baa78");
extern "C" void func_002bcfe8(u32) asm("func_002bcfe8");
extern "C" void func_002bd030(u32) asm("func_002bd030");
extern "C" void func_002bd078(u32) asm("func_002bd078");
extern "C" void func_002bd0b8(u32) asm("func_002bd0b8");
extern "C" void func_002bd100(u32) asm("func_002bd100");

// 0x002b9ed0 func_002b9ed0
u32 func_002b9ed0() asm("func_002b9ed0");
u32 func_002b9ed0() {
    func_002baa78();
    func_002bcfe8((u32)&D_01e2a410);
    func_002bd030((u32)&D_01e2a410);
    func_002bd078((u32)&D_01e2a410);
    func_002bd0b8((u32)&D_01e2a410);
    func_002bd100((u32)&D_01e2a410);
    return func_002bd140((u32)&D_01e2a410);
}
