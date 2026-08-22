// coverage: addr=0x00197738 symbol=_ZN2YS5EVENT12PrepareSceneEv size=40 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:62.19
#include "common/types.h"

extern "C" u32 func_001ada38(u32) asm("func_001ada38");
extern "C" void func_00197c90() asm("func_00197c90");
extern "C" void func_001b9db0(u32) asm("func_001b9db0");

// 0x00197738 YS::EVENT::PrepareScene()
u32 lift_00197738() asm("_ZN2YS5EVENT12PrepareSceneEv");
u32 lift_00197738() {
    func_001b9db0(0x7d0);
    func_00197c90();
    return func_001ada38(0xb);
}
