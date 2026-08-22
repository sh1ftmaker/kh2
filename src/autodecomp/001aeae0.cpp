// coverage: addr=0x001aeae0 symbol=func_001aeae0 size=28 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;corpus:exact:100.0;ghidra:exact:100.0;m2c:near:48.2
#include "common/types.h"

extern "C" u32 D_00350cc8 asm("D_00350cc8");
extern "C" u32 D_00350ccc asm("D_00350ccc");
extern "C" u32 D_00350cd0 asm("D_00350cd0");

// 0x001aeae0 func_001aeae0
void func_001aeae0() asm("func_001aeae0");
void func_001aeae0() {
    *(u32*)(&D_00350cc8) = 0;
    *(u32*)(&D_00350cd0) = 0;
    *(u32*)(&D_00350ccc) = 0;
}
