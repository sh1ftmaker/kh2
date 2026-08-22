// coverage: addr=0x002b4f50 symbol=func_002b4f50 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:93.08;ghidra:near:90.0;m2c:near:55.34
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f6d0 asm("D_0035f6d0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028abe0(u32) asm("func_0028abe0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002b4f50 func_002b4f50
u32 func_002b4f50() asm("func_002b4f50");
u32 func_002b4f50() {
    u32 v0;
    u32 v0_0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f654))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f654)) + 0x14))))(*(u32*)(&D_0035f654));
    }
    v0 = func_0028acc8(*(u32*)(&D_0035f650));
    if (((s32)(v0) != 0)) {
        v0_0 = func_0028abe0(*(u32*)(&D_0035f650));
        v0 = v0_0;
    }
    *(u8*)(&D_0035f6d0) = 0;
    return v0;
}
