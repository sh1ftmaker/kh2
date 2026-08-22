// coverage: addr=0x0015e038 symbol=_Z16u_tail0_0015e038v size=24 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;twins:exact:100.0;ghidra:exact:100.0;m2c:near:76.86
#include "common/types.h"

extern "C" u32 D_0034b240 asm("D_0034b240");

// 0x0015e038 u_tail0_0015e038()
void lift_0015e038() asm("_Z16u_tail0_0015e038v");
void lift_0015e038() {
    if ((*(u32*)(&D_0034b240) != 0)) {
        *(u8*)((*(u32*)(&D_0034b240) + 4)) = 0;
    }
    return;
}
