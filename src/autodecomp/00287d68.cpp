// coverage: addr=0x00287d68 symbol=_ZN2Tz8MenuBase8SaveModeEv size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;e3:near:99.54;m2c:near:44.74
#include "common/types.h"

extern "C" u32 D_0035f2f8 asm("D_0035f2f8");
extern "C" u32 D_0035f2fc asm("D_0035f2fc");
extern "C" u32 D_0035f304 asm("D_0035f304");
extern "C" u32 D_0035f308 asm("D_0035f308");
extern "C" u32 D_0035f30c asm("D_0035f30c");
extern "C" u32 D_0035f310 asm("D_0035f310");

// 0x00287d68 Tz::MenuBase::SaveMode()
void lift_00287d68() asm("_ZN2Tz8MenuBase8SaveModeEv");
void lift_00287d68() {
    *(u32*)(&D_0035f2fc) = *(u32*)(&D_0035f2f8);
    *(u32*)(&D_0035f308) = *(u32*)(&D_0035f304);
    *(u32*)(&D_0035f310) = *(u32*)(&D_0035f30c);
}
