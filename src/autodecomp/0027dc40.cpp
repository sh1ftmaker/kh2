// coverage: addr=0x0027dc40 symbol=_ZN2Tz10SimpleStat4InitEv size=216 class=loop source=lift status=exact fuzzy=100.0
// coverage-alternatives: ghidra:near:96.65;e3:near:27.37;m2c:compile:0.0
#include "common/types.h"

extern "C" u32 D_00347e60 asm("D_00347e60");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 D_0035f244 asm("D_0035f244");
extern "C" u32 D_0035f248 asm("D_0035f248");
extern "C" u32 D_0035f24c asm("D_0035f24c");
extern "C" u32 D_0035f24d asm("D_0035f24d");
extern "C" u32 D_0035f24e asm("D_0035f24e");
extern "C" u32 func_00103570() asm("func_00103570");
extern "C" u32 func_001063f0(u32, u32) asm("func_001063f0");
extern "C" void func_00239700(u32) asm("func_00239700");
extern "C" void func_003237e0(u32) asm("func_003237e0");

// 0x0027dc40 Tz::SimpleStat::Init()
void lift_0027dc40() asm("_ZN2Tz10SimpleStat4InitEv");
void lift_0027dc40() {
    u32 v0;
    u32 v0_0;
    u32 s1;
    u32 s2;
    u32 s3;
    v0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)(&D_00347f80) + 0x14))))))(*(u32*)((*(u32*)(&D_00347f80) + 0x14)), 0x198, 0);
    *(u32*)(v0) = (u32)&D_00347e60;
    *(u32*)((v0 + 0xc)) = 0;
    func_00239700(v0 + 0x18);
    *(u32*)(&D_0035f244) = v0;
    v0_0 = func_001063f0(0x4ff4, func_00103570());
    *(u32*)(v0_0) = 4;
    s1 = 3;
    s2 = (v0_0 + 4);
    s3 = 0xffffffff;
    do {
        func_003237e0((v0_0 + ((s1 - 3) * -0x13fc)) + 4);
        s1 = (s1 + -1);
    } while ((s1 != s3));
    *(u32*)(&D_0035f248) = s2;
    *(u8*)(&D_0035f24c) = 0xffffffff;
    *(u8*)(&D_0035f24d) = 0xffffffff;
    *(u8*)(&D_0035f24e) = 0xffffffff;
    return;
}
