// coverage: addr=0x0026dd18 symbol=func_0026dd18 size=36 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:70.0;m2c:near:48.93
#include "common/types.h"

extern "C" u32 D_0035f118 asm("D_0035f118");
extern "C" u32 D_0035f11c asm("D_0035f11c");
extern "C" u32 D_0035f120 asm("D_0035f120");

// 0x0026dd18 func_0026dd18
void func_0026dd18(u32 a0, u32 a1, u32 a2) asm("func_0026dd18");
void func_0026dd18(u32 a0, u32 a1, u32 a2) {
    *(u32*)(&D_0035f118) = a0;
    *(u32*)(&D_0035f11c) = a1;
    if (((s32)(a2) >= 0)) {
        *(u8*)(&D_0035f120) = a2;
    }
    return;
}
