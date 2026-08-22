// coverage: addr=0x0014a6e0 symbol=_ZN2dk4Blur4initEv size=132 class=float source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:45.68;ghidra:near:40.85
#include "common/types.h"

extern "C" u32 D_00349270 asm("D_00349270");
extern "C" u32 D_00349390 asm("D_00349390");
extern "C" u32 D_00349394 asm("D_00349394");
extern "C" u32 D_00349398 asm("D_00349398");
extern "C" u32 D_0034939c asm("D_0034939c");
extern "C" u32 D_0034939d asm("D_0034939d");
extern "C" u32 func_0013ee38(u32, u32) asm("func_0013ee38");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_0014b248(u32, u32) asm("func_0014b248");

// 0x0014a6e0 dk::Blur::init()
u32 lift_0014a6e0() asm("_ZN2dk4Blur4initEv");
u32 lift_0014a6e0() {
    u32 v0;
    *(u32*)(&D_00349394) = 1;
    *(u8*)(&D_0034939d) = 0;
    *(u32*)(&D_00349390) = 0;
    *(u32*)(&D_00349398) = 0;
    func_0014b208((u32)&D_00349270, 0x100, 0xd0);
    func_0013edd0((u32)&D_00349270, 0.0f);
    func_0014b248((u32)&D_00349270, 0x70);
    v0 = func_0013ee38((u32)&D_00349270, 0x154);
    *(u8*)(&D_0034939c) = 0;
    return v0;
}
