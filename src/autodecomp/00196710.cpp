// coverage: addr=0x00196710 symbol=func_00196710 size=88 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.65;m2c:near:95.61
#include "common/types.h"

extern "C" u32 D_01c61b08 asm("D_01c61b08");
extern "C" u32 func_00196388(u32, u32) asm("func_00196388");
extern "C" u32 func_001963f8(u32) asm("func_001963f8");
extern "C" void func_00196698(u32) asm("func_00196698");

// 0x00196710 func_00196710
u32 func_00196710(u32 a0) asm("func_00196710");
u32 func_00196710(u32 a0) {
    u32 s0;
    u32 v0;
    func_00196698(a0);
    s0 = ((a0 << 1) + *(u32*)(&D_01c61b08));
    v0 = func_00196388(*(u8*)((((a0 << 1) + *(u32*)(&D_01c61b08)) + 2)), *(u8*)((((a0 << 1) + *(u32*)(&D_01c61b08)) + 3)));
    if (((s32)(v0) >= 0)) {
        return func_001963f8(v0);
    } else {
        return v0;
    }
}
