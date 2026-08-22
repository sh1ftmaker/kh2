// coverage: addr=0x002b2428 symbol=_ZN2Tz8JmPuzzle14RequestGraLoadEi size=160 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:47.57;m2c:near:38.85
#include "common/types.h"

extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 func_002925c0() asm("func_002925c0");
extern "C" u32 func_00292630(u32) asm("func_00292630");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" void func_00293bd0(u32, u32, u32) asm("func_00293bd0");
extern "C" void func_002b2840() asm("func_002b2840");

// 0x002b2428 Tz::JmPuzzle::RequestGraLoad(int)
u32 lift_002b2428(u32 a0) asm("_ZN2Tz8JmPuzzle14RequestGraLoadEi");
u32 lift_002b2428(u32 a0) {
    u32 v0;
    u32 s0;
    u32 s0_0;
    u32 v0_1;
    *(u8*)((*(u32*)(&D_0035f638) + 0x34)) = a0;
    v0 = func_00292630(a0);
    if (((s32)(v0) != 0)) {
        *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) & 0xfffffeff);
    } else {
        s0 = (func_00294000(9) + 0x10);
        func_002b2840();
        s0_0 = ((s0 + (*(s8*)((*(u32*)(&D_0035f638) + 0x34)) << 4)) + 6);
        func_00293bd0(5, (s0 + (*(s8*)((*(u32*)(&D_0035f638) + 0x34)) << 4)) + 6, 0);
        v0_1 = func_002925c0();
        *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) | 0x100);
        v0 = v0_1;
    }
    return v0;
}
