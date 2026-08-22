// coverage: addr=0x001de8a8 symbol=func_001de8a8 size=104 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.69;ghidra:near:78.31
#include "common/types.h"

extern "C" u32 D_001de690 asm("D_001de690");
extern "C" u32 D_001de6d0 asm("D_001de6d0");
extern "C" u32 D_001de710 asm("D_001de710");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x001de8a8 func_001de8a8
u32 func_001de8a8(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001de8a8");
u32 func_001de8a8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    func_00102788(a0, a1, a2, (u32)&D_001de690);
    v0 = func_00102788(a0, a1, a3, (u32)&D_001de6d0);
    *(u32*)((v0 + 0x30)) = (u32)&D_001de710;
    return v0;
}
