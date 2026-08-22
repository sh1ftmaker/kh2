// coverage: addr=0x0015edb8 symbol=func_0015edb8 size=88 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:72.12;ghidra:near:63.14
#include "common/types.h"

extern "C" u32 D_0034c6f0 asm("D_0034c6f0");
extern "C" u32 D_0034c70c asm("D_0034c70c");
extern "C" u32 func_00142f50() asm("func_00142f50");
extern "C" u32 func_001de568(u32) asm("func_001de568");
extern "C" void func_001dde40(u32) asm("func_001dde40");

// 0x0015edb8 func_0015edb8
void func_0015edb8() asm("func_0015edb8");
void func_0015edb8() {
    if ((*(u8*)(&D_0034c70c) == 1)) {
        if (((s32)(func_001de568((u32)&D_0034c6f0)) != 0)) {
            func_001dde40((u32)&D_0034c6f0);
        }
    }
    *(u8*)(&D_0034c70c) = 0;
    func_00142f50();
    return;
}
