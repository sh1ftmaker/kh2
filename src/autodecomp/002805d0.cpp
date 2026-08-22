// coverage: addr=0x002805d0 symbol=_ZN2Tz9GumiPause15CreateAdviceGraEv size=168 class=straight source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:73.21;ghidra:near:71.33
#include "common/types.h"

extern "C" u32 D_0035f250 asm("D_0035f250");
extern "C" u32 D_0035f264 asm("D_0035f264");
extern "C" u32 func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" void func_002806a0() asm("func_002806a0");

// 0x002805d0 Tz::GumiPause::CreateAdviceGra()
u32 lift_002805d0() asm("_ZN2Tz9GumiPause15CreateAdviceGraEv");
u32 lift_002805d0() {
    u32 s0;
    u32 s1;
    u32 s2;
    u32 v0;
    u32 s0_0;
    func_002806a0();
    s0 = *(u32*)(&D_0035f264);
    s1 = (*(u32*)(&D_0035f264) + 0x380);
    s2 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f250)), 0);
    v0 = func_001386e0(s1, 0x755f, s2, func_00236ca8(*(u32*)(&D_0035f264), 0), 1, 0);
    *(u32*)((s1 + 0x188)) = 2;
    *(u8*)((s1 + 0x195)) = 1;
    s0_0 = (s0 + 0x398);
    *(u32*)((s0_0 + 0xb8)) = (*(u32*)((s0_0 + 0xb8)) | 8);
    return v0;
}
