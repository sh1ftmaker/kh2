// coverage: addr=0x002e2e18 symbol=_ZN2Ti12MG_EHSidecar15GetCurrentPointEv size=56 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:93.27;ghidra:near:74.24;e3:near:60.95
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" void func_002ceb08() asm("func_002ceb08");

// 0x002e2e18 Ti::MG_EHSidecar::GetCurrentPoint()
u32 lift_002e2e18() asm("_ZN2Ti12MG_EHSidecar15GetCurrentPointEv");
u32 lift_002e2e18() {
    u32 s0;
    u32 v0;
    if ((*(u32*)(&D_00361f60) != 0)) {
        s0 = *(u32*)(&D_00361f60);
        func_002ceb08();
        v0 = *(u32*)((s0 + 0x108));
    } else {
        v0 = *(u32*)((*(u32*)(&D_00361f60) + 0x108));
    }
    return v0;
}
