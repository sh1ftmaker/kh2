// coverage: addr=0x002ba8a8 symbol=func_002ba8a8 size=60 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:0.0
#include "common/types.h"

extern "C" u32 func_002b83b4() asm("func_002b83b4");
extern "C" void func_002b7078(u32) asm("func_002b7078");
extern "C" void func_002b72e4(u32, u32, u32) asm("func_002b72e4");
extern "C" void func_002baa60() asm("func_002baa60");

// 0x002ba8a8 func_002ba8a8
u32 func_002ba8a8() asm("func_002ba8a8");
u32 func_002ba8a8() {
    func_002b7078(0);
    func_002b7078(1);
    func_002b72e4(0xffffff9c, 0xffffffff, 0);
    func_002baa60();
    return func_002b83b4();
}
