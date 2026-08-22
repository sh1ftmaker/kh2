// coverage: addr=0x001dced0 symbol=func_001dced0 size=136 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.76;m2c:near:73.18
#include "common/types.h"

extern "C" u32 D_00352af0 asm("D_00352af0");
extern "C" u32 D_01d5bb00 asm("D_01d5bb00");
extern "C" u32 D_01d5bb04 asm("D_01d5bb04");
extern "C" u32 D_01d5bb08 asm("D_01d5bb08");
extern "C" u32 func_001dd208(u32) asm("func_001dd208");
extern "C" void func_001dcfb0() asm("func_001dcfb0");

// 0x001dced0 func_001dced0
u32 func_001dced0() asm("func_001dced0");
u32 func_001dced0() {
    u32 v0;
    func_001dcfb0();
    if (((s32)(*(u32*)(&D_01d5bb04)) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_01d5bb00)) + 4))))(*(u32*)(&D_01d5bb00), *(u32*)(&D_01d5bb04));
        *(u32*)(&D_01d5bb04) = 0;
    }
    if (((s32)(*(u32*)(&D_01d5bb08)) != 0)) {
        ((void(*)(u32, u32))(*(u32*)((*(u32*)(*(u32*)(&D_01d5bb00)) + 4))))(*(u32*)(&D_01d5bb00), *(u32*)(&D_01d5bb08));
        *(u32*)(&D_01d5bb08) = 0;
    }
    v0 = func_001dd208(0);
    *(u8*)(&D_00352af0) = 0;
    return v0;
}
