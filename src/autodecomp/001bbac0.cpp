// coverage: addr=0x001bbac0 symbol=_ZN2YS7MISSION10Activate2dEv size=68 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:92.39;ghidra:near:91.11;e3:near:28.13
#include "common/types.h"

extern "C" u32 D_01d49320 asm("D_01d49320");
extern "C" u32 func_001bb4a0() asm("func_001bb4a0");
extern "C" u32 func_001c11a8(u32) asm("func_001c11a8");

// 0x001bbac0 YS::MISSION::Activate2d()
void lift_001bbac0() asm("_ZN2YS7MISSION10Activate2dEv");
void lift_001bbac0() {
    if (((s32)(func_001bb4a0()) != 0)) {
        if (((s32)(*(u8*)((*(u32*)((*(u32*)(&D_01d49320) + 8)) + 8))) != 0)) {
            func_001c11a8(*(u8*)((*(u32*)((*(u32*)(&D_01d49320) + 8)) + 8)));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
