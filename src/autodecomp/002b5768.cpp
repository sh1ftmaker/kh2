// coverage: addr=0x002b5768 symbol=_ZN2Tz8CmSLBase17LeaveListItemImplEv size=120 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.81;m2c:near:84.13
#include "common/types.h"

extern "C" u32 D_0035f680 asm("D_0035f680");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002b5768 Tz::CmSLBase::LeaveListItemImpl()
void lift_002b5768() asm("_ZN2Tz8CmSLBase17LeaveListItemImplEv");
void lift_002b5768() {
    u32 s0;
    u32 s1;
    s0 = (u32)&D_0035f680;
    s1 = 3;
    do {
        if (((s32)(*(u32*)(s0)) != 0)) {
            if ((func_00139d78(*(u32*)(s0)) != 0)) {
                *(u32*)((*(u32*)(s0) + 0x1b4)) = 0;
                ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(s0)) + 0x14))))(*(u32*)(s0));
            }
            *(u32*)(s0) = 0;
        }
        s0 = (s0 + 4);
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    return;
}
