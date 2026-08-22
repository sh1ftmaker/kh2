// coverage: addr=0x00245ce8 symbol=func_00245ce8 size=216 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.56;m2c:near:58.95
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed24 asm("D_0035ed24");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed2c asm("D_0035ed2c");
extern "C" u32 D_0035ed30 asm("D_0035ed30");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00247bb0() asm("func_00247bb0");
extern "C" u32 func_00287dc0() asm("func_00287dc0");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0023d820(u32) asm("func_0023d820");
extern "C" void func_00246f80() asm("func_00246f80");
extern "C" void func_0028abe0(u32) asm("func_0028abe0");

// 0x00245ce8 func_00245ce8
u32 func_00245ce8() asm("func_00245ce8");
u32 func_00245ce8() {
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed28))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed28)) + 0x14))))(*(u32*)(&D_0035ed28));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed30))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed30)) + 0x14))))(*(u32*)(&D_0035ed30));
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed2c))) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035ed2c)) + 0x14))))(*(u32*)(&D_0035ed2c));
    }
    if ((func_0028acc8(*(u32*)(&D_0035ed20)) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ed20));
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ed24))) != 0)) {
        func_0028abe0(*(u32*)(&D_0035ed24));
    }
    func_00246f80();
    func_0023d820(func_00287dc0());
    return func_00247bb0();
}
