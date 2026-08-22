// coverage: addr=0x002ba630 symbol=func_002ba630 size=192 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.17;m2c:near:46.29
#include "common/types.h"

extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" void func_002baf48(u32, u32, u32, u32, u32, u32) asm("func_002baf48");
extern "C" void func_002bcc60(u32, u32, u32, u32, u32) asm("func_002bcc60");
extern "C" void func_002bce10(u32, u32) asm("func_002bce10");

// 0x002ba630 func_002ba630
u32 func_002ba630(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_002ba630");
u32 func_002ba630(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 loc_4;
    u32 loc_0;
    loc_0 = 0xffffffff;
    loc_4 = 0xffffffff;
    func_002bcc60((u32)&D_01e2a410, a0, a2, (u32)&loc_0, (u32)&loc_4);
    func_002baf48(loc_0, 0, a0, a1, 0, 0);
    if (((s32)(a2) != 0)) {
        func_002baf48(loc_0, 1, a2, a3, 0, 0);
    }
    func_002bce10((u32)&D_01e2a410, loc_0);
    return loc_4;
}
