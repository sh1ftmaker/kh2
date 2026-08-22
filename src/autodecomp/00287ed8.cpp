// coverage: addr=0x00287ed8 symbol=_ZN2Tz8MenuBase11SavePadInitEP9ALLOCATOR size=84 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:95.32;ghidra:near:81.74;e3:near:35.67
#include "common/types.h"

extern "C" u32 D_0035f324 asm("D_0035f324");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_00288018() asm("func_00288018");
extern "C" void func_00167658(u32, u32) asm("func_00167658");

// 0x00287ed8 Tz::MenuBase::SavePadInit(ALLOCATOR*)
void lift_00287ed8(u32 a0) asm("_ZN2Tz8MenuBase11SavePadInitEP9ALLOCATOR");
void lift_00287ed8(u32 a0) {
    u32 v0;
    if (((s32)(*(u32*)(&D_0035f324)) == 0)) {
        v0 = func_001063c0(0x50, a0);
        func_00167658(v0, 0);
        *(u32*)(&D_0035f324) = v0;
    }
    func_00288018();
    return;
}
