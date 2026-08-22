// coverage: addr=0x002691c8 symbol=func_002691c8 size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:45.0
#include "common/types.h"

extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_002571e0(u32) asm("func_002571e0");
extern "C" void func_00257388(u32, u32) asm("func_00257388");

// 0x002691c8 func_002691c8
u32 func_002691c8() asm("func_002691c8");
u32 func_002691c8() {
    func_00257388(0x846a, 0);
    func_002571e0(1);
    return func_00287cc0(0);
}
