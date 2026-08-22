// coverage: addr=0x0031a350 symbol=func_0031a350 size=132 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0
#include "common/types.h"

extern "C" u32 D_00347dd0 asm("D_00347dd0");
extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_002361a0(u32) asm("func_002361a0");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0031a350 func_0031a350
u32 func_0031a350(u32 a0) asm("func_0031a350");
u32 func_0031a350(u32 a0) {
    *(u32*)(a0) = (u32)&D_00347f98;
    func_0031a838(a0 + 0xc);
    *(u32*)(a0) = (u32)&D_00347e60;
    func_00239700(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_00347dd0;
    *(u32*)((a0 + 0x198)) = 0;
    *(u32*)((a0 + 0x1c0)) = (u32)&D_00347e80;
    *(u32*)((a0 + 0x1cc)) = 0;
    func_002361a0(a0 + 0x1e0);
    *(u32*)((a0 + 0x380)) = (u32)&D_00347e60;
    *(u32*)((a0 + 0x38c)) = 0;
    return func_00239700(a0 + 0x398);
}
