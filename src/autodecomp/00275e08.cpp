// coverage: addr=0x00275e08 symbol=func_00275e08 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.76;ghidra:near:92.31
#include "common/types.h"

extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00275e08 func_00275e08
u32 func_00275e08() asm("func_00275e08");
u32 func_00275e08() {
    u32 v0;
    if ((func_00139d78(*(u32*)(&D_0035f20c)) != 0)) {
        func_00139510(*(u32*)(&D_0035f20c));
    }
    v0 = func_00139d78(*(u32*)(&D_0035f20c) + 0x1b4);
    if ((v0 != 0)) {
        return func_00139510(*(u32*)(&D_0035f20c) + 0x1b4);
    } else {
        return v0;
    }
}
