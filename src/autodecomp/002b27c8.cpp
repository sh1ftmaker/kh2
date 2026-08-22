// coverage: addr=0x002b27c8 symbol=func_002b27c8 size=120 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.77;m2c:near:73.2;e3:near:59.98
#include "common/types.h"

extern "C" u32 D_0035f638 asm("D_0035f638");
extern "C" u32 func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" u32 func_00292630() asm("func_00292630");
extern "C" u32 func_00293db8(u32, u32) asm("func_00293db8");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" void func_0023f900(u32) asm("func_0023f900");

// 0x002b27c8 func_002b27c8
u32 func_002b27c8() asm("func_002b27c8");
u32 func_002b27c8() {
    u32 v0;
    u32 v0_0;
    func_0023f900(*(u32*)(&D_0035f638));
    v0 = func_00292630();
    if (((s32)(v0) == 0)) {
        v0_0 = func_0023fa08(*(u32*)(&D_0035f638), func_00293db8(5, (func_00294000(9) + (*(s8*)((*(u32*)(&D_0035f638) + 0x34)) << 4)) + 0x16));
        *(u32*)((*(u32*)(&D_0035f638) + 0x34)) = (*(u32*)((*(u32*)(&D_0035f638) + 0x34)) | 0x200);
        v0 = v0_0;
    }
    return v0;
}
