// coverage: addr=0x001dcfb0 symbol=func_001dcfb0 size=60 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.53;m2c:near:93.69;ghidra:near:91.33
#include "common/types.h"

extern "C" u32 D_00352ae0 asm("D_00352ae0");
extern "C" void func_001dc878(u32) asm("func_001dc878");

// 0x001dcfb0 func_001dcfb0
void func_001dcfb0() asm("func_001dcfb0");
void func_001dcfb0() {
    u8 frame[1];
    u32 a0_0;
    u32 s0;
    u32 sp;
    if (((s32)(*(u32*)(&D_00352ae0)) != 0)) {
        a0_0 = *(u32*)(&D_00352ae0);
        do {
            s0 = *(u32*)((a0_0 + 0x28));
            func_001dc878(a0_0);
            a0_0 = s0;
        } while (((s32)(s0) != 0));
    } else {
        sp = (u32)frame;
    }
    return;
}
