// coverage: addr=0x0013d9e0 symbol=_Z16u_call0_0013d9e0v size=208 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.63;m2c:near:89.14;e3:near:88.58
#include "common/types.h"

extern "C" u32 D_003485e8 asm("D_003485e8");
extern "C" u32 D_003485ec asm("D_003485ec");
extern "C" u32 D_003485f0 asm("D_003485f0");
extern "C" u32 D_003485f4 asm("D_003485f4");
extern "C" u32 D_003485f8 asm("D_003485f8");

// 0x0013d9e0 u_call0_0013d9e0()
void lift_0013d9e0() asm("_Z16u_call0_0013d9e0v");
void lift_0013d9e0() {
    if ((*(u32*)(&D_003485f8) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_003485f8)) + 0x10))))(*(u32*)(&D_003485f8));
        *(u32*)(&D_003485f8) = 0;
    }
    if ((*(u32*)(&D_003485f4) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_003485f4)) + 0x10))))(*(u32*)(&D_003485f4));
        *(u32*)(&D_003485f4) = 0;
    }
    if ((*(u32*)(&D_003485f0) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_003485f0)) + 0x10))))(*(u32*)(&D_003485f0));
        *(u32*)(&D_003485f0) = 0;
    }
    if ((*(u32*)(&D_003485ec) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_003485ec)) + 0x10))))(*(u32*)(&D_003485ec));
        *(u32*)(&D_003485ec) = 0;
    }
    if ((*(u32*)(&D_003485e8) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_003485e8)) + 0x10))))(*(u32*)(&D_003485e8));
        *(u32*)(&D_003485e8) = 0;
    }
    return;
}
