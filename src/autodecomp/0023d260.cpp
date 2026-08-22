// coverage: addr=0x0023d260 symbol=func_0023d260 size=80 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:94.0;m2c:near:64.33
#include "common/types.h"

extern "C" u32 D_00349e1c asm("D_00349e1c");
extern "C" u32 D_00349e20 asm("D_00349e20");
extern "C" u32 D_0035eb50 asm("D_0035eb50");
extern "C" u32 D_0035eb54 asm("D_0035eb54");
extern "C" u32 func_00257000() asm("func_00257000");
extern "C" void func_0023d2b0() asm("func_0023d2b0");
extern "C" void func_00253638() asm("func_00253638");

// 0x0023d260 func_0023d260
u32 func_0023d260() asm("func_0023d260");
u32 func_0023d260() {
    u32 v0;
    func_0023d2b0();
    func_00253638();
    v0 = func_00257000();
    *(u8*)(&D_0035eb50) = ((u32)(*(u8*)(&D_00349e20)) < (u32)(1));
    *(u32*)(&D_0035eb54) = *(u32*)(&D_00349e1c);
    return v0;
}
