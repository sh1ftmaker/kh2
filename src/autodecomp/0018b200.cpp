// coverage: addr=0x0018b200 symbol=_ZN2YS3NPC12before_checkEv size=108 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:exact:100.0;e3:near:97.63;ghidra:near:63.41
#include "common/types.h"

extern "C" u32 D_0036cbb0 asm("D_0036cbb0");
extern "C" u32 func_001880b0(u32, u32) asm("func_001880b0");
extern "C" u32 func_001883d8(u32, u32) asm("func_001883d8");

// 0x0018b200 YS::NPC::before_check()
void lift_0018b200(u32 a0) asm("_ZN2YS3NPC12before_checkEv");
void lift_0018b200(u32 a0) {
    if ((*(u8*)((*(u32*)((a0 + 8)) + 4)) == 0xf)) {
        if (((s32)(func_001883d8(a0 + 0x300, (u32)&D_0036cbb0)) != 0)) {
            func_001880b0(a0 + 0x300, (u32)&D_0036cbb0);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
