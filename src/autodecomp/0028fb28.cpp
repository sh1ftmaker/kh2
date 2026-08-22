// coverage: addr=0x0028fb28 symbol=_ZN2Tz7SelHist8SetMsgIdEii size=60 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;ghidra:near:92.81
#include "common/types.h"

extern "C" u32 func_00192048(u32, u32) asm("func_00192048");
extern "C" u32 func_0028fb68(u32, u32) asm("func_0028fb68");

// 0x0028fb28 Tz::SelHist::SetMsgId(int, int)
u32 lift_0028fb28(u32 a0, u32 a1) asm("_ZN2Tz7SelHist8SetMsgIdEii");
u32 lift_0028fb28(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    if (((s32)(a1) >= 0)) {
        v0 = func_00192048(a1, a1);
        v0_0 = v0;
    } else {
        v0_0 = 0;
    }
    return func_0028fb68(a0, v0_0);
}
