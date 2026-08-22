// coverage: addr=0x002bfb40 symbol=func_002bfb40 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:69.91;e3:near:63.32
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00361a50 asm("D_00361a50");
extern "C" u32 func_00139858(u32) asm("func_00139858");
extern "C" void func_00197780() asm("func_00197780");
extern "C" void func_00197cc0() asm("func_00197cc0");
extern "C" void func_001c11a8(u32) asm("func_001c11a8");

// 0x002bfb40 func_002bfb40
u32 func_002bfb40() asm("func_002bfb40");
u32 func_002bfb40() {
    *(u32*)(&D_00361a50) = 0;
    func_001c11a8(0xc);
    *(u32*)((*(u32*)((*(u32*)(&D_0034e948) + 0xb40)) + 0x2c)) = (*(u32*)((*(u32*)((*(u32*)(&D_0034e948) + 0xb40)) + 0x2c)) & 0xfffffffe);
    func_00197780();
    func_00197cc0();
    return func_00139858(0xc9);
}
