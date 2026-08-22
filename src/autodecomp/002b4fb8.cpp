// coverage: addr=0x002b4fb8 symbol=func_002b4fb8 size=64 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:87.78;ghidra:near:55.28;m2c:near:52.26
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");

// 0x002b4fb8 func_002b4fb8
u32 func_002b4fb8() asm("func_002b4fb8");
u32 func_002b4fb8() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    if (((s32)(*(u32*)(&D_0035f654)) != 0)) {
        v0 = func_00139d78(*(u32*)(&D_0035f654));
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    if (((s32)(v0_0) != 0)) {
        v0_1 = func_0028acc8(*(u32*)(&D_0035f650));
        v0_0 = v0_1;
    }
    return v0_0;
}
