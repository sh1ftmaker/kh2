// coverage: addr=0x0026dcb8 symbol=func_0026dcb8 size=72 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:88.89;ghidra:near:87.89
#include "common/types.h"

extern "C" u32 _ZN2Tz8Selector11PauseThreadEP4TASK asm("_ZN2Tz8Selector11PauseThreadEP4TASK");
extern "C" u32 func_00102818(u32, u32, u32, u32, u32) asm("func_00102818");
extern "C" u32 func_00103eb0() asm("func_00103eb0");
extern "C" void func_0026d968() asm("func_0026d968");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");

// 0x0026dcb8 func_0026dcb8
u32 func_0026dcb8() asm("func_0026dcb8");
u32 func_0026dcb8() {
    func_0026d968();
    func_00287bd0(0, 0);
    return func_00102818(*(u32*)((func_00103eb0() + 4)), 0, 0x7d0, (u32)&_ZN2Tz8Selector11PauseThreadEP4TASK, 0x1000);
}
