// coverage: addr=0x00269f58 symbol=func_00269f58 size=100 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:87.73
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 func_00257780() asm("func_00257780");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");

// 0x00269f58 func_00269f58
u32 func_00269f58() asm("func_00269f58");
u32 func_00269f58() {
    u32 v0;
    v0 = func_00257780();
    if (((s32)(v0) == 0)) {
        if (((s32)(*(u32*)(&D_0035f04c)) != 0)) {
            v0 = ((u32)(0) < (u32)(func_0028be58(*(u32*)(&D_0035f04c))));
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(*(u32*)(&D_0035f01c)) != 0)) {
                v0 = ((u32)(0) < (u32)(func_0028acc8(*(u32*)(&D_0035f01c))));
            }
        }
    }
    return v0;
}
