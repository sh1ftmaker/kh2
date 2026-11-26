// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002b6138 asm("D_002b6138");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f640 asm("D_0035f640");
extern "C" u32 D_0035f644 asm("D_0035f644");
extern "C" u32 D_0035f64c asm("D_0035f64c");
extern "C" u32 D_0035f658 asm("D_0035f658");
extern "C" u32 D_0035f664 asm("D_0035f664");
extern "C" u32 D_0035f678 asm("D_0035f678");
extern "C" u32 D_0035f680 asm("D_0035f680");
extern "C" u32 D_0035f6cc asm("D_0035f6cc");
extern "C" u32 func_00233e60() asm("func_00233e60");
extern "C" u32 func_00236ca8(u32, u32) asm("func_00236ca8");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023d2e0(u32) asm("func_0023d2e0");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_00240ba0() asm("func_00240ba0");
extern "C" u32 func_002418b8() asm("func_002418b8");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028c198(u32, u32, u32, u32, u32, u32) asm("func_0028c198");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00234570(u32, u32) asm("func_00234570");
extern "C" void func_0023d300(u32) asm("func_0023d300");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af90(u32, u32) asm("func_0028af90");
extern "C" void func_0028b218(u32, u32) asm("func_0028b218");
extern "C" void func_0028b248(u32, u32) asm("func_0028b248");
extern "C" void func_0028bae0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028bae0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_002b57e0() asm("func_002b57e0");
extern "C" void func_002b5c30(u32) asm("func_002b5c30");

// 0x002b5188 func_002b5188
u32 func_002b5188(u32 a0, u32 a1) asm("_ZN2Tz8CmSLBase9SetupListEPKsi");
u32 func_002b5188(u32 a0, u32 a1) {
    u32 loc_18;
    u32 s1;
    u32 loc_1c;
    u32 loc_0;
    u32 t7;
    u32 s7;
    u32 s6;
    u32 s4;
    u32 s3;
    u32 fp;
    u32 s7_0;
    u32 s6_1;
    u32 s5;
    u32 s4_2;
    u32 s3_3;
    u32 s2;
    u32 s1_4;
    u32 s0;
    u32 loc_10;
    u32 loc_14;
    loc_18 = a1;
    func_0028d8c0(*(u32*)(&D_0035f658), 0x755f, *(u32*)(&D_0035f644), *(u32*)(&D_0035f640), *(u32*)(&D_0035f664), *(s16*)(*(u32*)((*(u32*)(&D_0035f6cc) + 0x18))), *(s16*)((*(u32*)((*(u32*)(&D_0035f6cc) + 0x18)) + 4)), 0);
    *(u32*)(((*(u32*)(&D_0035f658) + 0x18) + 0xb8)) = (*(u32*)(((*(u32*)(&D_0035f658) + 0x18) + 0xb8)) | 8);
    s1 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f664)), *(u32*)(&D_0035f644));
    loc_1c = *(u32*)(&D_0035f3d4);
    loc_0 = 0;
    *(u32*)(&D_0035f3d4) = 0x755f;
    func_0028bae0(*(u32*)(&D_0035f678), 0x755f, s1, func_00236ca8(*(u32*)((func_0023f1b0(*(u32*)(&D_0035f664)) + 0x28)), *(u32*)(&D_0035f640)), a0, 0x63, 4, 0);
    t7 = *(u32*)(&D_0035f6cc);
    s7 = 0x360000;
    s6 = 0x360000;
    s4 = 0x360000;
    s3 = 0;
    fp = 0x360000;
    do {
        func_00288d80(*(u32*)((s4 + -0x9b4)), s3, *(u32*)(&D_0035f644), *(u32*)((fp + -0x9c0)), *(u32*)((s7 + -0x99c)), 0xffffffff, *(u32*)((t7 + 8)), *(u32*)((t7 + 0xc)));
        func_001395f8(func_002891b8(*(u32*)((s4 + -0x9b4)), s3));
        func_00288e08(*(u32*)((s4 + -0x9b4)), s3, 0, 0xffffffff);
        func_00139620(func_002891b8(*(u32*)((s4 + -0x9b4)), s3));
        s3 = (s3 + 1);
        t7 = *(u32*)((s6 + -0x934));
    } while (((s32)(t7) != 0));
    func_002b57e0();
    *(u32*)(&D_0035f3d4) = 0x7560;
    s7_0 = (u32)&D_002b6138;
    s6_1 = 0x360000;
    s5 = 0x360000;
    s4_2 = 0x360000;
    s3_3 = 0;
    s2 = 0x360000;
    s1_4 = 0x360000;
    s0 = (u32)&D_0035f680;
    do {
        *(u32*)((s0 + (s3_3 * 4))) = func_0028c198(*(u32*)((s6_1 + -0x9b8)), *(u32*)((s5 + -0x9bc)), *(u32*)((s4_2 + -0x9c0)), *(u32*)((s2 + -0x99c)), 0xffffffff, 0);
        func_0028dcc0(*(u32*)((s0 + (s3_3 * 4))), func_002891b8(*(u32*)((s1_4 + -0x9b4)), s3_3));
        func_001395f8(*(u32*)((s0 + (s3_3 * 4))));
        func_00139620(*(u32*)((s0 + (s3_3 * 4))));
        *(u32*)((*(u32*)((s0 + (s3_3 * 4))) + 0x1b4)) = s7_0;
        s3_3 = (s3_3 + 1);
    } while (((s32)(((s32)(s3_3) < (s32)(4))) != 0));
    *(u32*)(&D_0035f3d4) = loc_1c;
    func_0028af90(*(u32*)(&D_0035f64c), 0x63);
    if (((s32)(func_0023d2e0((u32)&loc_10)) != 0)) {
        if ((loc_10 == func_00240ba0())) {
            func_0023d300((u32)&loc_14);
        } else {
            loc_14 = func_002418b8();
        }
    } else {
        loc_14 = func_002418b8();
    }
    func_002891f0(*(u32*)(&D_0035f64c), loc_14, 1, 0, 2);
    func_002b5c30(loc_18);
    if ((func_00233e60() != 0)) {
        func_00234570(func_00240ba0(), 0);
    }
    func_0028b218(*(u32*)(&D_0035f64c), 1);
    func_0028b248(*(u32*)(&D_0035f64c), 4);
    return func_00287cc0(0);
}
