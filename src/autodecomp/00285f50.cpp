// coverage: addr=0x00285f50 symbol=_Z13func_00285f50Pv size=80 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:exact:100.0;m2c:near:62.41
#include "common/types.h"

extern "C" u32 func_002859a0(u32) asm("func_002859a0");

// 0x00285f50 func_00285f50(void*)
u32 lift_00285f50(u32 a0) asm("_Z13func_00285f50Pv");
u32 lift_00285f50(u32 a0) {
    u32 v0;
    v0 = func_002859a0(a0);
    if (((*(u32*)((((a0 >> 5) << 2) + v0)) & (1 << (a0 & 0x1f))) == 0)) {
        *(u32*)((((a0 >> 5) << 2) + v0)) = (*(u32*)((((a0 >> 5) << 2) + v0)) | (1 << (a0 & 0x1f)));
    }
    return v0;
}
