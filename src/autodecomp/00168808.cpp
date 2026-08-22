// coverage: addr=0x00168808 symbol=func_00168808 size=148 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:95.37;m2c:near:89.08;ghidra:near:81.49
#include "common/types.h"

extern "C" u32 D_001685f0 asm("D_001685f0");
extern "C" u32 D_00168678 asm("D_00168678");
extern "C" u32 D_0032b91c asm("D_0032b91c");
extern "C" u32 D_0034d800 asm("D_0034d800");
extern "C" u32 D_004f5280 asm("D_004f5280");
extern "C" u32 func_001adcf8(u32) asm("func_001adcf8");
extern "C" void func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" void func_0014d358(u32, u32, u32, u32) asm("func_0014d358");

// 0x00168808 func_00168808
void func_00168808(u32 a0) asm("func_00168808");
void func_00168808(u32 a0) {
    u32 t6;
    u32 t7;
    if ((a0 == 0xffffffff)) {
        func_0014d358((u32)&D_004f5280, 0x1000, (u32)&D_001685f0, 0);
        func_00102788(*(u32*)(&D_0032b91c), 0, 0x61a80, (u32)&D_00168678);
        t6 = 3;
        t7 = (u32)&D_0034d800;
        do {
            *(u32*)(((t7 + ((t6 - 3) * -0x10)) + 8)) = 0;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
    } else {
    }
    func_001adcf8(a0);
    return;
}
