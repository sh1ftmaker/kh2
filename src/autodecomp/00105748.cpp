// coverage: addr=0x00105748 symbol=func_00105748 size=280 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.79;m2c:near:87.53;ghidra:near:78.5
#include "common/types.h"

extern "C" u32 func_00105870() asm("func_00105870");
extern "C" u32 func_0023d3d0() asm("func_0023d3d0");
extern "C" void func_00105860(u32, u32) asm("func_00105860");
extern "C" void func_0014cb58() asm("func_0014cb58");
extern "C" void func_00188e08(u32) asm("func_00188e08");
extern "C" void func_00188fc0(u32) asm("func_00188fc0");
extern "C" void func_00196198() asm("func_00196198");
extern "C" void func_001e0868(u32) asm("func_001e0868");
extern "C" void func_001e0998(u32) asm("func_001e0998");
extern "C" void func_002be760(u32) asm("func_002be760");
extern "C" void func_002e7768(u32) asm("func_002e7768");
extern "C" void func_002fd310(u32, u32) asm("func_002fd310");
extern "C" void func_00319870(u32) asm("func_00319870");
extern "C" void func_00319930(u32) asm("func_00319930");
extern "C" void func_003199d0(u32) asm("func_003199d0");
extern "C" void func_00319a60(u32) asm("func_00319a60");
extern "C" void func_00319bd0(u32) asm("func_00319bd0");

// 0x00105748 func_00105748
u32 func_00105748(u32 a0) asm("func_00105748");
u32 func_00105748(u32 a0) {
    u32 s2;
    u32 s3;
    u32 t5;
    u32 s0;
    u32 t5_0;
    u32 t6;
    u32 s0_1;
    func_002fd310(a0, 0x10fc0);
    s2 = (a0 + 0x24f0);
    func_00319bd0(a0 + 0xc);
    s3 = (a0 + 0x3fec);
    func_00188e08(s2);
    func_00319870(s3);
    func_00319930(a0 + 0x41a8);
    *(u32*)((a0 + 0x49d8)) = 0;
    *(u32*)((a0 + 0x49dc)) = 0;
    s0 = (a0 + 0x419c);
    t5 = (a0 + 0x49e0);
    t5_0 = t5;
    t6 = 3;
    do {
        *(u32*)(t5) = 0;
        t6 = (t6 + -1);
        t5 = (t5 + 4);
    } while (((s32)(t6) >= 0));
    *(u8*)((t5_0 + 0x10)) = 0;
    func_003199d0(s0 + 0x858);
    func_00319a60(s0 + 0xa9c);
    s0_1 = (a0 + 0x100e0);
    func_002e7768(a0 + 0x55a0);
    func_001e0868(s0_1);
    *(u32*)(a0) = func_00105870();
    *(u32*)((a0 + 4)) = 0x3a;
    func_00188fc0(s2);
    func_002be760(s3);
    func_001e0998(s0_1);
    func_0014cb58();
    func_00105860(a0, 1);
    func_00196198();
    return func_0023d3d0();
}
