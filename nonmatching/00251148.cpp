// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00347f98 asm("D_00347f98");
extern "C" u32 D_0035eb98 asm("D_0035eb98");
extern "C" u32 D_0035ebb8 asm("D_0035ebb8");
extern "C" u32 D_0035ee58 asm("D_0035ee58");
extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee64 asm("D_0035ee64");
extern "C" u32 D_00372608 asm("D_00372608");
extern "C" u32 D_00372630 asm("D_00372630");
extern "C" u32 func_0023ee30(u32) asm("func_0023ee30");
extern "C" u32 func_00252098(u32) asm("func_00252098");
extern "C" u32 func_00252110(u32) asm("func_00252110");
extern "C" u32 func_00252148(u32) asm("func_00252148");
extern "C" u32 func_00252428() asm("func_00252428");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" void func_002369a0(u32) asm("func_002369a0");
extern "C" void func_0023c008(u32) asm("func_0023c008");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f1e0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0023f1e0");
extern "C" void func_0023f6c0(u32, u32) asm("func_0023f6c0");
extern "C" void func_00252180() asm("func_00252180");
extern "C" void func_00252208() asm("func_00252208");
extern "C" void func_00252320() asm("func_00252320");
extern "C" void func_00252660(u32) asm("func_00252660");
extern "C" void func_00287bd0(u32, u32) asm("func_00287bd0");
extern "C" void func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028d7f0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d7f0");
extern "C" void func_0031a838(u32) asm("func_0031a838");

// 0x00251148 Tz::CANA::Setup()
u32 lift_00251148() asm("_ZN2Tz4CANA5SetupEv");
u32 lift_00251148() {
    u32 v0;
    u32 loc_0;
    u32 s2;
    u32 s3;
    u32 t7;
    u32 v0_0;
    u32 s0;
    v0 = func_0023ee30(0xa0);
    *(u32*)(v0) = (u32)&D_00347f98;
    func_0031a838(v0 + 0xc);
    *(u32*)(v0) = (u32)&D_0035eb98;
    func_002369a0(v0 + 0x18);
    func_0023c008(v0 + 0x30);
    *(u32*)(&D_0035ee60) = v0;
    loc_0 = 0;
    func_0028d7f0(v0, 0x7532, 0, 0, 0, 1, 0, 0);
    func_0023ef50(*(u32*)(&D_0035ee60));
    s2 = 0;
    s3 = 0;
    do {
        if (((s32)(func_00252098(s2)) != 0)) {
            func_00288ce0(*(u32*)(&D_0035ee58), 0, s3, 0, 0);
            s3 = (s3 + 1);
        }
        s2 = (s2 + 1);
        t7 = 0x340000;
    } while (((s32)(t7) != 0));
    v0_0 = ((u32(*)(u32, u32, u32))(*(u32*)(*(u32*)(*(u32*)((*(u32*)((t7 + 0x7f80)) + 0x14))))))(*(u32*)((*(u32*)((t7 + 0x7f80)) + 0x14)), 0x4c, 0);
    *(u32*)(v0_0) = (u32)&D_0035ebb8;
    *(u32*)((v0_0 + 0xc)) = 0;
    *(u32*)(&D_0035ee64) = v0_0;
    func_0023f1e0(v0_0, 0x7533, *(u32*)(&D_0035ee60), (u32)&D_00372608, (u32)&D_00372630, 0xffffffff, 0, 0);
    func_0023f6c0(*(u32*)(&D_0035ee64), 2);
    func_00252180();
    s0 = func_00252428();
    func_00252320();
    func_00252208();
    func_002891f0(*(u32*)(&D_0035ee58), func_00252148(s0), 0, 0xffffffff, 0xffffffff);
    func_00252660(func_00252110(func_002891e8(*(u32*)(&D_0035ee58))));
    func_00287bd0(0, 0);
    return func_00287cc0(0);
}
