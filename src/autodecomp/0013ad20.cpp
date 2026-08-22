// coverage: addr=0x0013ad20 symbol=_ZN2dk11COMMAND_ONE4initEv size=440 class=loop source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:98.67;ghidra:near:85.63;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347e80 asm("D_00347e80");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_00348050 asm("D_00348050");
extern "C" u32 D_00348054 asm("D_00348054");
extern "C" u32 D_00348058 asm("D_00348058");
extern "C" u32 D_003485b0 asm("D_003485b0");
extern "C" u32 D_003485d0 asm("D_003485d0");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_001063c0(u32, u32) asm("func_001063c0");
extern "C" u32 func_002361a0(u32) asm("func_002361a0");
extern "C" void func_00239700(u32) asm("_ZN2YI8SEQUENCEC1Ev");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x0013ad20 dk::COMMAND_ONE::init()
u32 lift_0013ad20() asm("_ZN2dk11COMMAND_ONE4initEv");
u32 lift_0013ad20() {
    u32 v0;
    u32 v0_0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 t5;
    u32 t6;
    u32 v0_1;
    u32 s0_2;
    u32 s1_3;
    u32 s2_4;
    u32 s3_5;
    u32 s4_6;
    u32 s5;
    u32 t5_7;
    u32 t6_8;
    u32 v0_9;
    u32 v0_10;
    v0 = func_001050c8();
    v0_0 = func_001063c0(0x6ed4, v0);
    u32 t42_4 = (u32)(*(u32*)((v0_0 + 0xc)));
    t42_4 = 0;
    s0 = v0_0;
    s1 = 0x23;
    s3 = (u32)&D_00347e60;
    s4 = 0xffffffff;
    s2 = (u32)&D_003485b0;
    do {
        *(u32*)((s0 + 0xc)) = 0;
        *(u32*)(s0) = s3;
        func_00239700(s0 + 0x18);
        *(u32*)((s0 + 0x198)) = 0;
        *(u32*)(s0) = s2;
        func_00239700(s0 + 0x1b4);
        s0 = (s0 + 0x310);
        s1 = (s1 + -1);
    } while ((s1 != s4));
    t5 = 0;
    t6 = (v0_0 + 0x6e40);
    do {
        *(u32*)(t6) = t5;
        t5 = (t5 + 1);
        t6 = (t6 + 4);
    } while (((s32)(((s32)(t5) < (s32)(0x24))) != 0));
    *(u32*)((v0_0 + 0x6ed0)) = 0x24;
    *(u32*)(&D_00348058) = v0_0;
    v0_1 = func_001063c0(0x3384, v0);
    s0_2 = v0_1;
    s1_3 = 0x1f;
    s4_6 = (u32)&D_00347f98;
    s3_5 = (u32)&D_00347e60;
    s5 = 0xffffffff;
    s2_4 = (u32)&D_003485d0;
    do {
        *(u32*)(s0_2) = s4_6;
        func_0031a838(s0_2 + 0xc);
        *(u32*)(s0_2) = s3_5;
        func_00239700(s0_2 + 0x18);
        *(u32*)(s0_2) = s2_4;
        s0_2 = (s0_2 + 0x198);
        s1_3 = (s1_3 + -1);
    } while ((s1_3 != s5));
    t5_7 = 0;
    t6_8 = (v0_1 + 0x3300);
    do {
        *(u32*)(t6_8) = t5_7;
        t5_7 = (t5_7 + 1);
        t6_8 = (t6_8 + 4);
    } while (((s32)(((s32)(t5_7) < (s32)(0x20))) != 0));
    *(u32*)((v0_1 + 0x3380)) = 0x20;
    *(u32*)(&D_00348054) = v0_1;
    v0_9 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x1c0, 0);
    *(u32*)(v0_9) = (u32)&D_00347e80;
    *(u32*)((v0_9 + 0xc)) = 0;
    v0_10 = func_002361a0(v0_9 + 0x20);
    *(u32*)(&D_00348050) = v0_9;
    return v0_10;
}
