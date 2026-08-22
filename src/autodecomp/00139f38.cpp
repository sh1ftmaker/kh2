// coverage: addr=0x00139f38 symbol=func_00139f38 size=576 class=branchy source=permute status=exact fuzzy=100.0
// coverage-alternatives: lift:near:99.28;ghidra:near:72.94;m2c:near:54.46
#include "common/types.h"

extern "C" u32 D_00139308 asm("D_00139308");
extern "C" u32 D_00139390 asm("D_00139390");
extern "C" u32 D_001393c8 asm("D_001393c8");
extern "C" u32 D_001394c0 asm("D_001394c0");
extern "C" u32 D_001394d8 asm("D_001394d8");
extern "C" u32 D_00139de8 asm("D_00139de8");
extern "C" u32 D_00347f80 asm("D_00347f80");
extern "C" u32 func_001024b0(u32) asm("func_001024b0");
extern "C" u32 func_00102788(u32, u32, u32, u32) asm("func_00102788");
extern "C" u32 func_00102c18(u32, u32, u32) asm("func_00102c18");
extern "C" u32 func_00102c80() asm("func_00102c80");
extern "C" u32 func_00102f08(u32, u32, u32) asm("func_00102f08");
extern "C" u32 func_00103070() asm("func_00103070");
extern "C" u32 func_00104588(u32, u32, u32) asm("func_00104588");
extern "C" u32 func_001045f0() asm("func_001045f0");
extern "C" void func_00102180(u32) asm("func_00102180");
extern "C" void func_00139dc0(u32) asm("func_00139dc0");

// 0x00139f38 func_00139f38
void func_00139f38(u32 a0) asm("func_00139f38");
void func_00139f38(u32 a0) {
    u32 s0;
    u32 loc_0;
    u32 s2;
    u32 s1;
    u32 v0;
    u32 v0_2;
    u32 v0_3;
    u32 v0_5;
    u32 s0_4;
    u32 s0_7;
    u32 s0_1;
    func_00139dc0(0);
    *(u32*)((*(u32*)(&D_00347f80) + 0x14)) = a0;
    u32 ap37_1 = (*(u32*)(&D_00347f80) + 4);
    *(u32*)((*(u32*)(&D_00347f80) + 8)) = 0;
    *(u32*)(ap37_1) = 0;
    s0 = func_00102c80();
    s2 = func_00103070();
    s1 = func_001045f0();
    func_00102180((u32)&loc_0);
    if ((loc_0 == s0)) {
        func_00102c18(1, 0x177a, (u32)&D_00139de8);
        v0 = (func_00102c18(1, 0x186a0, (u32)&D_00139390)) + 0x30;
        *(u32*)((v0 - 0x2c)) = *(u32*)(&D_00347f80);
        *(u32*)(v0) = ((u32)&D_001393c8) | 0;
        u32 v0_0 = func_00102c18(1, 0x1944c, (u32)&D_001394c0);
        ((u32*)v0_0)[1] = *(u32*)(&D_00347f80);
        ((u32*)v0_0)[12] = (u32)&D_001394d8;
        s0_1 = *(u32*)(&D_00347f80);
        *(u32*)(s0_1) = func_001024b0(a0);
        *(u32*)((func_00102788(*(u32*)(*(u32*)(&D_00347f80)), 0, 0x19258, (u32)&D_00139308) + 4)) = *(u32*)(&D_00347f80);
    } else {
        if (!((loc_0 == s2)) == 0) {
            v0_2 = func_00102f08(0, 0x186a0, (u32)&D_00139390);
            ((u32*)v0_2)[1] = *(u32*)(&D_00347f80);
            *(u32*)((0x30 + v0_2)) = (u32)&D_001393c8;
            v0_3 = func_00102f08(0, 0x1e848, (u32)&D_001394c0);
            ((u32*)v0_3)[1] = *(u32*)(&D_00347f80);
            ((u32*)v0_3)[12] = (u32)&D_001394d8;
            s0_4 = *(u32*)(&D_00347f80);
            *(u32*)(s0_4) = func_001024b0(a0);
            *(u32*)((func_00102788(*(u32*)(*(u32*)(&D_00347f80)), 0, 0x1d4c0, (u32)&D_00139308) + 4)) = *(u32*)(&D_00347f80);
        } else {
            if ((loc_0 == s1)) {
                v0_5 = func_00104588(0, 0x186a0, (u32)&D_00139390);
                ((u32*)v0_5)[1] = *(u32*)(&D_00347f80);
                ((u32*)v0_5)[12] = (u32)&D_001393c8;
                u32 v0_6 = func_00104588(0, 0x1f20c, (u32)&D_001394c0);
                ((u32*)v0_6)[1] = *(u32*)(&D_00347f80);
                ((u32*)v0_6)[12] = (u32)&D_001394d8;
                s0_7 = *(u32*)(&D_00347f80);
                *(u32*)(s0_7) = func_001024b0(a0);
                *(u32*)((func_00102788(*(u32*)(*(u32*)(&D_00347f80)), 0, 0x1adb0, (u32)&D_00139308) + 4)) = *(u32*)(&D_00347f80);
            }
        }
    }
    return;
}
