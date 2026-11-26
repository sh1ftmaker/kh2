// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0037327c asm("D_0037327c");
extern "C" u32 func_00192048(u32) asm("func_00192048");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257100(u32) asm("func_00257100");
extern "C" u32 func_00257770(u32) asm("func_00257770");
extern "C" u32 func_00258068(u32) asm("func_00258068");
extern "C" u32 func_00281140(u32, u32) asm("func_00281140");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00285d58(u32) asm("func_00285d58");
extern "C" u32 func_00285e30(u32) asm("func_00285e30");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00256cc0(u32, u32, u32) asm("func_00256cc0");
extern "C" void func_00257050(u32, u32, u32) asm("func_00257050");
extern "C" void func_0025f7d8() asm("func_0025f7d8");
extern "C" void func_00261b30() asm("func_00261b30");
extern "C" void func_00261d48() asm("func_00261d48");
extern "C" void func_00262af8() asm("func_00262af8");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x0025f7f0 func_0025f7f0
u32 func_0025f7f0(u32 a0) asm("func_0025f7f0");
u32 func_0025f7f0(u32 a0) {
    u32 loc_4;
    u32 loc_0;
    u32 s2;
    u32 s3;
    u32 s0;
    u32 v0;
    u32 s1;
    u32 v0_0;
    u32 s2_1;
    u32 s0_2;
    u32 s2_3;
    u32 v0_4;
    u32 s0_5;
    u32 s0_6;
    loc_4 = func_00257770(a0);
    func_0028f4d8(0, 0xffffffff, 0);
    loc_0 = *(u32*)(&D_0035f3d4);
    *(u32*)(&D_0035f3d4) = 0x7541;
    s2 = 0;
    s3 = 0;
    do {
        if (((s32)(func_00281180(*(u32*)(&D_0035f010), s2)) != 0)) {
            s0 = func_00257100(0);
            func_00288d80(*(u32*)(&D_0035f01c), s3, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, s0, func_00257100(1));
            func_00288e08(*(u32*)(&D_0035f01c), s3, 0, 0xffffffff);
            v0 = func_002891b8(*(u32*)(&D_0035f01c), s3);
            func_00139620(v0);
            *(u32*)((v0 + 0x198)) = func_00281140(*(u32*)(&D_0035f010), s2);
            func_001395f8(v0);
            s3 = (s3 + 1);
        }
        s2 = (s2 + 1);
    } while (((s32)(s2) < (s32)(4)));
    s1 = func_00257100(0);
    func_00288d80(*(u32*)(&D_0035f01c), s3, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, s1, func_00257100(1));
    func_00288e08(*(u32*)(&D_0035f01c), s3, 0, 0xffffffff);
    v0_0 = func_002891b8(*(u32*)(&D_0035f01c), s3);
    func_00139620(v0_0);
    *(u32*)((v0_0 + 0x198)) = func_00192048(0x8455);
    func_001395f8(v0_0);
    s2_1 = (*(u32*)(&D_0035f3d4) + 1);
    if (((s32)(func_00285d58(0xffffffff)) != 0)) {
        s0_2 = ((loc_4 + (s3 * 0x198)) + 0x87d0);
        func_0028d8c0((loc_4 + (s3 * 0x198)) + 0x87d0, s2_1, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), *(u32*)(&D_0037327c), 0xffffffff, 0);
        func_0028dcc0(s0_2, v0_0);
        s2_3 = func_0023aa18(v0_0 + 0x18);
        func_00138c68(s0_2, s2_3, func_0023aa38(v0_0 + 0x18));
    }
    *(u32*)(&D_0035f3d4) = loc_0;
    v0_4 = func_00257070(1);
    if (((s32)(a0) >= 0)) {
        if ((a0 != v0_4)) {
            func_00257050(2, 0, 0);
            func_00257050(1, a0, 0);
            v0_4 = a0;
        }
    }
    func_002891f0(*(u32*)(&D_0035f01c), v0_4, 1, 0, 2);
    s0_5 = func_0028af88(*(u32*)(&D_0035f01c));
    s0_6 = (func_00258068(1) ? (s0_5 | 0x100) : s0_5);
    func_0028af18(*(u32*)(&D_0035f01c), func_00258068(1) ? (s0_5 | 0x100) : s0_5);
    func_0025f7d8();
    func_00261b30();
    func_00261d48();
    func_00262af8();
    if (((s32)(func_00258068(1)) != 0)) {
        func_00256cc0(0xb619, 0xffffffff, 0xffffffff);
    }
    return func_00287cc0(0);
}
