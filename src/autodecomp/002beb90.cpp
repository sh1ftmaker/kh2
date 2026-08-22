// coverage: addr=0x002beb90 symbol=_ZN8worldmap7Manager10get2ldFileEv size=64 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:66.59;ghidra:near:37.75
#include "common/types.h"

extern "C" u32 D_0033caf4 asm("D_0033caf4");
extern "C" u32 D_00375400 asm("D_00375400");
extern "C" u32 D_01e2bc40 asm("D_01e2bc40");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x002beb90 worldmap::Manager::get2ldFile()
u32 lift_002beb90() asm("_ZN8worldmap7Manager10get2ldFileEv");
u32 lift_002beb90() {
    func_002fee78((u32)&D_01e2bc40, (u32)&D_00375400, *(u32*)(&D_0033caf4));
    return (u32)&D_01e2bc40;
}
