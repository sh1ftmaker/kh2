// coverage: addr=0x0026e140 symbol=func_0026e140 size=160 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:84.58;m2c:near:49.52;e3:near:29.96
#include "common/types.h"

extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" void func_00139d78(u32, u32, u32) asm("func_00139d78");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");

// 0x0026e140 func_0026e140
void func_0026e140(u32 a0, u32 a1, u32 a2) asm("func_0026e140");
void func_0026e140(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    u32 s2;
    u32 s0;
    s2 = (a0 * 0x1b4);
    func_00139d78(*(u32*)(&D_0035f104) + s2, a1, a2);
    *(u32*)((u32)frame) = 0;
    func_0028d980(*(u32*)(&D_0035f104) + s2, *(u32*)(&D_0035f3d4), 0, 0, *(u32*)(&D_0035f100), a1, 0xffffffff, 0xffffffff);
    if (((s32)(a2) >= 0)) {
        s0 = *(u32*)(&D_0035f104);
        *(u32*)(((s0 + s2) + 0x198)) = func_00192048(a2);
    }
    return;
}
