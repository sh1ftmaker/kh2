// coverage: addr=0x00292a58 symbol=func_00292a58 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.71;m2c:near:54.18
#include "common/types.h"

extern "C" u32 D_0035f4bc asm("D_0035f4bc");
extern "C" u32 D_0035f4d4 asm("D_0035f4d4");
extern "C" u32 D_0035f4d8 asm("D_0035f4d8");
extern "C" u32 func_00292998() asm("func_00292998");
extern "C" void func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x00292a58 func_00292a58
u32 func_00292a58() asm("func_00292a58");
u32 func_00292a58() {
    *(u16*)(&D_0035f4d8) = 0;
    func_002fde18(*(u32*)(&D_0035f4d4), 0, *(u32*)(&D_0035f4bc) << 4);
    return func_00292998();
}
