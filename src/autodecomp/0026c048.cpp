// coverage: addr=0x0026c048 symbol=func_0026c048 size=248 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:79.38;ghidra:near:70.03;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f024 asm("D_0035f024");
extern "C" u32 D_0035f0f4 asm("D_0035f0f4");
extern "C" u32 func_00257708(u32) asm("func_00257708");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028b1e8(u32, u32) asm("func_0028b1e8");
extern "C" void func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");

// 0x0026c048 func_0026c048
u32 func_0026c048() asm("func_0026c048");
u32 func_0026c048() {
    u32 s0;
    u32 s1;
    u32 v0;
    s0 = 0;
    s1 = 0;
    do {
        if (((s32)(func_00281180(*(u32*)(&D_0035f010), s0)) != 0)) {
            func_00288ce0(*(u32*)(&D_0035f024), func_002891b8(*(u32*)(&D_0035f01c), s1), s1, (*(u32*)(&D_0035f0f4) + (s1 << 3)) + 0xec8, (*(u32*)(&D_0035f0f4) + (s1 << 3)) + 0xec8);
            s1 = (s1 + 1);
        }
        s0 = (s0 + 1);
    } while (((s32)(((s32)(s0) < (s32)(4))) != 0));
    func_0028af90(*(u32*)(&D_0035f024), s1);
    v0 = func_0028b1e8(*(u32*)(&D_0035f024), 1);
    if (((s32)(((s32)(s1) < (s32)(3))) != 0)) {
        return func_00257708(1);
    } else {
        return v0;
    }
}
