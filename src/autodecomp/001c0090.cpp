// coverage: addr=0x001c0090 symbol=_ZN2YS12ATTACK_CHECK13NewComboGroupEv size=44 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:exact:100.0;ghidra:near:94.55;m2c:near:89.17
#include "common/types.h"

extern "C" u32 D_01d4934c asm("D_01d4934c");

// 0x001c0090 YS::ATTACK_CHECK::NewComboGroup()
u32 lift_001c0090() asm("_ZN2YS12ATTACK_CHECK13NewComboGroupEv");
u32 lift_001c0090() {
    u32 t6;
    u32 v0;
    t6 = *(u32*)(&D_01d4934c);
    *(u32*)(&D_01d4934c) = (t6 + 1);
    if (((s32)(((s32)(0x10000000) < (s32)((t6 + 1)))) != 0)) {
        *(u32*)(&D_01d4934c) = 0x100;
    }
    v0 = *(u32*)(&D_01d4934c);
    return v0;
}
