// coverage: addr=0x002d3f18 symbol=_ZN2Ti15MGOarashiGimObj13force_destroyEv size=140 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;m2c:near:94.14;ghidra:near:83.15
#include "common/types.h"

extern "C" u32 func_002cf270(u32, u32) asm("func_002cf270");
extern "C" u32 func_002cf280(u32, u32, u32) asm("func_002cf280");
extern "C" void func_0016ac38(u32, u32, u32, u32, u32) asm("func_0016ac38");
extern "C" void func_002cf2b0(u32, u32) asm("func_002cf2b0");

// 0x002d3f18 Ti::MGOarashiGimObj::force_destroy()
void lift_002d3f18(u32 a0) asm("_ZN2Ti15MGOarashiGimObj13force_destroyEv");
void lift_002d3f18(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0xb6c))) < 0)) {
        if (((s32)(func_002cf270(a0 + 0xaf0, 0x100)) != 0)) {
            func_002cf2b0(a0 + 0xaf0, 0x100);
            func_0016ac38(a0, 0, 1, 0, 0);
            func_002cf280(a0 + 0xaf0, 4, 0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
