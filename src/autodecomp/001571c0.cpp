// coverage: addr=0x001571c0 symbol=func_001571c0 size=292 class=branchy source=lift status=exact fuzzy=100.0
// coverage-alternatives: m2c:near:84.47;ghidra:near:80.11
#include "common/types.h"

extern "C" u32 D_00157160 asm("D_00157160");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00138c10(u32, u32) asm("func_00138c10");
extern "C" u32 func_00139c18(u32) asm("func_00139c18");
extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00155f40(u32) asm("func_00155f40");
extern "C" u32 func_00155fc0(u32) asm("func_00155fc0");
extern "C" u32 func_00156030(u32) asm("func_00156030");
extern "C" u32 func_00158290(u32) asm("func_00158290");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001571c0 func_001571c0
u32 func_001571c0(u32 a0) asm("func_001571c0");
u32 func_001571c0(u32 a0) {
    u32 v0;
    u32 s2;
    u32 s0;
    u32 s1;
    u32 v0_0;
    u32 v0_1;
    u32 s0_2;
    u32 v0_3;
    *(u32*)((func_00102c18(1, 0x19258, (u32)&D_00157160) + 4)) = a0;
    v0 = func_00156030(a0);
    if (((s32)(v0) == 0)) {
        s2 = func_00158290(a0);
        s0 = func_0013a7e8(1);
        s1 = func_0013d7e0();
        v0_0 = func_00139c18(a0 + 0xd24);
        v0_1 = (v0_0 * 0x198);
        s0_2 = ((a0 + v0_1) + 0xd24);
        func_001386e0(s0_2, 0x1b58, s0, s1, 0x82, s2);
        *(u32*)((s0_2 + 0x18c)) = (a0 + 0x1a30);
        func_001396b0(s0_2);
        if (((s32)(*(u32*)((s0_2 + 0x18c))) != 0)) {
            *(u32*)((s0_2 + 0x190)) = 0;
            func_001396b0(s0_2);
            if (((s32)(*(u32*)((s0_2 + 0x190))) != 0)) {
                func_0031a260(s0_2, 0);
            }
        }
        func_00138c10(a0 + 0x2d80, func_00155f40(a0));
        v0_3 = func_00138c10(a0 + 0x2f1c, func_00155fc0(a0));
        *(u8*)((a0 + 0x3cf7)) = 1;
        v0 = v0_3;
    }
    return v0;
}
