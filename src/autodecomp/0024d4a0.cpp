// coverage: addr=0x0024d4a0 symbol=_ZN2Tz4TTPT7LoopAllEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:91.41;m2c:near:74.99
#include "common/types.h"

extern "C" u32 D_0035edcc asm("D_0035edcc");
extern "C" u32 D_0035edd4 asm("D_0035edd4");
extern "C" u32 D_0035edd8 asm("D_0035edd8");
extern "C" u32 D_0035eddc asm("D_0035eddc");
extern "C" u32 D_0035ede0 asm("D_0035ede0");
extern "C" u32 D_0035ede4 asm("D_0035ede4");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0024e008(u32) asm("func_0024e008");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x0024d4a0 Tz::TTPT::LoopAll()
u32 lift_0024d4a0() asm("_ZN2Tz4TTPT7LoopAllEv");
u32 lift_0024d4a0() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035edd4)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035edd4)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035edd4), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035edcc))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035edcc));
        s0 = func_0024e008(func_002891e8(*(u32*)(&D_0035edcc)));
        if ((func_00139d78(*(u32*)(&D_0035eddc)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035eddc)) != *(s16*)((s0 + 4)))) {
                func_0023f070(*(u32*)(&D_0035eddc), *(s16*)((s0 + 4)), 0xffffffff);
            }
        }
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035edd8))) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035edd8)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035edd8), 0x23, 0xffffffff);
        }
    }
    func_0028da70(*(u32*)(&D_0035ede0), 0x21);
    return func_0028da70(*(u32*)(&D_0035ede4), 0x29);
}
