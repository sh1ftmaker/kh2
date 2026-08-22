// coverage: addr=0x001e65d0 symbol=func_001e65d0 size=96 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:86.67;m2c:near:76.08
#include "common/types.h"

extern "C" u32 D_00354648 asm("D_00354648");
extern "C" u32 D_00354650 asm("D_00354650");
extern "C" u32 D_00354698 asm("D_00354698");
extern "C" u32 D_003591c8 asm("D_003591c8");
extern "C" u32 func_002f3918(u32, u32) asm("func_002f3918");
extern "C" void func_001e5610(u32) asm("func_001e5610");
extern "C" void func_001e5898(u32) asm("func_001e5898");
extern "C" void func_001e5990(u32) asm("func_001e5990");
extern "C" void func_002f25a0(u32, u32) asm("func_002f25a0");
extern "C" void func_003058a0(u32) asm("func_003058a0");

// 0x001e65d0 func_001e65d0
u32 func_001e65d0() asm("func_001e65d0");
u32 func_001e65d0() {
    func_001e5990((u32)&D_00354698);
    func_001e5610(*(u32*)(&D_00354648));
    func_001e5898(*(u32*)(&D_00354648));
    func_002f25a0(0, 0);
    func_003058a0(0);
    return func_002f3918(*(u32*)(&D_003591c8), (u32)&D_00354650);
}
