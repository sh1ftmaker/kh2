// coverage: addr=0x002b5a50 symbol=_ZN2Tz8CmSLBase18GetCurrentListItemEv size=156 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.72;ghidra:near:85.5
#include "common/types.h"

extern "C" u32 D_0035f690 asm("D_0035f690");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002b5a50 Tz::CmSLBase::GetCurrentListItem()
void lift_002b5a50() asm("_ZN2Tz8CmSLBase18GetCurrentListItemEv");
void lift_002b5a50() {
    u32 s2;
    u32 t7;
    u32 s0;
    u32 s1;
    s2 = 0;
    t7 = (0 << 4);
    do {
        s0 = ((s2 << 4) + (u32)&D_0035f690);
        s1 = 3;
        do {
            if (((s32)(*(u32*)(s0)) != 0)) {
                if ((func_00139d78(*(u32*)(s0)) != 0)) {
                    ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(s0)) + 0x14))))(*(u32*)(s0));
                }
                *(u32*)(s0) = 0;
            }
            s0 = (s0 + 4);
            s1 = (s1 + -1);
        } while (((s32)(s1) >= 0));
        s2 = (s2 + 1);
        t7 = ((s32)(s2) < (s32)(3));
    } while ((t7 != 0));
    return;
}
