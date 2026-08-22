// coverage: addr=0x001507b8 symbol=func_001507b8 size=228 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:92.0;ghidra:near:76.98;m2c:near:67.61
#include "common/types.h"

extern "C" u32 func_0013a7e8(u32, u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_001508a0(u32, u32) asm("func_001508a0");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138d60(u32, u32, u32, u32, u32, u32, u32) asm("func_00138d60");
extern "C" void func_0014fc40(u32, u32, u32, u32, u32, u32) asm("func_0014fc40");

// 0x001507b8 func_001507b8
u32 func_001507b8(u32 a0, u32 a1) asm("func_001507b8");
u32 func_001507b8(u32 a0, u32 a1) {
    u32 s2;
    u32 v0;
    u32 s3;
    u32 s4;
    s2 = func_0013a7e8(1, a1);
    v0 = func_0013d7e0();
    s3 = (a0 + 0x30);
    func_00138d60(s3, 0x1f40, s2, v0, 0, a1, 7);
    s4 = (a0 + 0x230);
    func_001386e0(s4, 0x1f40, s2, v0, 0, 7);
    *(u32*)((s3 + 0x188)) = 1;
    *(u32*)((s4 + 0x188)) = 2;
    func_0014fc40(a0, 1, func_0023aa78(a0 + 0x48), 0x1f40, 7, 0);
    *(u32*)((a0 + 0x3cc)) = 0;
    return func_001508a0(a0, a1);
}
