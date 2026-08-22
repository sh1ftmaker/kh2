// coverage: addr=0x002b2840 symbol=func_002b2840 size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.07;m2c:near:84.66
#include "common/types.h"

extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 func_0023f900(u32) asm("func_0023f900");
extern "C" u32 func_00293d80(u32) asm("func_00293d80");
extern "C" void func_0023fad0(u32) asm("func_0023fad0");

// 0x002b2840 func_002b2840
u32 func_002b2840() asm("func_002b2840");
u32 func_002b2840() {
    u32 v0;
    if (((s32)((*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0x200)) != 0)) {
        if (((s32)(func_0023f900(*(u32*)(&D_0035f638))) != 0)) {
            func_0023fad0(*(u32*)(&D_0035f638));
        }
    }
    v0 = func_00293d80(0x13ed);
    *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xfffffdff);
    return v0;
}
