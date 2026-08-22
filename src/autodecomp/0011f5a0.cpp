// coverage: addr=0x0011f5a0 symbol=_ZN2kn7ModelBGD0Ev size=52 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:exact:100.0;ghidra:near:55.33
#include "common/types.h"

extern "C" u32 D_003479a8 asm("D_003479a8");
extern "C" u32 func_00106420(u32) asm("func_00106420");
extern "C" void func_0011ee58(u32) asm("func_0011ee58");

// 0x0011f5a0 kn::ModelBG::~ModelBG()
u32 lift_0011f5a0(u32 a0) asm("_ZN2kn7ModelBGD0Ev");
u32 lift_0011f5a0(u32 a0) {
    *(u32*)(a0) = (u32)&D_003479a8;
    func_0011ee58(a0);
    return func_00106420(a0);
}
