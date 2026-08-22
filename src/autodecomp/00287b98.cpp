// coverage: addr=0x00287b98 symbol=func_00287b98 size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;corpus:near:94.0;m2c:near:67.0
#include "common/types.h"

extern "C" u32 D_0035f2f8 asm("D_0035f2f8");
extern "C" u32 func_00287c20() asm("func_00287c20");
extern "C" void func_00287c78() asm("func_00287c78");

// 0x00287b98 func_00287b98
u32 func_00287b98() asm("func_00287b98");
u32 func_00287b98() {
    *(u32*)(&D_0035f2f8) = (*(u32*)(&D_0035f2f8) + -1);
    func_00287c78();
    return func_00287c20();
}
