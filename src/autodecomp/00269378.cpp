// coverage: addr=0x00269378 symbol=func_00269378 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_002571e0(u32) asm("func_002571e0");
extern "C" void func_00257388(u32, u32) asm("func_00257388");

// 0x00269378 func_00269378
u32 func_00269378() asm("func_00269378");
u32 func_00269378() {
    func_00257388(0xc22e, 0);
    func_002571e0(0);
    return func_00287cc0(0);
}
