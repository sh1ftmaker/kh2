// coverage: addr=0x002853b8 symbol=func_002853b8 size=92 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:95.83;m2c:near:72.71
#include "common/types.h"

extern "C" u32 D_0035f2bc asm("D_0035f2bc");
extern "C" u32 D_0035f2c4 asm("D_0035f2c4");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_0023fa90(u32, u32) asm("func_0023fa90");
extern "C" u32 func_00293fb0() asm("func_00293fb0");
extern "C" void func_00253b30(u32, u32) asm("func_00253b30");
extern "C" void func_00293e00(u32) asm("func_00293e00");
extern "C" void func_00293fc0() asm("func_00293fc0");

// 0x002853b8 func_002853b8
u32 func_002853b8() asm("func_002853b8");
u32 func_002853b8() {
    u8 frame[128];
    if (((s32)(func_00293fb0()) == 0)) {
        func_00293e00(func_00103570());
        func_00293fc0();
    }
    func_00253b30((u32)frame, *(u32*)(&D_0035f2bc));
    return func_0023fa90(*(u32*)(&D_0035f2c4), (u32)frame);
}
