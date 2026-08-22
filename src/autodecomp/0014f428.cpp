// coverage: addr=0x0014f428 symbol=_Z13func_0014f428Pv size=172 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.07;m2c:near:90.38;e3:near:79.4
#include "common/types.h"

extern "C" u32 D_0034a428 asm("D_0034a428");
extern "C" u32 D_0034a42c asm("D_0034a42c");
extern "C" u32 D_0034a430 asm("D_0034a430");
extern "C" u32 D_0034a434 asm("D_0034a434");

// 0x0014f428 func_0014f428(void*)
void lift_0014f428() asm("_Z13func_0014f428Pv");
void lift_0014f428() {
    if (((s32)(*(u32*)(&D_0034a434)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034a434)) + 0x10))))(*(u32*)(&D_0034a434));
        *(u32*)(&D_0034a434) = 0;
    }
    if (((s32)(*(u32*)(&D_0034a430)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034a430)) + 0x10))))(*(u32*)(&D_0034a430));
        *(u32*)(&D_0034a430) = 0;
    }
    if (((s32)(*(u32*)(&D_0034a42c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034a42c)) + 0x10))))(*(u32*)(&D_0034a42c));
        *(u32*)(&D_0034a42c) = 0;
    }
    if (((s32)(*(u32*)(&D_0034a428)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0034a428)) + 0x10))))(*(u32*)(&D_0034a428));
        *(u32*)(&D_0034a428) = 0;
    }
    return;
}
