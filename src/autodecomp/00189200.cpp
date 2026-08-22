// coverage: addr=0x00189200 symbol=_ZN2YS14SAVERAM_BATTLE11get_formramEi size=40 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:exact:100.0;m2c:exact:100.0;e3:near:0.0
#include "common/types.h"


// 0x00189200 YS::SAVERAM_BATTLE::get_formram(int)
u32 lift_00189200(u32 a0, u32 a1) asm("_ZN2YS14SAVERAM_BATTLE11get_formramEi");
u32 lift_00189200(u32 a0, u32 a1) {
    if (((s32)(((u32)((a1 + -1)) < (u32)(0xa))) != 0)) {
        return ((a0 + (a1 * 0x38)) + 0xdcc);
    } else {
        return 0;
    }
}
