// coverage: addr=0x00248828 symbol=func_00248828 size=200 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.53;m2c:near:56.12
#include "common/types.h"

extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed50 asm("D_0035ed50");
extern "C" u32 D_0035ed54 asm("D_0035ed54");
extern "C" u32 D_0035ed58 asm("D_0035ed58");
extern "C" u32 D_0035ed5c asm("D_0035ed5c");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ce38() asm("func_0028ce38");
extern "C" void func_00249358() asm("func_00249358");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00248828 func_00248828
u32 func_00248828() asm("func_00248828");
u32 func_00248828() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed54))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed54)) + 0x14))))(*(u32*)(&D_0035ed54));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed5c))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed5c)) + 0x14))))(*(u32*)(&D_0035ed5c));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed58))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed58)) + 0x14))))(*(u32*)(&D_0035ed58));
    }
    if ((func_0028acc8(*(u32*)(&D_0035ed4c)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ed4c));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ed50))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ed50));
    }
    func_00249358();
    return func_0028ce38();
}
