// coverage: addr=0x002bd788 symbol=func_002bd788 size=80 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.5;ghidra:near:86.4;m2c:near:58.17;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_002bd870 asm("D_002bd870");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_003617ec asm("D_003617ec");
extern "C" u32 D_003617f4 asm("D_003617f4");
extern "C" u32 D_003617f8 asm("D_003617f8");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_002b871c(u32) asm("func_002b871c");

// 0x002bd788 func_002bd788
u32 func_002bd788(u32 a0) asm("func_002bd788");
u32 func_002bd788(u32 a0) {
    u32 v0;
    *(u8*)(&D_003617f8) = 0;
    *(u32*)(&D_003617ec) = a0;
    func_002b871c(a0);
    v0 = func_00102788(*(u32*)(&D_0032b91c), 0, 0x5cc60, (u32)&D_002bd870);
    *(u32*)(&D_003617f4) = v0;
    return v0;
}
