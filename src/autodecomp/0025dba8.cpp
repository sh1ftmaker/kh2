// coverage: addr=0x0025dba8 symbol=func_0025dba8 size=48 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_00240be0() asm("func_00240be0");
extern "C" void func_002b4b00() asm("func_002b4b00");

// 0x0025dba8 func_0025dba8
u32 func_0025dba8() asm("func_0025dba8");
u32 func_0025dba8() {
    func_002b4b00();
    func_00240be0();
    return func_0028f4d8(0, 0x8a7f, 0);
}
