// coverage: addr=0x00243e30 symbol=_ZN2Tz4HEFT7LoopAllEv size=280 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.87;m2c:near:73.38
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035ece8 asm("D_0035ece8");
extern "C" u32 D_0035ecf0 asm("D_0035ecf0");
extern "C" u32 D_0035ecf4 asm("D_0035ecf4");
extern "C" u32 D_0035ecf8 asm("D_0035ecf8");
extern "C" u32 D_0035ecfc asm("D_0035ecfc");
extern "C" u32 D_0035ed00 asm("D_0035ed00");
extern "C" u32 D_00371968 asm("D_00371968");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_00244ee8(u32) asm("func_00244ee8");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x00243e30 Tz::HEFT::LoopAll()
u32 lift_00243e30() asm("_ZN2Tz4HEFT7LoopAllEv");
u32 lift_00243e30() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035ecf0)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ecf0)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035ecf0), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ece8))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035ece8));
        s0 = func_00244ee8(func_002891e8(*(u32*)(&D_0035ece8)));
        if ((func_00139d78(*(u32*)(&D_0035ecf8)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ecf8)) != ((S6_4_s16*)&D_00371968)[s0].m)) {
                func_0023f070(*(u32*)(&D_0035ecf8), ((S6_4_s16*)&D_00371968)[s0].m, 0xffffffff);
            }
        }
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ecf4))) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ecf4)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035ecf4), 0x23, 0xffffffff);
        }
    }
    func_0028da70(*(u32*)(&D_0035ecfc), 0x21);
    return func_0028da70(*(u32*)(&D_0035ed00), 0x29);
}
