// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f200 asm("D_0035f200");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f598 asm("D_0035f598");
extern "C" u32 D_0035f5a0 asm("D_0035f5a0");
extern "C" f32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00276348() asm("func_00276348");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" u32 func_0028af88(u32) asm("func_0028af88");
extern "C" u32 func_002983d8(u32) asm("func_002983d8");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276690(u32) asm("func_00276690");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e88(u32) asm("func_00288e88");
extern "C" void func_0028af18(u32, u32) asm("func_0028af18");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_00294348(u32) asm("func_00294348");
extern "C" void func_00298e48() asm("func_00298e48");
extern "C" void func_00298fe8(u32) asm("func_00298fe8");
extern "C" void func_00299260() asm("func_00299260");

// 0x002986e0 func_002986e0
u32 func_002986e0() asm("_ZN2Tz7JmAlbum10PhotoSetupEv");
u32 func_002986e0() {
    u8 frame[48];
    u32 s7;
    f32 fp;
    u32 s0;
    u32 t7;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7_0;
    u32 t7_1;
    u32 s0_2;
    u32 s0_3;
    u32 s1;
    u32 s0_4;
    u32 s6;
    u32 t6_5;
    u32 t7_6;
    u32 s0_7;
    u32 sp;
    s7 = func_00276348();
    fp = func_002766d0();
    func_00288e88(*(u32*)(&D_0035f200));
    func_00276690(1);
    func_00298fe8(*(s8*)(&D_0035f5a0));
    s0 = 0;
    t7 = (0 << 3);
    do {
        t4 = ((u32)frame + 0x10);
        t5 = 0x57;
        t6 = 3;
        t7_0 = (t7 + t4);
        do {
            t7_1 = (t7_0 + ((t6 - 3) * -2));
            *(u16*)(t7_1) = t5;
            t6 = (t6 + -1);
        } while (((s32)(t6) >= 0));
        s0_2 = (s0 + 1);
        s0 = s0_2;
        t7 = (s0_2 << 3);
    } while (((s32)(t7) != 0));
    *(u32*)(((u32)frame + 0x20)) = 0x60000000;
    s0_3 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(fp, s0_3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x56, 0xffffffff, 0);
    *(u32*)(((u32)frame + 0x20)) = (*(u32*)(((u32)frame + 0x20)) | 8);
    func_00139620(fp);
    func_0028dcc0(fp, s7);
    *(u32*)((u32)frame) = 0;
    s1 = (fp + 0xd30);
    func_0028d980(s1, s0_3, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x58, 0xffffffff, 0xffffffff);
    func_00139620(s1);
    func_0028dcc0(s1, s7);
    *(u32*)((s1 + 0x1ac)) = 3;
    *(u32*)((s1 + 0x1a4)) = *(u32*)(((u32)frame + 0x20));
    func_001395f8(s1);
    func_00288d80(*(u32*)(&D_0035f200), 0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0xffffffff, (u32)frame + 0x10, (u32)frame + 0x18);
    func_00139620(func_002891b8(*(u32*)(&D_0035f200), 0));
    func_0028dcc0(func_002891b8(*(u32*)(&D_0035f200), 0), fp);
    *(u32*)((func_002891b8(*(u32*)(&D_0035f200), 0) + 0x1ac)) = 3;
    *(u32*)((func_002891b8(*(u32*)(&D_0035f200), 0) + 0x1a4)) = *(u32*)(((u32)frame + 0x20));
    func_001395f8(func_002891b8(*(u32*)(&D_0035f200), 0));
    if (((s32)(*(u32*)(*(u32*)(&D_0035f598))) > 0)) {
        s0_4 = 0;
        s6 = 0x360000;
        t6_5 = *(u32*)(&D_0035f598);
        t7_6 = (0 << 1);
        do {
            s0_7 = (s0_4 + 1);
            func_00294348(func_002983d8(*(s16*)(((t7_6 + t6_5) + 4))));
            s0_4 = s0_7;
            t6_5 = *(u32*)((s6 + -0xa68));
            t7_6 = (s0_7 << 1);
        } while (((s32)(t7_6) != 0));
    } else {
        sp = (u32)frame;
    }
    func_0028af18(*(u32*)(&D_0035f200), func_0028af88(*(u32*)(&D_0035f200)) | 0xc000);
    func_0028af28(*(u32*)(&D_0035f200), 0x10);
    func_00298e48();
    func_00299260();
    return func_00287cc0(0);
}
