// coverage: addr=0x00185d10 symbol=func_00185d10 size=132 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:83.47;m2c:near:0.0
#include "common/types.h"

extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 D_01c608b8 asm("D_01c608b8");
extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" u32 func_001d7e78(u32) asm("func_001d7e78");
extern "C" void func_001890a8(u32, u32) asm("func_001890a8");
extern "C" void func_001d6088(u32, u32) asm("func_001d6088");

// 0x00185d10 func_00185d10
u32 func_00185d10(u32 a0) asm("func_00185d10");
u32 func_00185d10(u32 a0) {
    u32 s1;
    if (((s32)(func_0019ba60(*(u32*)((a0 + 0xae4)))) != 0)) {
        *(u32*)(&D_01c608b8) = *(u32*)((a0 + 0xae4));
        if (((s32)((*(u32*)((*(u32*)((a0 + 0xae4)) + 0x588)) & 0x80)) != 0)) {
            s1 = *(u32*)((a0 + 0xae4));
            func_001d6088(func_0016a070(a0), s1);
        }
    }
    func_001890a8((u32)&D_0032e020, func_0016a070(a0));
    return func_001d7e78(a0);
}
