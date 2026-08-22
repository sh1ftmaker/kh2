// coverage: addr=0x002a0860 symbol=func_002a0860 size=168 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:97.44;ghidra:near:91.3
#include "common/types.h"

extern "C" u32 D_0035f5d8 asm("D_0035f5d8");
extern "C" u32 func_00139510(u32) asm("func_00139510");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");

// 0x002a0860 func_002a0860
void func_002a0860() asm("func_002a0860");
void func_002a0860() {
    if (((s32)(*(u32*)(&D_0035f5d8)) != 0)) {
        if ((func_00139d78(*(u32*)(&D_0035f5d8)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5d8));
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5d8) + 0x198)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5d8) + 0x198);
        }
        if (((s32)(func_00139d78(*(u32*)(&D_0035f5d8) + 0x330)) != 0)) {
            func_00139510(*(u32*)(&D_0035f5d8) + 0x330);
        }
        if ((func_00139d78(*(u32*)(&D_0035f5d8) + 0x4c8) != 0)) {
            func_00139510(*(u32*)(&D_0035f5d8) + 0x4c8);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
