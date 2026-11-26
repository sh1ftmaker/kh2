// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_00375838 asm("D_00375838");
extern "C" u32 D_00375840 asm("D_00375840");
extern "C" u32 D_00375848 asm("D_00375848");
extern "C" u32 D_00375850 asm("D_00375850");
extern "C" u32 func_001396b0(u32) asm("func_001396b0");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_0023aa98(u32) asm("func_0023aa98");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00288be8(u32) asm("func_00288be8");
extern "C" u32 func_002891d0(u32) asm("func_002891d0");
extern "C" u32 func_0028c2c8(u32, u32, u32, u32, u32) asm("func_0028c2c8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_00239870(u32) asm("func_00239870");
extern "C" void func_002889f0(u32, u32, u32) asm("func_002889f0");
extern "C" void func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");
extern "C" void func_00288f48(u32, u32, u32, u32, u32) asm("func_00288f48");
extern "C" void func_002891f0(u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028b078(u32, u32, u32) asm("func_0028b078");
extern "C" void func_0028d068(u32, u32) asm("func_0028d068");
extern "C" void func_0028d1c0(u32, u32, u32, u32, u32, u32, u32) asm("func_0028d1c0");
extern "C" void func_0028d660(u32, u32) asm("func_0028d660");
extern "C" void func_00324bc0(u32, u32) asm("func_00324bc0");

// 0x002ca828 func_002ca828
u32 func_002ca828(u32 a0) asm("_ZN2dk11WM_GLANDING21createSelectDepartureEv");
u32 func_002ca828(u32 a0) {
    u8 frame[352];
    u32 v0;
    u32 s7;
    u32 s3;
    u32 s6;
    u32 v0_0;
    u32 s0;
    *(u32*)(&D_0035f3d4) = 0x7544;
    v0 = func_00288be8(0x38);
    func_002889f0(v0, 2, 1);
    *(u32*)((a0 + 0xbc)) = v0;
    s7 = func_0023c4b8(func_0023f1b0(a0 + 0x1c), 1);
    s3 = 0;
    do {
        s6 = func_00236ca8(*(u32*)((func_0023f1b0(a0 + 0x1c) + 0x28)), 1);
        v0_0 = func_0028c2c8(s7, func_00236ca8(*(u32*)((func_0023f1b0(a0 + 0x1c) + 0x28)), 1), 0x3a, *(u16*)((((*(u32*)((a0 + 0x280)) << 1) + (u32)&D_00375850) + -2)), 0);
        *(u32*)((v0_0 + 0x188)) = 0x3b;
        func_00138c68(v0_0, 0, func_0023aa98(v0_0 + 0x18) * s3);
        *(u32*)((v0_0 + 0x1b0)) = 2;
        func_00324bc0((u32)frame, v0_0 + 0x18);
        s0 = -(func_0023aa18((u32)frame));
        *(u32*)((v0_0 + 0x19c)) = s0;
        *(u32*)((v0_0 + 0x1a0)) = -(func_0023aa38((u32)frame));
        func_00288ce0(v0, v0_0, s3, (u32)&D_00375840, (u32)&D_00375848);
        func_00239870((u32)frame);
        s3 = (s3 + 1);
    } while (((s32)(((s32)(s3) < (s32)(2))) != 0));
    func_002891f0(v0, 0, 1);
    func_0028b078(v0, 1, 2);
    func_0028af90(v0, 2);
    func_00288f48(v0, 0x10, 0x20, 0x40, 0x80);
    func_0028d068(0x7558, 0xffffffff);
    func_0028d1c0(a0 + 0xc0, 0x7562, 1, 1, a0 + 0x1c, (u32)&D_00375838, 0);
    func_0028d660(a0 + 0xc0, func_002891d0(v0));
    return func_001396b0(a0 + 0xc0);
}
