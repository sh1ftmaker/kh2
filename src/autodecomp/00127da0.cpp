// coverage: addr=0x00127da0 symbol=func_00127da0 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.78;m2c:compile:0.0
#include "common/types.h"


// 0x00127da0 func_00127da0
void func_00127da0(u32 a0) asm("func_00127da0");
void func_00127da0(u32 a0) {
    ((void(*)(u32))(*(u32*)(*(u32*)(a0))))(a0);
}
