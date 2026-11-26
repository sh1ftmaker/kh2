// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ef64 asm("D_0035ef64");
extern "C" u32 D_0035ef68 asm("D_0035ef68");
extern "C" u32 D_0035f010 asm("D_0035f010");
extern "C" u32 D_0035f01c asm("D_0035f01c");
extern "C" u32 D_0035f03c asm("D_0035f03c");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_003739ec asm("D_003739ec");
extern "C" u32 D_003739f0 asm("D_003739f0");
extern "C" u32 func_0023aa18(u32) asm("func_0023aa18");
extern "C" u32 func_0023aa38(u32) asm("func_0023aa38");
extern "C" u32 func_00257070(u32) asm("func_00257070");
extern "C" u32 func_00257100(u32) asm("func_00257100");
extern "C" u32 func_00257770() asm("func_00257770");
extern "C" u32 func_00271b78() asm("func_00271b78");
extern "C" u32 func_00281140(u32, u32) asm("func_00281140");
extern "C" u32 func_00281180(u32, u32) asm("func_00281180");
extern "C" u32 func_00286068(u32) asm("func_00286068");
extern "C" u32 func_00286160(u32) asm("func_00286160");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00271900() asm("func_00271900");
extern "C" void func_00287cc0(u32) asm("func_00287cc0");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");

// 0x0026ee78 Tz::CmCustom::SetupTop()
u32 lift_0026ee78() asm("_ZN2Tz8CmCustom8SetupTopEv");
u32 lift_0026ee78() {
    u32 s0;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s0_0;
    u32 s1;
    u32 fp;
    u32 loc_0;
    u32 v0;
    u32 s1_1;
    s0 = func_00257770();
    s2 = *(u32*)(&D_0035f3d4);
    func_0028f4d8(0, 0xffffffff, 0);
    *(u32*)(&D_0035f3d4) = 0x7541;
    s3 = 0;
    s4 = 0;
    do {
        if (((s32)(func_00281180(*(u32*)(&D_0035f010), s3)) != 0)) {
            s0_0 = func_00257100(0);
            func_00288d80(*(u32*)(&D_0035f01c), s4, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), 0xffffffff, s0_0, func_00257100(1));
            s1 = func_002891b8(*(u32*)(&D_0035f01c), s4);
            func_00288e08(*(u32*)(&D_0035f01c), s4, 0, 0xffffffff);
            s4 = (s4 + 1);
            func_00139620(s1);
            *(u32*)((s1 + 0x198)) = func_00281140(*(u32*)(&D_0035f010), s3);
            func_001395f8(s1);
            if (((s32)(s3) == 0)) {
                fp = (*(u32*)(&D_0035f3d4) + 1);
                if (((s32)(func_00286068(0xffffffff)) != 0)) {
                    v0 = func_00286160(0xffffffff);
                    loc_0 = (s1 + 0x18);
                    func_0028d8c0(s0 + 0x87d0, fp, *(u32*)(&D_0035ef68), *(u32*)(&D_0035ef64), *(u32*)(&D_0035f03c), v0 ? *(u32*)(&D_003739f0) : *(u32*)(&D_003739ec), 0xffffffff, 0);
                    func_0028dcc0(s0 + 0x87d0, s1);
                    s1_1 = func_0023aa18(loc_0);
                    func_00138c68(s0 + 0x87d0, s1_1, func_0023aa38(loc_0));
                }
            }
            s0 = (s0 + 0x198);
        }
        s3 = (s3 + 1);
    } while (((s32)(s3) < (s32)(4)));
    func_002891f0(*(u32*)(&D_0035f01c), func_00257070(0x19), 1, 0, 2);
    func_00287cc0(0);
    *(u32*)(&D_0035f3d4) = s2;
    func_00271900();
    return func_00271b78();
}
