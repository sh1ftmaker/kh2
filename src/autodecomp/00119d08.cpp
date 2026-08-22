// coverage: addr=0x00119d08 symbol=_ZN2kn5GenieD0Ev size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003477a0 asm("D_003477a0");
extern "C" u32 func_00105110(u32) asm("func_00105110");
extern "C" void func_00113668(u32) asm("func_00113668");

// 0x00119d08 kn::Genie::~Genie()
u32 lift_00119d08(u32 a0) asm("_ZN2kn5GenieD0Ev");
u32 lift_00119d08(u32 a0) {
    *(u32*)(a0) = (u32)&D_003477a0;
    func_00113668(a0);
    return func_00105110(a0);
}
