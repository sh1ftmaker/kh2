// coverage: addr=0x00241670 symbol=func_00241670 size=84 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.36;ghidra:near:90.87;e3:near:60.2
#include "common/types.h"

extern "C" u32 D_0035ec90 asm("D_0035ec90");
extern "C" u32 func_00242418(u32, u32) asm("func_00242418");
extern "C" void func_00242408() asm("func_00242408");

// 0x00241670 func_00241670
u32 func_00241670(u32 a0) asm("func_00241670");
u32 func_00241670(u32 a0) {
    u32 s0;
    func_00242408();
    s0 = func_00242418(a0, 0x8a58);
    func_00242408();
    return ((u32)((s0 ^ func_00242418(*(u32*)(&D_0035ec90), 0x8a58))) < (u32)(1));
}
