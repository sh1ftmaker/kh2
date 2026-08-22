// coverage: addr=0x0027c5a0 symbol=_ZN2Tz8CmConfig5SetupEv size=348 class=straight source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:95.91;ghidra:near:86.28;m2c:near:84.07;e3:near:59.7
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f04c asm("D_0035f04c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257088(u32) asm("func_00257088");
extern "C" u32 func_002570f0() asm("func_002570f0");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_0028b040(u32) asm("func_0028b040");
extern "C" void func_0027c9a8() asm("func_0027c9a8");
extern "C" void func_0027ccf8() asm("func_0027ccf8");
extern "C" void func_0027d008() asm("func_0027d008");
extern "C" void func_0027d810(u32) asm("func_0027d810");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028afd0(u32, u32) asm("func_0028afd0");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x0027c5a0 Tz::CmConfig::Setup()
u32 lift_0027c5a0() asm("_ZN2Tz8CmConfig5SetupEv");
u32 lift_0027c5a0() {
    u8 frame[1];
    u32 s4;
    u32 s3;
    u32 s1;
    u32 s2;
    u32 v0;
    s4 = func_00257770();
    func_0028f4d8(0, 0xffffffff, 0);
    func_0027c9a8();
    func_0027ccf8();
    func_002891f0(*(u32*)(&D_0035f01c), func_00257070(0x24), 0, 0xffffffff, 0xffffffff);
    func_0028afd0(*(u32*)(&D_0035f01c), func_00257088(0x24));
    func_0028af90(*(u32*)(&D_0035f01c), 0xa);
    func_0028b218(*(u32*)(&D_0035f01c), 1);
    func_0028b248(*(u32*)(&D_0035f01c), 9);
    s3 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f03c)), *(u32*)(&D_0035ef68));
    s1 = func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f03c)) + 0x28)), *(u32*)(&D_0035ef64));
    s2 = *(u32*)(&D_0035f3d4);
    v0 = func_002570f0();
    *(u32*)((u32)frame) = 0;
    func_0028bae0(*(u32*)(&D_0035f04c), s2, s3, s1, v0, 0xa, 9, s4);
    func_0028af28(*(u32*)(&D_0035f01c), 0x10);
    func_0027d810(func_0028b040(*(u32*)(&D_0035f01c)));
    func_0027d008();
    return func_00287cc0(0);
}
