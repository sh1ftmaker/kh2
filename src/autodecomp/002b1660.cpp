// coverage: addr=0x002b1660 symbol=func_002b1660 size=120 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:83.52;ghidra:near:77.37
#include "common/types.h"

extern "C" u32 D_0035f634 asm("D_0035f634");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_00281be0() asm("func_00281be0");

// 0x002b1660 func_002b1660
u32 func_002b1660() asm("func_002b1660");
u32 func_002b1660() {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 v0_3;
    v0 = func_00139d78(*(u32*)(&D_0035f634) + 0x5478);
    if ((v0 == 0)) {
        v0_0 = func_00139d78(*(u32*)(&D_0035f634) + 0x5978);
        if ((v0_0 == 0)) {
            v0_1 = func_00139d78(*(u32*)(&D_0035f634) + 0x5b2c);
            if ((v0_1 == 0)) {
                v0_2 = func_00139d78(*(u32*)(&D_0035f634) + 0x5ce0);
                if (((s32)(v0_2) == 0)) {
                    v0_3 = func_00281be0();
                    v0_2 = v0_3;
                }
                v0_1 = v0_2;
            }
            v0_0 = v0_1;
        }
        v0 = v0_0;
    }
    return v0;
}
