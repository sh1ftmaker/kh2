// coverage: addr=0x0016a328 symbol=_ZN2YS3OBJ13_OVR__destroyEv size=44 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: twins:exact:100.0;m2c:exact:100.0;ghidra:near:84.62;e3:near:40.32
#include "common/types.h"

extern "C" u32 func_0016c358(u32) asm("func_0016c358");
extern "C" void func_001a9350(u32) asm("func_001a9350");

// 0x0016a328 YS::OBJ::_OVR__destroy()
u32 lift_0016a328(u32 a0) asm("_ZN2YS3OBJ13_OVR__destroyEv");
u32 lift_0016a328(u32 a0) {
    func_001a9350(a0 + 0x7a0);
    return func_0016c358(a0);
}
