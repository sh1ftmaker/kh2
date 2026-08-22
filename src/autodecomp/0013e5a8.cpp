// coverage: addr=0x0013e5a8 symbol=func_0013e5a8 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.19;ghidra:near:77.16
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0013e610(u32) asm("func_0013e610");
extern "C" void func_00139510(u32) asm("func_00139510");

// 0x0013e5a8 func_0013e5a8
u32 func_0013e5a8(u32 a0) asm("func_0013e5a8");
u32 func_0013e5a8(u32 a0) {
    if (((s32)(func_00139d78(a0)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(a0) + 0x14))))(a0);
    }
    if (((s32)(func_00139d78(a0 + 0x1c0)) != 0)) {
        func_00139510(a0 + 0x1c0);
    }
    return func_0013e610(*(u32*)((a0 + 0x1b4)));
}
