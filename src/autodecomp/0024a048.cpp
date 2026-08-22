// coverage: addr=0x0024a048 symbol=_ZN2Tz4TRTE7LoopAllEv size=260 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: e3:near:99.54;ghidra:near:91.41;m2c:near:74.99
#include "common/types.h"

extern "C" u32 D_0035ed70 asm("D_0035ed70");
extern "C" u32 D_0035ed78 asm("D_0035ed78");
extern "C" u32 D_0035ed7c asm("D_0035ed7c");
extern "C" u32 D_0035ed80 asm("D_0035ed80");
extern "C" u32 D_0035ed84 asm("D_0035ed84");
extern "C" u32 D_0035ed88 asm("D_0035ed88");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023f0c0(u32) asm("func_0023f0c0");
extern "C" u32 func_0024b1a0(u32) asm("func_0024b1a0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_0028acc8(u32) asm("func_0028acc8");
extern "C" u32 func_0028da70(u32, u32) asm("func_0028da70");
extern "C" void func_0023f070(u32, u32, u32) asm("func_0023f070");
extern "C" void func_0028ab20(u32) asm("func_0028ab20");

// 0x0024a048 Tz::TRTE::LoopAll()
u32 lift_0024a048() asm("_ZN2Tz4TRTE7LoopAllEv");
u32 lift_0024a048() {
    u32 s0;
    if ((func_00139d78(*(u32*)(&D_0035ed78)) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed78)) != 0x20)) {
            func_0023f070(*(u32*)(&D_0035ed78), 0x20, 0xffffffff);
        }
    }
    if (((s32)(func_0028acc8(*(u32*)(&D_0035ed70))) != 0)) {
        func_0028ab20(*(u32*)(&D_0035ed70));
        s0 = func_0024b1a0(func_002891e8(*(u32*)(&D_0035ed70)));
        if ((func_00139d78(*(u32*)(&D_0035ed80)) != 0)) {
            if ((func_0023f0c0(*(u32*)(&D_0035ed80)) != *(s16*)((s0 + 4)))) {
                func_0023f070(*(u32*)(&D_0035ed80), *(s16*)((s0 + 4)), 0xffffffff);
            }
        }
    }
    if (((s32)(func_00139d78(*(u32*)(&D_0035ed7c))) != 0)) {
        if ((func_0023f0c0(*(u32*)(&D_0035ed7c)) != 0x23)) {
            func_0023f070(*(u32*)(&D_0035ed7c), 0x23, 0xffffffff);
        }
    }
    func_0028da70(*(u32*)(&D_0035ed84), 0x21);
    return func_0028da70(*(u32*)(&D_0035ed88), 0x29);
}
