// coverage: addr=0x00166c80 symbol=func_00166c80 size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:52.09;ghidra:near:28.89
#include "common/types.h"

extern "C" u32 D_0034c874 asm("D_0034c874");
extern "C" u32 D_0034c876 asm("D_0034c876");

// 0x00166c80 func_00166c80
void func_00166c80(u32 a0, u32 a1) asm("func_00166c80");
void func_00166c80(u32 a0, u32 a1) {
    *(u16*)(&D_0034c874) = ((s32)((a0 << 0x10)) >> 0x10);
    *(u16*)(&D_0034c876) = ((s32)((a1 << 0x10)) >> 0x10);
}
