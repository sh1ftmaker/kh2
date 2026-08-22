// coverage: addr=0x00257be0 symbol=_Z13func_00257be0Pv size=152 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:96.97;ghidra:near:92.68
#include "common/types.h"

extern "C" u32 D_0035f038 asm("D_0035f038");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x00257be0 func_00257be0(void*)
u32 lift_00257be0() asm("_Z13func_00257be0Pv");
u32 lift_00257be0() {
    u32 v0;
    if (((s32)(func_00139d78(*(u32*)(&D_0035f038) + 0xb350)) != 0)) {
        func_00139510(*(u32*)(&D_0035f038) + 0xb350);
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035f038) + 0xb504)) != 0)) {
        func_00139510(*(u32*)(&D_0035f038) + 0xb504);
    }
    v0 = func_00139d78(*(u32*)(&D_0035f038) + 0xb6b8);
    if ((v0 != 0)) {
        return func_00139510(*(u32*)(&D_0035f038) + 0xb6b8);
    } else {
        return v0;
    }
}
