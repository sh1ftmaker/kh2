// coverage: addr=0x001c2578 symbol=_ZN2YS7MASSOBJ9_OVR_execEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;ghidra:exact:100.0;m2c:exact:100.0;corpus:near:83.25
#include "common/types.h"

extern "C" u32 func_001c1428(u32) asm("func_001c1428");
extern "C" void func_0016a9a0(u32) asm("func_0016a9a0");

// 0x001c2578 YS::MASSOBJ::_OVR_exec()
u32 lift_001c2578(u32 a0) asm("_ZN2YS7MASSOBJ9_OVR_execEv");
u32 lift_001c2578(u32 a0) {
    func_0016a9a0(a0);
    return func_001c1428(*(u32*)((a0 + 0x9f4)));
}
