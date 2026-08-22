// coverage: addr=0x0024bcb8 symbol=func_0024bcb8 size=200 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:85.53;m2c:near:56.12
#include "common/types.h"

extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edac asm("D_0035edac");
extern "C" u32 D_0035edb0 asm("D_0035edb0");
extern "C" u32 D_0035edb4 asm("D_0035edb4");
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028ce38() asm("func_0028ce38");
extern "C" void func_0024c828() asm("func_0024c828");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x0024bcb8 func_0024bcb8
u32 func_0024bcb8() asm("func_0024bcb8");
u32 func_0024bcb8() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035edb0))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb0)) + 0x14))))(*(u32*)(&D_0035edb0));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035edb8))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb8)) + 0x14))))(*(u32*)(&D_0035edb8));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035edb4))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035edb4)) + 0x14))))(*(u32*)(&D_0035edb4));
    }
    if ((func_0028acc8(*(u32*)(&D_0035eda8)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035eda8));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035edac))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035edac));
    }
    func_0024c828();
    return func_0028ce38();
}
