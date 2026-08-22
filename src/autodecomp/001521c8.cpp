// coverage: addr=0x001521c8 symbol=_Z16wtarget_001521c8jjjj size=336 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:97.23;m2c:near:89.64;ghidra:near:86.82
#include "common/types.h"

extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013e678() asm("func_0013e678");
extern "C" u32 func_0014fc40(u32, u32, u32, u32, u32, u32) asm("func_0014fc40");
extern "C" u32 func_00152498(u32, u32) asm("func_00152498");
extern "C" u32 func_001524e8(u32, u32) asm("func_001524e8");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00152120(u32) asm("func_00152120");
extern "C" void func_00239988(u32, u32, u32) asm("func_00239988");
extern "C" void func_00239bf8(u32, u32) asm("func_00239bf8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x001521c8 wtarget_001521c8(unsigned int, unsigned int, unsigned int, unsigned int)
u32 lift_001521c8(u32 a0, u32 a1) asm("_Z16wtarget_001521c8jjjj");
u32 lift_001521c8(u32 a0, u32 a1) {
    u32 s4;
    u32 v0;
    u32 s0;
    u32 s0_0;
    u32 s1;
    if (((s32)(func_001524e8(a0, a1)) != 0)) {
        return func_00152498(a0, a1);
    } else {
        *(u32*)((a0 + 0xb4c)) = a1;
        s4 = func_0013e678();
        v0 = func_0013a7e8(0);
        s0 = (a0 + 0x30);
        func_001386e0(s0, 0x1194, v0, s4, 0x30, 7);
        *(u32*)((s0 + 0x18c)) = 0;
        func_001396b0(s0);
        if ((*(u32*)((s0 + 0x18c)) != 0)) {
            *(u32*)((s0 + 0x190)) = 0;
            func_001396b0(s0);
            if (((s32)(*(u32*)((s0 + 0x190))) != 0)) {
                func_0031a260(s0, 0);
            }
        }
        s0_0 = (a0 + 0x1c8);
        func_00138c40(s0, 0, *(u32*)((a0 + 0x24)));
        s1 = 6;
        do {
            s1 = (s1 + -1);
            func_00239988(s0_0, v0, s4);
            func_00239bf8(s0_0, 0x26);
            s0_0 = (s0_0 + 0x158);
        } while (((s32)(s1) >= 0));
        func_00152120(a0);
        return func_0014fc40(a0, 0xe, func_0023aa78(a0 + 0x48), 0x1194, 7, 0);
    }
}
