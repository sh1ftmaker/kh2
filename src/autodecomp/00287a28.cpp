// coverage: addr=0x00287a28 symbol=_ZN2Tz8MenuBase4ExitEv size=164 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:99.76;m2c:near:82.39
#include "common/types.h"

extern "C" u32 D_0035f2e8 asm("D_0035f2e8");
extern "C" u32 D_0035f2ec asm("D_0035f2ec");
extern "C" u32 D_0035f2f0 asm("D_0035f2f0");
extern "C" u32 D_0035f2f4 asm("D_0035f2f4");
extern "C" u32 D_0035f318 asm("D_0035f318");
extern "C" u32 D_0035f31c asm("D_0035f31c");
extern "C" u32 func_001991a8(u32, u32) asm("func_001991a8");
extern "C" u32 func_00287f30() asm("func_00287f30");
extern "C" void func_0023ed38() asm("func_0023ed38");
extern "C" void func_0023ede8() asm("func_0023ede8");
extern "C" void func_00287c20() asm("func_00287c20");
extern "C" void func_00288b78() asm("func_00288b78");
extern "C" void func_0028c4f8() asm("func_0028c4f8");

// 0x00287a28 Tz::MenuBase::Exit()
u32 lift_00287a28() asm("_ZN2Tz8MenuBase4ExitEv");
u32 lift_00287a28() {
    u32 v0;
    u32 v0_0;
    func_0028c4f8();
    func_0023ede8();
    func_00288b78();
    func_0023ed38();
    *(u32*)(&D_0035f2ec) = 0xffffffff;
    *(u32*)(&D_0035f318) = 0;
    *(u32*)(&D_0035f2f0) = 0;
    *(u32*)(&D_0035f2f4) = 0;
    func_00287c20();
    if (((s32)(*(u32*)(&D_0035f31c)) != 0)) {
        ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)(&D_0035f31c)) + 0x10))))(*(u32*)(&D_0035f31c));
        *(u32*)(&D_0035f31c) = 0;
    }
    v0 = func_00287f30();
    if ((*(u32*)(&D_0035f2e8) != 0)) {
        v0_0 = func_001991a8(*(u32*)(&D_0035f2e8), 0);
        *(u32*)(&D_0035f2e8) = 0;
        v0 = v0_0;
    } else {
        *(u32*)(&D_0035f2e8) = 0;
    }
    return v0;
}
