// coverage: addr=0x0018c8f0 symbol=_ZN2YS6DAMAGE5AllocEPNS_6ATTACKEPKNS_11ATTACKPARAMEPNS_6BTLOBJEi size=112 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.21;m2c:near:69.07
#include "common/types.h"

extern "C" u32 func_0018c8b8(u32, u32, u32, u32) asm("func_0018c8b8");
extern "C" void func_0018c960(u32, u32, u32, u32, u32) asm("func_0018c960");

// 0x0018c8f0 YS::DAMAGE::Alloc(YS::ATTACK*, YS::ATTACKPARAM const*, YS::BTLOBJ*, int)
u32 lift_0018c8f0(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS6DAMAGE5AllocEPNS_6ATTACKEPKNS_11ATTACKPARAMEPNS_6BTLOBJEi");
u32 lift_0018c8f0(u32 a0, u32 a1, u32 a2, u32 a3) {
    u32 v0;
    v0 = func_0018c8b8(a0, a1, a2, a3);
    func_0018c960(v0, a0, a1, a2, a3);
    return v0;
}
