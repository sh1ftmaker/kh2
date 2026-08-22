// coverage: addr=0x002bd7d8 symbol=func_002bd7d8 size=92 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:97.39;m2c:near:45.04;e3:near:9.26
#include "common/types.h"

extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_003617ec asm("D_003617ec");
extern "C" u32 D_003617f0 asm("D_003617f0");
extern "C" u32 D_003617f4 asm("D_003617f4");
extern "C" u32 D_003617f8 asm("D_003617f8");
extern "C" u32 func_00102670(u32, u32) asm("func_00102670");
extern "C" void func_002b8a70(u32) asm("func_002b8a70");

// 0x002bd7d8 func_002bd7d8
u32 func_002bd7d8() asm("func_002bd7d8");
u32 func_002bd7d8() {
    u32 v0;
    func_002b8a70(*(u32*)(&D_003617ec));
    *(u32*)(&D_003617ec) = 0;
    *(u32*)(&D_003617f0) = 0;
    v0 = func_00102670(*(u32*)(&D_0032b91c), *(u32*)(&D_003617f4));
    *(u32*)(&D_003617f4) = 0;
    *(u8*)(&D_003617f8) = 0;
    return v0;
}
