// coverage: addr=0x0024fd28 symbol=_ZN2Tz4LMMU7LoopAllEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.3;m2c:near:79.61
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035ee34 asm("D_0035ee34");
extern "C" u32 D_0035ee3c asm("D_0035ee3c");
extern "C" u32 D_0035ee40 asm("D_0035ee40");
extern "C" u32 D_0035ee44 asm("D_0035ee44");
extern "C" u32 D_00372448 asm("D_00372448");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x0024fd28 Tz::LMMU::LoopAll()
void lift_0024fd28() asm("_ZN2Tz4LMMU7LoopAllEv");
void lift_0024fd28() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035ee3c)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ee3c)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035ee3c), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ee34))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035ee34));
        s0 = func_002891e8(*(u32*)(&D_0035ee34));
        if ((func_00139d78(*(u32*)(&D_0035ee44)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ee44)) != ((S6_4_s16*)&D_00372448)[s0].m)) {
                func_0023f070(*(u32*)(&D_0035ee44), ((S6_4_s16*)&D_00372448)[s0].m, 0xffffffff);
            }
        }
    }
    if ((func_00139d78(*(u32*)(&D_0035ee40)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ee40)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035ee40), 0x23, 0xffffffff);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
