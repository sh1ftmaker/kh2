// coverage: addr=0x001041c0 symbol=func_001041c0 size=32 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:63.56;e3:near:17.5
#include "common/types.h"

extern "C" u32 D_0032ba84 asm("D_0032ba84");

// 0x001041c0 func_001041c0
u32 func_001041c0() asm("func_001041c0");
u32 func_001041c0() {
    u32 v0;
    if (((s32)(*(u32*)(&D_0032ba84)) == 0)) {
        *(u32*)(&D_0032ba84) = 1;
        v0 = 1;
    } else {
        v0 = *(u32*)(&D_0032ba84);
    }
    return v0;
}
