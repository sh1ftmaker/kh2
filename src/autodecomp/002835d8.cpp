// coverage: addr=0x002835d8 symbol=func_002835d8 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.12;m2c:near:85.39
#include "common/types.h"

extern "C" u32 D_0035f2b8 asm("D_0035f2b8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00283960(u32) asm("func_00283960");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x002835d8 func_002835d8
u32 func_002835d8() asm("func_002835d8");
u32 func_002835d8() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035f2b8) + 0x354)) != 0)) {
        func_00139510(*(u32*)(&D_0035f2b8) + 0x354);
    }
    return func_00283960(1);
}
