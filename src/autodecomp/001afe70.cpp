// coverage: addr=0x001afe70 symbol=func_001afe70 size=116 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.59;ghidra:near:57.31
#include "common/types.h"

extern "C" u32 func_001aff90(u32, u32, u32) asm("func_001aff90");
extern "C" u32 func_001affe0(u32, u32, u32) asm("func_001affe0");

// 0x001afe70 func_001afe70
u32 func_001afe70(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_001afe70");
u32 func_001afe70(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    v0 = func_001aff90(a0, a1, a2);
    if (((s32)(v0) != 0)) {
        *(u32*)(a3) = *(u8*)((v0 + 2));
        return func_001affe0(v0, a0, a2);
    } else {
        return 0xffffffff;
    }
}
