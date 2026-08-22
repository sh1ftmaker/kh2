// coverage: addr=0x00275d10 symbol=func_00275d10 size=192 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:82.88;m2c:near:21.9
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f20c asm("D_0035f20c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x00275d10 func_00275d10
u32 func_00275d10() asm("func_00275d10");
u32 func_00275d10() {
    u8 frame[16];
    u32 v0;
    u32 v0_0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f20c))) == 0)) {
        *(u32*)((u32)frame) = 0;
        func_0028d980(*(u32*)(&D_0035f20c), 0x7558, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x2f, 0x30, 0xffffffff);
        *(u32*)((*(u32*)(&D_0035f20c) + 0x1b0)) = 2;
    }
    v0 = func_00139d78(*(u32*)(&D_0035f20c) + 0x1b4);
    if (((s32)(v0) == 0)) {
        *(u32*)((u32)frame) = 0;
        v0_0 = func_0028d980(*(u32*)(&D_0035f20c) + 0x1b4, 0x7558, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x32, 0x33, 0xffffffff);
        *(u32*)((*(u32*)(&D_0035f20c) + 0x364)) = 2;
        v0 = v0_0;
    }
    return v0;
}
