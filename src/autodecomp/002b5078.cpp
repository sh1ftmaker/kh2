// coverage: addr=0x002b5078 symbol=func_002b5078 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:87.77;ghidra:near:79.57
#include "common/types.h"

extern "C" u32 D_0035f650 asm("D_0035f650");
extern "C" u32 D_0035f654 asm("D_0035f654");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_0028ab20(u32) asm("func_0028ab20");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0028da70(u32, u32) asm("func_0028da70");

// 0x002b5078 func_002b5078
u32 func_002b5078() asm("func_002b5078");
u32 func_002b5078() {
    u32 v0;
    func_00139d78(*(u32*)(&D_0035f654));
    func_0028da70(*(u32*)(&D_0035f654), *(s16*)((*(u32*)((*(u32*)(&D_0035f6cc) + 0x14)) + 4)));
    v0 = func_0028acc8(*(u32*)(&D_0035f650));
    if (((s32)(v0) != 0)) {
        return func_0028ab20(*(u32*)(&D_0035f650));
    } else {
        return v0;
    }
}
