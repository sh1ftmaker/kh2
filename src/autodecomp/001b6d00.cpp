// coverage: addr=0x001b6d00 symbol=func_001b6d00 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:exact:100.0;m2c:near:82.76
#include "common/types.h"

extern "C" u32 D_00351184 asm("D_00351184");
extern "C" u32 D_00351214 asm("D_00351214");
extern "C" void func_00102670(u32, u32) asm("func_00102670");

// 0x001b6d00 func_001b6d00
void func_001b6d00() asm("func_001b6d00");
void func_001b6d00() {
    if ((*(u32*)(&D_00351184) != 0)) {
        func_00102670(*(u32*)(&D_00351214), *(u32*)((*(u32*)(&D_00351184) + 0x18)));
        *(u32*)(&D_00351184) = 0;
    }
    return;
}
