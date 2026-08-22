// coverage: addr=0x00137630 symbol=_ZN2dk17TREASURE_BOX_INFO7destroyEv size=132 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:99.85;e3:near:99.64;ghidra:near:93.86
#include "common/types.h"

extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_00139510(u32) asm("func_00139510");
extern "C" void func_001b2028(u32) asm("func_001b2028");

// 0x00137630 dk::TREASURE_BOX_INFO::destroy()
void lift_00137630(u32 a0) asm("_ZN2dk17TREASURE_BOX_INFO7destroyEv");
void lift_00137630(u32 a0) {
    if (((s32)(*(u32*)((a0 + 0x518))) != 0)) {
        if (((s32)(func_00139d78(a0 + 0x1c0)) != 0)) {
            func_00139510(a0 + 0x1c0);
        }
        if (((s32)(func_00139d78(a0 + 0x380)) != 0)) {
            func_00139510(a0 + 0x380);
        }
        func_001b2028(*(u32*)((a0 + 0x518)));
    }
    func_001991a8(0x24, 0);
    return;
}
