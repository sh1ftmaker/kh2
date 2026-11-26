// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f148 asm("D_0035f148");
extern "C" u32 D_0035f14c asm("D_0035f14c");
extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f5d4 asm("D_0035f5d4");
extern "C" u32 D_0035f5d8 asm("D_0035f5d8");
extern "C" u32 D_00374b70 asm("D_00374b70");
extern "C" f32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_00276348(u32) asm("func_00276348");
extern "C" u32 func_00287bc0() asm("func_00287bc0");
extern "C" u32 func_0028f930(u32) asm("func_0028f930");
extern "C" u32 func_002a1bc0(u32, u32) asm("func_002a1bc0");
extern "C" u32 func_002a1f40() asm("func_002a1f40");
extern "C" u32 func_002a9e98(u32) asm("func_002a9e98");
extern "C" u32 func_002a9f50(u32) asm("func_002a9f50");
extern "C" void func_00138c68(u32, u32, u32) asm("func_00138c68");
extern "C" void func_001395f8(u32) asm("func_001395f8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00276e78() asm("func_00276e78");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028d980(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d980");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" void func_0028f4d8(u32, u32, u32) asm("func_0028f4d8");
extern "C" void func_002a17e8() asm("func_002a17e8");
extern "C" void func_002a18d0(u32, u32) asm("func_002a18d0");
extern "C" void func_002a1cd8() asm("func_002a1cd8");

// 0x002a0908 func_002a0908
u32 func_002a0908(u32 a0) asm("_ZN2Tz9JmDiagram5SetupEi");
u32 func_002a0908(u32 a0) {
    u32 loc_10;
    f32 fp;
    u32 s1;
    u32 s6;
    u32 loc_0;
    u32 loc_14;
    u32 loc_1c;
    u32 loc_18;
    u32 t7;
    u32 s7;
    u32 s4;
    u32 s6_0;
    u32 s2;
    u32 s0;
    u32 s1_1;
    u32 s2_2;
    u32 s2_3;
    u32 s2_4;
    u32 s2_5;
    loc_10 = func_00276348(a0);
    fp = func_002766d0();
    func_002a18d0((u32)(0) < (u32)((func_00287bc0() ^ 6)), 0xffffffff);
    func_002a1cd8();
    if (((s32)(func_0028f930(0)) == 0)) {
        func_0028f4d8(0, 0xffffffff, 0);
    }
    *(u8*)((*(u32*)(&D_0035f5d4) + 1)) = a0;
    if (((s32)(a0) < 0)) {
        *(u16*)((*(u32*)(&D_0035f5d4) + 0x44)) = 0;
        *(u16*)((*(u32*)(&D_0035f5d4) + 0x46)) = 0;
    }
    s1 = *(u32*)(&D_0035f3d4);
    s6 = (*(u32*)(&D_0035f3d4) + -1);
    func_00276e78();
    func_0028d8c0(fp, s6, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x53, 0xffffffff, 0);
    func_00139620(fp);
    func_0028dcc0(fp, loc_10);
    func_0028d8c0(*(u32*)(&D_0035f5d8), s1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x54, 0xffffffff, 0);
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x48)) = 0xfffffc19;
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x4c)) = 0xfffffc19;
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x4a)) = 0xfffffc19;
    *(u16*)((*(u32*)(&D_0035f5d4) + 0x4e)) = 0xfffffc19;
    loc_0 = 0;
    func_0028d980(*(u32*)(&D_0035f5d8) + 0x4c8, s1, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), 0x55, 0xffffffff, 0xffffffff);
    func_0028dcc0(*(u32*)(&D_0035f5d8) + 0x4c8, loc_10);
    func_00139620(*(u32*)(&D_0035f5d8) + 0x4c8);
    *(u32*)((*(u32*)(&D_0035f5d8) + 0x678)) = 2;
    *(u32*)((*(u32*)(&D_0035f5d8) + 0x674)) = 3;
    *(u32*)((*(u32*)(&D_0035f5d8) + 0x66c)) = 0x60000008;
    func_001395f8(*(u32*)(&D_0035f5d8) + 0x4c8);
    loc_14 = ((u32)((*(s8*)((*(u32*)(&D_0035f5d4) + 2)) ^ 0x10)) < (u32)(1));
    if (((s32)(*(s8*)(*(u32*)(&D_0035f5d4))) > 0)) {
        loc_18 = (loc_14 * 6);
        loc_1c = (*(u32*)(&D_0035f3d4) + 6);
        t7 = *(u32*)(&D_0035f5d4);
        s7 = 0;
        s4 = fp;
        do {
            t7 = ((s7 << 3) + t7);
            s6_0 = (*(u32*)(&D_0035f3d4) + 2);
            s2 = *(s16*)((((loc_18 + *(s8*)((func_002a1bc0(*(u16*)((t7 + 0x50)), *(u32*)(&D_0035f3d4) + 6) + 2))) << 1) + (u32)&D_00374b70));
            func_0028d8c0(s4 + 0x1098, s6_0, *(u32*)(&D_0035f14c), *(u32*)(&D_0035f148), *(u32*)(&D_0035f210), *(s16*)((((loc_18 + *(s8*)((func_002a1bc0(*(u16*)((t7 + 0x50)), *(u32*)(&D_0035f3d4) + 6) + 2))) << 1) + (u32)&D_00374b70)), 0xffffffff, 0);
            func_0028dcc0(s4 + 0x1098, fp);
            func_00138c68(s4 + 0x1098, *(s16*)((((s7 << 3) + *(u32*)(&D_0035f5d4)) + 0x52)), *(s16*)((((s7 << 3) + *(u32*)(&D_0035f5d4)) + 0x54)));
            t7 = 0xa998;
            s0 = *(u16*)((((s7 << 3) + *(u32*)(&D_0035f5d4)) + 0x50));
            s1_1 = ((s7 << 3) + *(u32*)(&D_0035f5d4));
            if (((s32)(func_002a9e98(*(u16*)((((s7 << 3) + *(u32*)(&D_0035f5d4)) + 0x50)))) != 0)) {
                if (((s32)(func_002a9f50(s0)) != 0)) {
                    t7 = 0x370000;
                    if (((s32)(loc_14) != 0)) {
                        s2_2 = *(u32*)((t7 + 0x4b58));
                    } else {
                        t7 = 0x370000;
                        s2_2 = *(u32*)((t7 + 0x4b50));
                    }
                    s2_4 = s2_2;
                } else {
                    t7 = 0x370000;
                    if (((s32)(loc_14) != 0)) {
                        s2_3 = *(u32*)((t7 + 0x4b54));
                    } else {
                        t7 = 0x370000;
                        s2_3 = *(u32*)((t7 + 0x4b4c));
                    }
                    s2_4 = s2_3;
                }
                s2_5 = s2_4;
            } else {
                s2_5 = 2;
            }
            t7 = 0x360000;
            t7 = 0x360000;
            s4 = (s4 + 0x198);
            func_0028d8c0(s4 + t7, loc_1c, *(u32*)((t7 + -0xeb4)), *(u32*)(&D_0035f148), *(u32*)((t7 + -0xdf0)), s2_5, 0xffffffff, 0);
            s7 = (s7 + 1);
            func_0028dcc0(s4 + t7, (fp + (s7 * 0x198)) + 0x1098);
            *(u32*)((((s4 + t7) + 0x18) + 0xb8)) = (*(u32*)((((s4 + t7) + 0x18) + 0xb8)) | 8);
            t7 = *(u32*)(&D_0035f5d4);
        } while (((s32)(t7) != 0));
    }
    func_002a17e8();
    return func_002a1f40();
}
