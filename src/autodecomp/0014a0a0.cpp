// coverage: addr=0x0014a0a0 symbol=_ZN2dk5Field14execTitle_taskEP4TASK size=148 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:58.76;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 func_00103070() asm("func_00103070");
extern "C" u32 func_0014aba8() asm("func_0014aba8");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_0014aa58(u32, u32, u32) asm("func_0014aa58");
extern "C" void func_0014df88(u32) asm("func_0014df88");
extern "C" void func_0014e0d8() asm("func_0014e0d8");

// 0x0014a0a0 dk::Field::execTitle_task(TASK*)
void lift_0014a0a0(u32 a0) asm("_ZN2dk5Field14execTitle_taskEP4TASK");
void lift_0014a0a0(u32 a0) {
    u32 v0;
    if (((s32)(*(u8*)((a0 + 4))) == 0)) {
        func_0014df88(a0);
        func_0014e0d8();
        func_0014aa58(func_0014aba8(), 0xf, 0);
        while (((s32)((*(u32*)((func_0014aba8() + 0xfc)) ^ 4)) != 0)) {
            func_00102448(a0, 0);
        }
    }
    v0 = func_00103070();
    ((void(*)(u32))(*(u32*)(*(u32*)(v0))))(v0);
    return;
}
