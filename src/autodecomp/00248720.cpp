// coverage: addr=0x00248720 symbol=_ZN2Tz4MUMI7LoopAllEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.3;m2c:near:79.61
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035ed4c asm("D_0035ed4c");
extern "C" u32 D_0035ed54 asm("D_0035ed54");
extern "C" u32 D_0035ed58 asm("D_0035ed58");
extern "C" u32 D_0035ed5c asm("D_0035ed5c");
extern "C" u32 D_00371d40 asm("D_00371d40");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x00248720 Tz::MUMI::LoopAll()
void lift_00248720() asm("_ZN2Tz4MUMI7LoopAllEv");
void lift_00248720() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035ed54)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed54)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035ed54), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ed4c))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035ed4c));
        s0 = func_002891e8(*(u32*)(&D_0035ed4c));
        if ((func_00139d78(*(u32*)(&D_0035ed5c)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ed5c)) != ((S6_4_s16*)&D_00371d40)[s0].m)) {
                func_0023f070(*(u32*)(&D_0035ed5c), ((S6_4_s16*)&D_00371d40)[s0].m, 0xffffffff);
            }
        }
    }
    if ((func_00139d78(*(u32*)(&D_0035ed58)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed58)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035ed58), 0x23, 0xffffffff);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
