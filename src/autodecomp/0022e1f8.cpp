// coverage: addr=0x0022e1f8 symbol=func_0022e1f8 size=144 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:70.88
#include "common/types.h"

extern "C" u32 D_0022e160 asm("D_0022e160");
extern "C" u32 func_00168388(u32, u32, u32, u32) asm("func_00168388");
extern "C" u32 func_00227870(u32, u32, u32) asm("func_00227870");
extern "C" u32 func_00227a28(u32, u32) asm("func_00227a28");
extern "C" u32 func_0022e188(u32) asm("func_0022e188");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x0022e1f8 func_0022e1f8
u32 func_0022e1f8(u32 a0, u32 a1) asm("func_0022e1f8");
u32 func_0022e1f8(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    v0 = func_00227a28(a0, a1);
    *(u32*)(v0) = 2;
    *(u32*)((v0 + 0xc)) = a1;
    *(u32*)((v0 + 0x10)) = 0xffffffff;
    func_002ff2e8(v0 + 0x30, a0);
    v0_0 = func_0022e188(a0);
    v0_1 = func_00227870(v0_0, v0, 0);
    *(u32*)((v0 + 0x14)) = v0_1;
    return func_00168388(v0_0, v0_1, (u32)&D_0022e160, v0);
}
