// coverage: addr=0x0024e678 symbol=func_0024e678 size=220 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:76.23;m2c:near:75.84
#include "common/types.h"

extern "C" u32 D_0035ee04 asm("D_0035ee04");
extern "C" u32 D_0035ee08 asm("D_0035ee08");
extern "C" u32 D_0035ee0c asm("D_0035ee0c");
extern "C" u32 D_0035ee10 asm("D_0035ee10");
extern "C" u32 D_0035ee18 asm("D_0035ee18");
extern "C" u32 D_0035ee2c asm("D_0035ee2c");
extern "C" u32 _ZN2Tz4TTMY11PauseThreadEP4TASK asm("_ZN2Tz4TTMY11PauseThreadEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" u32 func_00288be8(u32) asm("func_00288be8");
extern "C" void func_00287b18(u32, u32) asm("func_00287b18");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_002889f0(u32, u32, u32) asm("func_002889f0");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");

// 0x0024e678 func_0024e678
u32 func_0024e678() asm("func_0024e678");
u32 func_0024e678() {
    u32 v0;
    u32 t6;
    u32 t7;
    func_00287b18(5, 3);
    v0 = func_00288be8(0x38);
    func_002889f0(v0, 5, 1);
    *(u32*)(&D_0035ee04) = v0;
    func_00288f48(v0, 0x40, 0x80, 0, 0);
    *(u32*)(&D_0035ee08) = 0;
    *(u32*)(&D_0035ee0c) = 0;
    *(u32*)(&D_0035ee10) = 0;
    *(u32*)(&D_0035ee2c) = 0xffffffff;
    t6 = 4;
    t7 = (u32)&D_0035ee18;
    do {
        *(u32*)((t7 + ((t6 - 4) * -4))) = 0;
        t6 = (t6 + -1);
    } while (((s32)(t6) >= 0));
    func_00287bd0(0, 0);
    return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x7d0, (u32)&_ZN2Tz4TTMY11PauseThreadEP4TASK, 0x1000);
}
