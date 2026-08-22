// coverage: addr=0x00169308 symbol=_ZN2YS8AreaExitEv size=68 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;corpus:near:96.47
#include "common/types.h"

extern "C" u32 func_00197be8() asm("func_00197be8");
extern "C" void func_001922c8(u32) asm("func_001922c8");
extern "C" void func_001a5e38() asm("func_001a5e38");
extern "C" void func_001b24c8() asm("func_001b24c8");
extern "C" void func_001b83d0() asm("func_001b83d0");
extern "C" void func_001ba740() asm("func_001ba740");
extern "C" void func_001bb468() asm("func_001bb468");

// 0x00169308 YS::AreaExit()
u32 lift_00169308() asm("_ZN2YS8AreaExitEv");
u32 lift_00169308() {
    func_001a5e38();
    func_001ba740();
    func_001b24c8();
    func_001bb468();
    func_001922c8(2);
    func_001b83d0();
    return func_00197be8();
}
