// coverage: addr=0x002430b0 symbol=_ZN2Tz7SubMenu5StartEi size=36 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:98.89;m2c:near:68.8
#include "common/types.h"

extern "C" u32 D_0035ece0 asm("D_0035ece0");
extern "C" u32 func_00243020(u32) asm("func_00243020");
extern "C" u32 func_00243190(u32) asm("func_00243190");

// 0x002430b0 Tz::SubMenu::Start(int)
u32 lift_002430b0(u32 a0) asm("_ZN2Tz7SubMenu5StartEi");
u32 lift_002430b0(u32 a0) {
    *(u32*)(&D_0035ece0) = a0;
    return func_00243020(func_00243190(a0));
}
