// coverage: addr=0x00241568 symbol=func_00241568 size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.38;m2c:near:31.0
#include "common/types.h"

extern "C" u32 D_0035ec88 asm("D_0035ec88");
extern "C" u32 D_0035ec94 asm("D_0035ec94");
extern "C" u32 func_00234670(u32, u32, u32, u32, u32) asm("func_00234670");

// 0x00241568 func_00241568
u32 func_00241568() asm("func_00241568");
u32 func_00241568() {
    return func_00234670(*(s8*)(*(u32*)(&D_0035ec94)), *(u32*)(&D_0035ec88), 0, 0, 0);
}
