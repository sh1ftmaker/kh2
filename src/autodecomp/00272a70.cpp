// coverage: addr=0x00272a70 symbol=func_00272a70 size=108 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.26;m2c:near:99.26
#include "common/types.h"

extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_00257140(u32) asm("func_00257140");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00273180(u32, u32) asm("func_00273180");
extern "C" void func_00138c10(u32, u32) asm("func_00138c10");

// 0x00272a70 func_00272a70
void func_00272a70() asm("func_00272a70");
void func_00272a70() {
    u32 s0;
    u32 s1;
    s0 = (func_00257770() + 0x60a4);
    s1 = 0;
    do {
        func_00138c10(s0, func_00257140(0));
        *(u32*)((s0 + 0x198)) = func_00192048(*(u16*)(func_00273180(4, s1)));
        s0 = (s0 + 0x1b4);
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(3))) != 0));
    return;
}
