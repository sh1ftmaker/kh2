// coverage: addr=0x0029dd00 symbol=func_0029dd00 size=96 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.6;m2c:near:57.7
#include "common/types.h"

extern "C" u32 D_0035f5ac asm("D_0035f5ac");
extern "C" u32 D_0035f5c8 asm("D_0035f5c8");
extern "C" u32 D_0035f5cc asm("D_0035f5cc");
extern "C" u32 func_002931a8(u32) asm("func_002931a8");
extern "C" u32 func_00293de8(u32) asm("func_00293de8");
extern "C" u32 func_002ff918(u32, u32) asm("func_002ff918");
extern "C" void func_00293cb8(u32, u32, u32) asm("func_00293cb8");
extern "C" void func_002ff2e8(u32, u32) asm("func_002ff2e8");

// 0x0029dd00 func_0029dd00
u32 func_0029dd00() asm("func_0029dd00");
u32 func_0029dd00() {
    u8 frame[128];
    u32 v0;
    func_00293cb8((u32)frame, 4, func_00293de8(*(s8*)((*(u32*)(&D_0035f5ac) + 4))));
    v0 = func_002ff918((u32)frame, *(u32*)(&D_0035f5c8));
    if (((s32)(v0) != 0)) {
        func_002ff2e8(v0, *(u32*)(&D_0035f5cc));
    }
    return func_002931a8((u32)frame);
}
