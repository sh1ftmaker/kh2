// coverage: addr=0x001bb768 symbol=_ZN2YS7MISSION6FailedEv size=144 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:77.68;m2c:near:53.03
#include "common/types.h"

extern "C" u32 D_01d49320 asm("D_01d49320");
extern "C" u32 func_001bb7f8() asm("func_001bb7f8");
extern "C" u32 func_001bbc30() asm("func_001bbc30");
extern "C" u32 func_001bc0d0(u32) asm("func_001bc0d0");
extern "C" void func_001bb890() asm("func_001bb890");
extern "C" void func_001bbe18(u32) asm("func_001bbe18");
extern "C" void func_001d5518(u32, u32, u32) asm("func_001d5518");

// 0x001bb768 YS::MISSION::Failed()
u32 lift_001bb768() asm("_ZN2YS7MISSION6FailedEv");
u32 lift_001bb768() {
    func_001bbe18(*(u32*)((*(u32*)((*(u32*)(&D_01d49320) + 8)) + 0x18)));
    *(u32*)((*(u32*)(&D_01d49320) + 0xb4)) = 2;
    func_001d5518(*(u32*)(&D_01d49320) + 0xa0, *(u32*)(&D_01d49320) + 0xc, 0);
    func_001bb890();
    if ((func_001bb7f8() != 0)) {
        *(u32*)((*(u32*)(&D_01d49320) + 0x2dc)) = 8;
        *(u32*)((*(u32*)(&D_01d49320) + 0x2e0)) = 0xffffffff;
        return func_001bc0d0(*(u32*)(&D_01d49320));
    } else {
        return func_001bbc30();
    }
}
