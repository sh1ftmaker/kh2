// coverage: addr=0x00223608 symbol=func_00223608 size=140 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.94;m2c:near:53.06
#include "common/types.h"

extern "C" u32 D_00370c68 asm("D_00370c68");
extern "C" u32 func_002fdfc8(u32, u32, u32, u32, u32, u32) asm("func_002fdfc8");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");

// 0x00223608 func_00223608
u32 func_00223608(u32 a0, u32 a1) asm("func_00223608");
u32 func_00223608(u32 a0, u32 a1) {
    u32 s3;
    u32 s2;
    u32 s1;
    s3 = func_00313b80(*(f32*)(a1));
    s2 = func_00313b80(*(f32*)((a1 + 4)));
    s1 = func_00313b80(*(f32*)((a1 + 8)));
    return func_002fdfc8((u32)&D_00370c68, a0, s3, s2, s1, func_00313b80(*(f32*)((a1 + 0xc))));
}
