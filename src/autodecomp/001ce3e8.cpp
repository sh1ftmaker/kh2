// coverage: addr=0x001ce3e8 symbol=func_001ce3e8 size=108 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:98.26;ghidra:near:84.0
#include "common/types.h"

extern "C" u32 D_00352140 asm("D_00352140");
extern "C" u32 D_01d5b9e0 asm("D_01d5b9e0");
extern "C" u32 func_001dba88(u32) asm("func_001dba88");
extern "C" void func_001980d0(u32, u32, u32) asm("func_001980d0");

// 0x001ce3e8 func_001ce3e8
u32 func_001ce3e8(u32 a0, u32 a1, u32 a2) asm("func_001ce3e8");
u32 func_001ce3e8(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    func_001980d0(a0, a2, 4);
    *(u32*)(a0) = (u32)&D_00352140;
    *(u32*)((a0 + 0x9f4)) = a1;
    v0 = func_001dba88(a1);
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x800000);
    *(u32*)((a0 + 0x9f8)) = (u32)&D_01d5b9e0;
    return v0;
}
