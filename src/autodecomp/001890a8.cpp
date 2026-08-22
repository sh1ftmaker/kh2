// coverage: addr=0x001890a8 symbol=func_001890a8 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:85.56
#include "common/types.h"

extern "C" u32 func_00181a70(u32, u32) asm("func_00181a70");
extern "C" u32 func_00189068(u32, u32) asm("func_00189068");

// 0x001890a8 func_001890a8
u32 func_001890a8(u32 a0, u32 a1) asm("func_001890a8");
u32 func_001890a8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    v0 = func_00181a70(a0, a1);
    if (((s32)(v0) != 0)) {
        v0_0 = func_00189068(a0, a1);
        if (((s32)(v0_0) != 0)) {
            if (((u32)(*(u32*)(v0_0)) < (u32)(0x270f))) {
                *(u32*)(v0_0) = (*(u32*)(v0_0) + 1);
            }
        }
        v0 = v0_0;
    }
    return v0;
}
