// coverage: addr=0x002efb60 symbol=func_002efb60 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 func_002efa98(u32) asm("func_002efa98");
extern "C" void func_002efb08(u32) asm("func_002efb08");

// 0x002efb60 func_002efb60
u32 func_002efb60(u32 a0) asm("func_002efb60");
u32 func_002efb60(u32 a0) {
    func_002efb08(a0);
    return func_002efa98(a0);
}
