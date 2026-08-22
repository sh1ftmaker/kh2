// coverage: addr=0x0015d730 symbol=_Z16wtarget_0015d730jjjj size=184 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:94.7
#include "common/types.h"

extern "C" u32 D_0034af40 asm("D_0034af40");
extern "C" u32 D_0034b0e0 asm("D_0034b0e0");
extern "C" u32 func_002361d0(u32) asm("func_002361d0");
extern "C" void func_002361a0(u32, u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_00239870(u32) asm("func_00239870");

// 0x0015d730 wtarget_0015d730(unsigned int, unsigned int, unsigned int, unsigned int)
void lift_0015d730(u32 a0, u32 a1) asm("_Z16wtarget_0015d730jjjj");
void lift_0015d730(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_002361a0((u32)&D_0034af40, a1);
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            func_00239700((u32)&D_0034b0e0);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_00239870((u32)&D_0034b0e0);
        }
    }
    if ((a1 == 0xffff)) {
        if (((s32)(a0) == 0)) {
            func_002361d0((u32)&D_0034af40);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
