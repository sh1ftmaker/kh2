// coverage: addr=0x002b9ad0 symbol=_Z16u_tail0_002b9ad0v size=164 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:91.6;ghidra:near:77.15
#include "common/types.h"

extern "C" u32 D_003616e0 asm("D_003616e0");
extern "C" u32 D_01e2a400 asm("D_01e2a400");
extern "C" u32 D_01e2a410 asm("D_01e2a410");
extern "C" u32 func_002bd218() asm("func_002bd218");
extern "C" void func_002b6bc4(u32) asm("func_002b6bc4");
extern "C" void func_002b7fbc(u32) asm("func_002b7fbc");
extern "C" void func_002b9ab8(u32) asm("func_002b9ab8");
extern "C" void func_002b9b78() asm("func_002b9b78");
extern "C" void func_002ba298(u32) asm("func_002ba298");
extern "C" void func_002ba390() asm("func_002ba390");
extern "C" void func_002bce40(u32) asm("func_002bce40");
extern "C" void func_002bce50(u32) asm("func_002bce50");

// 0x002b9ad0 u_tail0_002b9ad0()
u32 lift_002b9ad0() asm("_Z16u_tail0_002b9ad0v");
u32 lift_002b9ad0() {
    u32 v0;
    u32 t7;
    u32 t6;
    func_002b7fbc(0);
    func_002b6bc4(1);
    func_002b9ab8(0x14);
    func_002ba298(0);
    func_002ba298(1);
    func_002ba390();
    func_002bce40((u32)&D_01e2a410);
    func_002bce50((u32)&D_01e2a410);
    func_002b9b78();
    v0 = func_002bd218();
    *(u32*)(&D_003616e0) = 0;
    t7 = 2;
    t6 = (u32)&D_01e2a400;
    do {
        *(u32*)((t6 + ((t7 - 2) * -4))) = 0;
        t7 = (t7 + -1);
    } while (((s32)(t7) >= 0));
    return v0;
}
