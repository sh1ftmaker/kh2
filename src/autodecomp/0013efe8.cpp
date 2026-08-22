// coverage: addr=0x0013efe8 symbol=func_0013efe8 size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.93;m2c:near:50.81;ghidra:near:50.43
#include "common/types.h"

extern "C" u32 D_0032b96c asm("D_0032b96c");
extern "C" u32 D_00348700 asm("D_00348700");
extern "C" u32 _ZN2dk10JumpEffect12outInit_taskEP4TASK asm("_ZN2dk10JumpEffect12outInit_taskEP4TASK");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");

// 0x0013efe8 func_0013efe8
u32 func_0013efe8() asm("func_0013efe8");
u32 func_0013efe8() {
    *(u8*)(&D_00348700) = 0;
    return func_00102788(*(u32*)(&D_0032b96c), 0, 0x493e0, (u32)&_ZN2dk10JumpEffect12outInit_taskEP4TASK);
}
