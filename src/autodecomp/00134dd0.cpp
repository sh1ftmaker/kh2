// coverage: addr=0x00134dd0 symbol=func_00134dd0 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:96.5;m2c:near:78.5
#include "common/types.h"

extern "C" u32 func_00134730(u32, u32, u32, u32, u32) asm("func_00134730");

// 0x00134dd0 func_00134dd0
u32 func_00134dd0(u32 a0, u32 a1, u32 a2) asm("func_00134dd0");
u32 func_00134dd0(u32 a0, u32 a1, u32 a2) {
    return func_00134730(a2, a1, a0, 0, 0);
}
