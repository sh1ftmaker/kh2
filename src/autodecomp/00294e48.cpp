// coverage: addr=0x00294e48 symbol=_ZN2Tz10JmWorldSel9FileAllocEv size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.33;m2c:near:89.44;e3:near:31.74
#include "common/types.h"

extern "C" u32 D_0035f57c asm("D_0035f57c");
extern "C" u32 D_0035f580 asm("D_0035f580");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_00292630() asm("func_00292630");
extern "C" u32 func_00293db8(u32, u32) asm("func_00293db8");
extern "C" void func_0023f900(u32) asm("func_0023f900");

// 0x00294e48 Tz::JmWorldSel::FileAlloc()
u32 lift_00294e48() asm("_ZN2Tz10JmWorldSel9FileAllocEv");
u32 lift_00294e48() {
    u32 v0;
    u32 v0_0;
    func_0023f900(*(u32*)(&D_0035f57c));
    v0 = func_00292630();
    if (((s32)(v0) == 0)) {
        v0_0 = func_0023fa08(*(u32*)(&D_0035f57c), func_00293db8(1, 0));
        *(u8*)(&D_0035f580) = 1;
        v0 = v0_0;
    }
    return v0;
}
