// coverage: addr=0x00243f48 symbol=func_00243f48 size=272 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.17;m2c:near:58.39
#include "common/types.h"

extern "C" u32 D_0035ece8 asm("D_0035ece8");
extern "C" u32 D_0035ecec asm("D_0035ecec");
extern "C" u32 D_0035ecf0 asm("D_0035ecf0");
extern "C" u32 D_0035ecf4 asm("D_0035ecf4");
extern "C" u32 D_0035ecf8 asm("D_0035ecf8");
extern "C" u32 D_0035ecfc asm("D_0035ecfc");
extern "C" u32 D_0035ed00 asm("D_0035ed00");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ce38() asm("func_0028ce38");
extern "C" void func_00244db8() asm("func_00244db8");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00243f48 func_00243f48
u32 func_00243f48() asm("func_00243f48");
u32 func_00243f48() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035ecf0))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ecf0)) + 0x14))))(*(u32*)(&D_0035ecf0));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ecf8))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ecf8)) + 0x14))))(*(u32*)(&D_0035ecf8));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ecf4))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ecf4)) + 0x14))))(*(u32*)(&D_0035ecf4));
    }
    if ((func_0028acc8(*(u32*)(&D_0035ece8)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ece8));
    }
    if ((func_0028acc8(*(u32*)(&D_0035ecec)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ecec));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ecfc))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ecfc)) + 0x14))))(*(u32*)(&D_0035ecfc));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed00))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed00)) + 0x14))))(*(u32*)(&D_0035ed00));
    }
    func_00244db8();
    return func_0028ce38();
}
