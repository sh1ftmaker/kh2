// coverage: addr=0x00198ae0 symbol=func_00198ae0 size=164 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:80.09;m2c:near:78.98
#include "common/types.h"

extern "C" u32 func_0019f528(u32, u32, u32, u32) asm("func_0019f528");
extern "C" u32 func_0019f550(u32, u32) asm("func_0019f550");
extern "C" void func_0019f490(u32, u32) asm("func_0019f490");

// 0x00198ae0 func_00198ae0
void func_00198ae0(u32 a0, u32 a1, u32 a2, u32 a3) asm("func_00198ae0");
void func_00198ae0(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (((s32)(func_0019f528(a0 + 0x47c, a2, a2, a3)) != 0) || ((s32)(func_0019f550(a0 + 0x47c, a2)) == 0)) {
        func_0019f490(a0 + 0x474, a2);
        ((void(*)(u32, u32, u32, u32, u32))(*(u32*)((*(u32*)(a0) + 0x50))))(a0, a1, a2, a0, a3);
    }
    return;
}
