// coverage: addr=0x002b5658 symbol=func_002b5658 size=144 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.17;m2c:near:79.49
#include "common/types.h"

extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f658 asm("D_0035f658");
extern "C" u32 D_0035f678 asm("D_0035f678");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028be58(u32) asm("func_0028be58");
extern "C" u32 func_002b5af0() asm("func_002b5af0");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");
extern "C" void func_0028be18(u32) asm("func_0028be18");

// 0x002b5658 func_002b5658
u32 func_002b5658() asm("func_002b5658");
u32 func_002b5658() {
    if (((s32)(*(u32*)(&D_0035f658)) != 0)) {
        if (((s32)(func_00139d78(*(u32*)(&D_0035f658))) != 0)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f658)) + 0x14))))(*(u32*)(&D_0035f658));
        }
    }
    if (((s32)(*(u32*)(&D_0035f64c)) != 0)) {
        if ((func_0028acc8(*(u32*)(&D_0035f64c)) != 0)) {
            func_0028abe0(*(u32*)(&D_0035f64c));
        }
    }
    if ((func_0028be58(*(u32*)(&D_0035f678)) != 0)) {
        func_0028be18(*(u32*)(&D_0035f678));
    }
    return func_002b5af0();
}
