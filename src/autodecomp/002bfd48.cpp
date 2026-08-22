// coverage: addr=0x002bfd48 symbol=func_002bfd48 size=72 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:90.0;m2c:near:52.22;e3:near:52.17
#include "common/types.h"

extern "C" u32 func_002be4a0() asm("func_002be4a0");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_002be340(u32, u32) asm("func_002be340");

// 0x002bfd48 func_002bfd48
u32 func_002bfd48(u32 a0, u32 a1) asm("func_002bfd48");
u32 func_002bfd48(u32 a0, u32 a1) {
    u32 v0_0;
    func_002be340(a1, a1);
    while ((v0_0 = func_002be4a0()), ((s32)(v0_0) != 0)) {
        func_00102448(*(u32*)(a0), 0);
    }
    return v0_0;
}
