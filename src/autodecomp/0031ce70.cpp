// coverage: addr=0x0031ce70 symbol=_ZN2dk15CacheBuffLayoutD0Ev size=76 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:99.89;ghidra:near:81.61
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 func_0023ee68(u32) asm("func_0023ee68");
extern "C" void func_002369f0(u32) asm("func_002369f0");
extern "C" void func_0023c098(u32) asm("func_0023c098");

// 0x0031ce70 dk::CacheBuffLayout::~CacheBuffLayout()
u32 lift_0031ce70(u32 a0) asm("_ZN2dk15CacheBuffLayoutD0Ev");
u32 lift_0031ce70(u32 a0) {
    *(u32*)(a0) = (u32)&D_0035eb98;
    func_0023c098(a0 + 0x30);
    func_002369f0(a0 + 0x18);
    *(u32*)(a0) = (u32)&D_00347f98;
    return func_0023ee68(a0);
}
