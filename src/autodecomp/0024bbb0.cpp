// coverage: addr=0x0024bbb0 symbol=_ZN2Tz4HBTE7LoopAllEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.3;m2c:near:79.61
#include "common/types.h"

struct S6_4_s16 { u8 _p[4]; s16 m; };
extern "C" u32 D_0035eda8 asm("D_0035eda8");
extern "C" u32 D_0035edb0 asm("D_0035edb0");
extern "C" u32 D_0035edb4 asm("D_0035edb4");
extern "C" u32 D_0035edb8 asm("D_0035edb8");
extern "C" u32 D_00371ff0 asm("D_00371ff0");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x0024bbb0 Tz::HBTE::LoopAll()
void lift_0024bbb0() asm("_ZN2Tz4HBTE7LoopAllEv");
void lift_0024bbb0() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035edb0)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035edb0)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035edb0), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035eda8))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035eda8));
        s0 = func_002891e8(*(u32*)(&D_0035eda8));
        if ((func_00139d78(*(u32*)(&D_0035edb8)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035edb8)) != ((S6_4_s16*)&D_00371ff0)[s0].m)) {
                func_0023f070(*(u32*)(&D_0035edb8), ((S6_4_s16*)&D_00371ff0)[s0].m, 0xffffffff);
            }
        }
    }
    if ((func_00139d78(*(u32*)(&D_0035edb4)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035edb4)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035edb4), 0x23, 0xffffffff);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
