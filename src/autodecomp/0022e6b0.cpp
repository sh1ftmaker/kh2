// coverage: addr=0x0022e6b0 symbol=func_0022e6b0 size=116 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:67.57;ghidra:near:37.62
#include "common/types.h"

extern "C" u32 func_001ba028(u32, u32, f32) asm("func_001ba028");

// 0x0022e6b0 func_0022e6b0
u32 func_0022e6b0(u32 a0, u32 a1, f32 fa0) asm("func_0022e6b0");
u32 func_0022e6b0(u32 a0, u32 a1, f32 fa0) {
    u32 v0;
    v0 = func_001ba028(a1, a1, fa0);
    if ((a0 != 1)) {
        if (((s32)(a0) < (s32)(2))) {
            if ((a0 == 0)) {
                *(f32*)((a1 + 0x34)) = fa0;
            }
        } else {
            if ((a0 == 2)) {
                *(f32*)((a1 + 0x30)) = fa0;
            }
        }
    } else {
        *(f32*)((a1 + 0x38)) = fa0;
    }
    return v0;
}
