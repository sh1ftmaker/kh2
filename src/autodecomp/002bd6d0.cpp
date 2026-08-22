// coverage: addr=0x002bd6d0 symbol=_ZN2Tz9MenuSound14ResetPauseImplEv size=76 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:93.68;m2c:near:90.33;e3:near:0.0
#include "common/types.h"

extern "C" u32 D_003617e4 asm("D_003617e4");
extern "C" u32 D_003617e8 asm("D_003617e8");
extern "C" u32 func_002b8434(u32) asm("func_002b8434");

// 0x002bd6d0 Tz::MenuSound::ResetPauseImpl()
void lift_002bd6d0() asm("_ZN2Tz9MenuSound14ResetPauseImplEv");
void lift_002bd6d0() {
    u32 t5;
    u32 t7;
    t5 = *(u8*)(&D_003617e8);
    if ((t5 != 1)) {
        t7 = *(u32*)(&D_003617e4);
        if (((s32)(t7) > 0)) {
            *(u32*)(&D_003617e4) = (t7 + -1);
            if (((s32)((t7 + -1)) == 0)) {
                func_002b8434(0);
                return;
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
