// coverage: addr=0x001b40e0 symbol=_ZN2YS7PIERROT10_OVR__deadEv size=184 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:90.0;ghidra:near:86.49
#include "common/types.h"

extern "C" u32 D_0036da70 asm("D_0036da70");
extern "C" u32 func_00187850(u32) asm("func_00187850");
extern "C" u32 func_001883d8(u32, u32) asm("func_001883d8");
extern "C" void func_0016be00(u32, u32) asm("func_0016be00");
extern "C" void func_0016c2b0(u32, u32) asm("func_0016c2b0");
extern "C" void func_001880b0(u32, u32) asm("func_001880b0");
extern "C" void func_001b4198(u32, u32, u32) asm("func_001b4198");

// 0x001b40e0 YS::PIERROT::_OVR__dead()
u32 lift_001b40e0(u32 a0) asm("_ZN2YS7PIERROT10_OVR__deadEv");
u32 lift_001b40e0(u32 a0) {
    u32 loc_0;
    if (((s32)(func_001883d8(a0 + 0x300, (u32)&D_0036da70)) != 0)) {
        func_001880b0(a0 + 0x300, (u32)&D_0036da70);
    }
    if (((s32)(*(u32*)((a0 + 0x48c))) != 0)) {
        if (((s32)(*(u32*)((*(u32*)((a0 + 0x48c)) + 0x264))) != 0)) {
            func_0016c2b0((u32)&loc_0, a0);
            func_001b4198(*(u32*)((*(u32*)((a0 + 0x48c)) + 0x264)), *(u32*)((a0 + 0xae4)), (u32)&loc_0);
            if (((s32)(*(u16*)((*(u32*)((*(u32*)((a0 + 0x48c)) + 0x264)) + 0x58))) != 0)) {
                func_0016be00(a0, *(u16*)((*(u32*)((*(u32*)((a0 + 0x48c)) + 0x264)) + 0x58)));
            }
        }
    }
    return func_00187850(a0);
}
