// coverage: addr=0x0011c828 symbol=_Z16wtarget_0011c828jjjj size=104 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:50.0;ghidra:near:48.15
#include "common/types.h"

extern "C" u32 func_0011f078(u32, u32) asm("func_0011f078");

// 0x0011c828 wtarget_0011c828(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_0011c828(u32 a0, u32 a1) asm("_Z16wtarget_0011c828jjjj");
u32 lift_0011c828(u32 a0, u32 a1) {
    u32 v0;
    ((void(*)(u32, u32, u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x14))) + 0x44))))(*(u32*)((a0 + 0x14)), *(u32*)((a0 + 0x104)), a1);
    v0 = func_0011f078(*(u32*)((a0 + 0x14)), *(u32*)((a0 + 0x104)));
    if ((v0 != 0)) {
        *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) | 2);
    } else {
        *(u32*)((a0 + 0xc)) = (*(u32*)((a0 + 0xc)) & 0xfffffffd);
    }
    return v0;
}
