// coverage: addr=0x0014a188 symbol=func_0014a188 size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:95.76
#include "common/types.h"

extern "C" u32 _ZN2dk4Blur9blur_taskEP4TASK asm("_ZN2dk4Blur9blur_taskEP4TASK");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_002bea00() asm("func_002bea00");
extern "C" void func_0013a6d0() asm("func_0013a6d0");
extern "C" void func_0013a9e8(u32) asm("func_0013a9e8");
extern "C" void func_0014ae10() asm("func_0014ae10");

// 0x0014a188 func_0014a188
u32 func_0014a188() asm("func_0014a188");
u32 func_0014a188() {
    func_0013a6d0();
    *(u8*)((func_00102c18(0, 0x124f8, (u32)&_ZN2dk4Blur9blur_taskEP4TASK) + 4)) = 0;
    func_0014ae10();
    func_0013a9e8(1);
    return func_002bea00();
}
