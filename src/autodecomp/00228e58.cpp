// coverage: addr=0x00228e58 symbol=_ZN2sa14MUSICAL_GAUGE34initEv size=188 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:81.18;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035e050 asm("D_0035e050");
extern "C" u32 func_00228ab0(u32) asm("func_00228ab0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00228e58 sa::MUSICAL_GAUGE3::init()
u32 lift_00228e58() asm("_ZN2sa14MUSICAL_GAUGE34initEv");
u32 lift_00228e58() {
    u32 v0;
    u32 s5;
    u32 s4;
    u32 s3;
    u32 s2;
    u32 s0;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x4ec, 0);
    *(u32*)(v0) = (u32)&D_0035e050;
    *(u32*)((v0 + 0xc)) = 0;
    s5 = 0xffffffff;
    s4 = (u32)&D_00347f98;
    s3 = (u32)&D_00347e60;
    s2 = 2;
    s0 = (v0 + 0x18);
    do {
        *(u32*)(s0) = s4;
        func_0031a838(s0 + 0xc);
        *(u32*)(s0) = s3;
        func_00239700(s0 + 0x18);
        s0 = (s0 + 0x198);
        s2 = (s2 + -1);
    } while ((s2 != s5));
    return func_00228ab0(v0);
}
