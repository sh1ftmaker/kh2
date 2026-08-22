// coverage: addr=0x002c58c8 symbol=_ZN8worldmap9ObjCamera5startEPNS_6PlayerEPN2YS3PADE size=56 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;corpus:near:70.64;ghidra:near:62.19;e3:near:39.39
#include "common/types.h"

extern "C" u32 func_002c6c60(u32, u32) asm("func_002c6c60");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_001780d8(u32) asm("func_001780d8");

// 0x002c58c8 worldmap::ObjCamera::start(worldmap::Player*, YS::PAD*)
u32 lift_002c58c8(u32 a0) asm("_ZN8worldmap9ObjCamera5startEPNS_6PlayerEPN2YS3PADE");
u32 lift_002c58c8(u32 a0) {
    func_001780d8(a0);
    func_0016bd60(a0, 0x2f);
    return func_002c6c60(a0, *(u32*)((a0 + 0xb38)));
}
