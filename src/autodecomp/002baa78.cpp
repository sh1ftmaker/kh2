// coverage: addr=0x002baa78 symbol=func_002baa78 size=300 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:91.23;m2c:near:91.23;ghidra:near:78.65
#include "common/types.h"

extern "C" u32 func_002b6adc(u32, u32) asm("func_002b6adc");

// 0x002baa78 func_002baa78
u32 func_002baa78() asm("func_002baa78");
u32 func_002baa78() {
    u32 s1;
    u32 s0;
    u32 s1_0;
    u32 s0_1;
    u32 v0_2;
    func_002b6adc(2, 4);
    func_002b6adc(0, 4);
    func_002b6adc(2, 5);
    func_002b6adc(0, 5);
    func_002b6adc(2, 6);
    func_002b6adc(0, 6);
    func_002b6adc(2, 7);
    func_002b6adc(0, 7);
    func_002b6adc(0, 0xa);
    func_002b6adc(2, 0xa);
    func_002b6adc(2, 0xb);
    func_002b6adc(2, 0xc);
    func_002b6adc(2, 0xd);
    func_002b6adc(2, 0xe);
    s1 = 0;
    s0 = 0x1e;
    do {
        s0 = (s1 + 0x1e);
        s1 = (s1 + 1);
        func_002b6adc(2, s0);
        func_002b6adc(0, s0);
    } while (((s32)(((s32)(s1) < (s32)(0xe))) != 0));
    s1_0 = 0;
    s0_1 = 0x14;
    do {
        s0_1 = (s1_0 + 0x14);
        s1_0 = (s1_0 + 1);
        func_002b6adc(2, s0_1);
        v0_2 = func_002b6adc(0, s0_1);
    } while (((s32)(((s32)(s1_0) < (s32)(2))) != 0));
    return v0_2;
}
