// coverage: addr=0x001367e0 symbol=func_001367e0 size=96 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.67;m2c:near:55.83
#include "common/types.h"

extern "C" u32 func_00170cd0() asm("func_00170cd0");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_00168388(u32, u32, u32, u32) asm("func_00168388");

// 0x001367e0 func_001367e0
u32 func_001367e0(u32 a0, u32 a1, u32 a2) asm("func_001367e0");
u32 func_001367e0(u32 a0, u32 a1, u32 a2) {
    u32 v0_0;
    func_00168388(a1, a2, 0, 0);
    while ((v0_0 = func_00170cd0()), ((s32)(v0_0) != 0)) {
        func_00102448(a0, 0);
    }
    return v0_0;
}
