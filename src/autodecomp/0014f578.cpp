// coverage: addr=0x0014f578 symbol=func_0014f578 size=88 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.48;ghidra:near:84.83;e3:near:78.57
#include "common/types.h"

extern "C" u32 D_0034a42c asm("D_0034a42c");
extern "C" u32 func_001507b8(u32, u32) asm("func_001507b8");
extern "C" u32 func_00150940(u32, u32) asm("func_00150940");
extern "C" u32 func_00150bc0(u32) asm("func_00150bc0");

// 0x0014f578 func_0014f578
u32 func_0014f578(u32 a0) asm("func_0014f578");
u32 func_0014f578(u32 a0) {
    if (((s32)(func_00150bc0(*(u32*)(&D_0034a42c))) != 0)) {
        return func_00150940(*(u32*)(&D_0034a42c), a0);
    } else {
        return func_001507b8(*(u32*)(&D_0034a42c), a0);
    }
}
