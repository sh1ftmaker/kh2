// coverage: addr=0x001ddb78 symbol=func_001ddb78 size=140 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:69.21;ghidra:compile:0.0
#include "common/types.h"

extern "C" u32 D_001dd2b8 asm("D_001dd2b8");
extern "C" u32 D_001dd920 asm("D_001dd920");
extern "C" u32 D_001dda78 asm("D_001dda78");
extern "C" u32 D_001ddb30 asm("D_001ddb30");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x001ddb78 func_001ddb78
u32 func_001ddb78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("func_001ddb78");
u32 func_001ddb78(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 v0;
    func_00102788(a0, a1, a2, (u32)&D_001dd2b8);
    func_00102788(a0, a1, a3, (u32)&D_001dd920);
    v0 = func_00102788(a0, a1, a4, (u32)&D_001dda78);
    *(u32*)((v0 + 0x30)) = (u32)&D_001ddb30;
    return v0;
}
