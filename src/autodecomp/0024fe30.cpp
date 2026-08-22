// coverage: addr=0x0024fe30 symbol=func_0024fe30 size=200 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.53;m2c:near:56.12
#include "common/types.h"

extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee38 asm("D_0035ee38");
extern "C" u32 D_0035ee3c asm("D_0035ee3c");
extern "C" u32 D_0035ee40 asm("D_0035ee40");
extern "C" u32 D_0035ee44 asm("D_0035ee44");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ce38() asm("func_0028ce38");
extern "C" void func_00250928() asm("func_00250928");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x0024fe30 func_0024fe30
u32 func_0024fe30() asm("func_0024fe30");
u32 func_0024fe30() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035ee3c))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee3c)) + 0x14))))(*(u32*)(&D_0035ee3c));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ee44))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee44)) + 0x14))))(*(u32*)(&D_0035ee44));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ee40))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ee40)) + 0x14))))(*(u32*)(&D_0035ee40));
    }
    if ((func_0028acc8(*(u32*)(&D_0035ee34)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ee34));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ee38))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ee38));
    }
    func_00250928();
    return func_0028ce38();
}
