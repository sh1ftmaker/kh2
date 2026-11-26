// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0013a7e8(u32) asm("func_0013a7e8");
extern "C" u32 func_0013d7e0() asm("func_0013d7e0");
extern "C" u32 func_00154ee8(u32) asm("func_00154ee8");
extern "C" u32 func_00158290(u32) asm("func_00158290");
extern "C" u32 func_001582a8(u32) asm("func_001582a8");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" void func_00138c40(u32, u32, u32) asm("func_00138c40");
extern "C" void func_001395e8(u32) asm("func_001395e8");
extern "C" void func_00139610(u32) asm("func_00139610");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013e0f8(u32, u32, u32, u32) asm("func_0013e0f8");
extern "C" void func_0014b200(u32, u32) asm("func_0014b200");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_00153fa0(u32, u32, u32, u32, u32, u32) asm("func_00153fa0");
extern "C" void func_00158050(u32, u32, u32, u32, u32, u32, u32) asm("func_00158050");
extern "C" void func_00158138(u32) asm("func_00158138");
extern "C" void func_001581f8(u32) asm("func_001581f8");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x00154f30 dk::GAUGE_FRIEND::create(YS::OBJ*, int)
u32 lift_00154f30(u32 a0) asm("_ZN2dk12GAUGE_FRIEND6createEPN2YS3OBJEi");
u32 lift_00154f30(u32 a0) {
    u32 loc_0;
    u32 loc_4;
    u32 s2;
    u32 loc_8;
    u32 s1;
    u32 v0;
    u32 loc_c;
    u32 loc_10;
    u32 loc_14;
    u32 s5;
    u32 s1_0;
    u32 s6;
    func_00158138(a0);
    loc_0 = (a0 + 0xa10);
    loc_4 = (a0 + 0xc60);
    s2 = func_0013a7e8(1);
    loc_8 = (a0 + 0xeb0);
    s1 = func_0013d7e0();
    v0 = func_00158290(a0);
    loc_c = (a0 + 0x1100);
    *(u8*)((a0 + 0x15a0)) = 0;
    *(u8*)((a0 + 0x15a1)) = 0;
    *(u8*)((a0 + 0x15a2)) = 0;
    func_00158050(a0 + 0x394, 0x1b58, s2, s1, 0x47, 0, v0);
    loc_10 = (a0 + 0x1350);
    func_0013e0f8(loc_0, 0x1b58, 0, v0);
    loc_14 = (a0 + 0x40);
    func_0013e0f8(loc_4, 0x1b58, 1, v0);
    func_00158050(a0 + 0x530, 0x1b58, s2, s1, 0x40, 0x64, v0);
    func_0013e0f8(loc_8, 0x1b58, 1, v0);
    func_00158050(a0 + 0x6cc, 0x1b58, s2, s1, 0x41, 0x3e8, v0);
    func_0013e0f8(loc_c, 0x1b58, 0, v0);
    func_0013e0f8(loc_10, 0x1b58, 1, v0);
    func_00158050(a0 + 0x868, 0x1b58, s2, s1, 0x42, 0x2710, v0);
    func_001581f8(a0);
    func_00153fa0(loc_14, 0x1b58, *(u32*)((a0 + 0x30)) + 1, *(u32*)((a0 + 0x34)), *(u32*)((a0 + 0x18)), v0);
    func_00139d78(loc_0);
    func_0014b208(a0 + 0xa30, 0x40, 0x40);
    func_00139d78(loc_c);
    func_0014b208(a0 + 0x1120, 0x40, 0x40);
    func_00139d78(loc_0);
    func_0014b200(a0 + 0xa30, 0);
    func_0014b200(a0 + 0xb50, 0);
    func_00139d78(loc_c);
    func_0014b200(a0 + 0x1120, 0);
    func_0014b200(a0 + 0x1240, 0);
    func_00139d78(loc_4);
    func_0014b200(a0 + 0xc80, 0xc8);
    func_0014b200(a0 + 0xda0, 0xc8);
    func_00139d78(loc_8);
    func_0014b200(a0 + 0xed0, 0x7d0);
    func_0014b200(a0 + 0xff0, 0x7d0);
    func_00139d78(loc_10);
    func_0014b200(a0 + 0x1370, 0x4e20);
    func_0014b200(a0 + 0x1490, 0x4e20);
    s5 = 3;
    do {
        *(u32*)((((a0 + ((s5 - 3) * -0x19c)) + 0x394) + 0x18c)) = (a0 + 0x394);
        func_001396b0((a0 + ((s5 - 3) * -0x19c)) + 0x394);
        if (((s32)(*(u32*)((((a0 + ((s5 - 3) * -0x19c)) + 0x394) + 0x18c))) != 0)) {
            *(u32*)((((a0 + ((s5 - 3) * -0x19c)) + 0x394) + 0x190)) = 0;
            func_001396b0((a0 + ((s5 - 3) * -0x19c)) + 0x394);
            if (((s32)(*(u32*)((((a0 + ((s5 - 3) * -0x19c)) + 0x394) + 0x190))) != 0)) {
                func_0031a260((a0 + ((s5 - 3) * -0x19c)) + 0x394, 0);
            }
        }
        func_001395e8((a0 + ((s5 - 3) * -0x19c)) + 0x394);
        func_00139610((a0 + ((s5 - 3) * -0x19c)) + 0x394);
        s5 = (s5 + -1);
    } while (((s32)(s5) >= 0));
    s1_0 = 4;
    s6 = (a0 + 0x394);
    do {
        func_00139d78((a0 + ((s1_0 - 4) * -0x250)) + 0xa10);
        *(u32*)((((a0 + ((s1_0 - 4) * -0x250)) + 0xa10) + 0x240)) = s6;
        s1_0 = (s1_0 + -1);
    } while (((s32)(s1_0) >= 0));
    *(u32*)((loc_14 + 0x18c)) = s6;
    func_001396b0(loc_14);
    if ((*(u32*)((loc_14 + 0x18c)) != 0)) {
        *(u32*)((loc_14 + 0x190)) = 0;
        func_001396b0(loc_14);
        if (((s32)(*(u32*)((loc_14 + 0x190))) != 0)) {
            func_0031a260(loc_14, 0);
        }
    }
    *(u32*)((s6 + 0x18c)) = 0;
    func_001396b0(s6);
    if (((s32)(*(u32*)((s6 + 0x18c))) != 0)) {
        *(u32*)((s6 + 0x190)) = 0;
        func_001396b0(s6);
        if (((s32)(*(u32*)((s6 + 0x190))) != 0)) {
            func_0031a260(s6, 0);
        }
    }
    *(u32*)((s6 + 0x188)) = func_00154ee8(a0);
    func_00138c40(s6, 0, func_0023aa98(a0 + 0x3ac) * *(u32*)((a0 + 0x30)));
    return func_001582a8(a0);
}
