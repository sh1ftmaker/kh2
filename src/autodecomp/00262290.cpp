// coverage: addr=0x00262290 symbol=func_00262290 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:near:88.61;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00256b68(u32) asm("func_00256b68");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");

// 0x00262290 func_00262290
u32 func_00262290() asm("func_00262290");
u32 func_00262290() {
    u32 v0;
    v0 = func_00139d78(func_00256b68(1));
    if (((s32)(v0) == 0)) {
        if (((s32)(*(u32*)(&D_0035f01c)) != 0)) {
            v0 = ((u32)(0) < (u32)(func_0028acc8(*(u32*)(&D_0035f01c))));
        }
        if (((s32)(v0) == 0)) {
            if (((s32)(*(u32*)(&D_0035f04c)) != 0)) {
                v0 = ((u32)(0) < (u32)(func_0028be58(*(u32*)(&D_0035f04c))));
            }
        }
    }
    return v0;
}
