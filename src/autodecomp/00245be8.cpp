// coverage: addr=0x00245be8 symbol=_ZN2Tz4HECO7LoopAllEv size=256 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.29;m2c:near:82.75
#include "common/types.h"

extern "C" u32 D_0035ed20 asm("D_0035ed20");
extern "C" u32 D_0035ed28 asm("D_0035ed28");
extern "C" u32 D_0035ed2c asm("D_0035ed2c");
extern "C" u32 D_0035ed30 asm("D_0035ed30");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_002468a0(u32) asm("func_002468a0");
extern "C" u32 func_002469a0(u32) asm("func_002469a0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x00245be8 Tz::HECO::LoopAll()
void lift_00245be8() asm("_ZN2Tz4HECO7LoopAllEv");
void lift_00245be8() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035ed28)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed28)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035ed28), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ed20))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035ed20));
        s0 = func_002468a0(func_002469a0(func_002891e8(*(u32*)(&D_0035ed20))));
        if ((func_00139d78(*(u32*)(&D_0035ed30)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ed30)) != *(s16*)((s0 + 4)))) {
                func_0023f070(*(u32*)(&D_0035ed30), *(s16*)((s0 + 4)), 0xffffffff);
            }
        }
    }
    if ((func_00139d78(*(u32*)(&D_0035ed2c)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed2c)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035ed2c), 0x23, 0xffffffff);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
