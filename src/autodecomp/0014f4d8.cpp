// coverage: addr=0x0014f4d8 symbol=func_0014f4d8 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_00139ab0(u32) asm("func_00139ab0");
extern "C" void func_00139858(u32) asm("func_00139858");

// 0x0014f4d8 func_0014f4d8
u32 func_0014f4d8() asm("func_0014f4d8");
u32 func_0014f4d8() {
    func_00139858(7);
    func_00139858(9);
    func_00139858(8);
    func_00139858(0xa);
    func_00139ab0(7);
    func_00139ab0(9);
    func_00139ab0(8);
    return func_00139ab0(0xa);
}
