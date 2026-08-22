// coverage: addr=0x0015b780 symbol=func_0015b780 size=32 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:99.38
#include "common/types.h"

extern "C" u32 func_00139ab0(u32) asm("func_00139ab0");
extern "C" void func_00139858(u32) asm("func_00139858");

// 0x0015b780 func_0015b780
u32 func_0015b780() asm("func_0015b780");
u32 func_0015b780() {
    func_00139858(0xf);
    return func_00139ab0(0xf);
}
