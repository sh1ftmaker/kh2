// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f100 asm("D_0035f100");
extern "C" u32 D_0035f104 asm("D_0035f104");
extern "C" u32 D_0035f10c asm("D_0035f10c");
extern "C" u32 D_0035f114 asm("D_0035f114");
extern "C" u32 D_0035f118 asm("D_0035f118");
extern "C" u32 D_0035f11c asm("D_0035f11c");
extern "C" u32 D_0035f120 asm("D_0035f120");
extern "C" u32 func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" u32 func_0028af28(u32, u32) asm("func_0028af28");
extern "C" u32 func_0028c198(u32, u32, u32, u32, u32, u32) asm("func_0028c198");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_0026e140(u32, u32, u32) asm("func_0026e140");
extern "C" void func_00288ce0(u32, u32, u32, u32, u32) asm("func_00288ce0");

// 0x0026df30 Tz::Selector::SetupSelector()
u32 lift_0026df30() asm("_ZN2Tz8Selector13SetupSelectorEv");
u32 lift_0026df30() {
    u8 frame[32];
    u32 t6;
    u32 t5;
    u32 s1;
    u32 t7;
    u32 t6_0;
    u32 s3;
    u32 s1_1;
    u32 s4;
    u32 v0;
    u32 sp;
    u32 s3_2;
    u32 sp_3;
    u32 v0_4;
    u32 v0_5;
    u32 v0_6;
    if (((s32)(*(s16*)((*(u32*)(&D_0035f118) + 0x16))) >= 0)) {
        func_0026e140(0, *(s16*)((*(u32*)(&D_0035f118) + 0x16)), 0xffffffff);
    }
    if (((s32)(*(u32*)((*(u32*)(&D_0035f118) + 0x18))) != 0)) {
        func_0026e140(1, 0xe, 0xffffffff);
        func_00139620(*(u32*)(&D_0035f104) + 0x1b4);
        *(u32*)((*(u32*)(&D_0035f104) + 0x364)) = 3;
        *(u32*)((*(u32*)(&D_0035f104) + 0x34c)) = *(u32*)((*(u32*)(&D_0035f118) + 0x18));
    }
    if (((s32)(*(u32*)(&D_0035f11c)) != 0)) {
        if (((s32)(*(u32*)(*(u32*)(&D_0035f11c))) != 0)) {
            func_0026e140(2, 0xd, 0xffffffff);
        }
    }
    t6 = 0xb;
    t5 = 0xc;
    s1 = 3;
    t7 = (u32)frame;
    do {
        *(u16*)((t7 + ((s1 - 3) * -2))) = t5;
        *(u16*)(((t7 + ((s1 - 3) * -2)) + 0x10)) = t6;
        s1 = (s1 + -1);
    } while (((s32)(s1) >= 0));
    if (((s32)(*(u8*)((*(u32*)(&D_0035f118) + 2))) != 0)) {
        t6_0 = *(u32*)(&D_0035f118);
        s3 = 0;
        s1_1 = 0;
        do {
            s4 = *(u8*)((*(u32*)(&D_0035f118) + 2));
            if (((s32)(*(u16*)((((s1_1 << 2) + t6_0) + 4))) != 0)) {
                v0 = func_0028c198(0xc, 0, 0, *(u32*)(&D_0035f100), *(u16*)((((s1_1 << 2) + t6_0) + 6)), 0);
                func_00139620(v0);
                *(u32*)((v0 + 0x1b0)) = 2;
                func_00288ce0(*(u32*)(&D_0035f10c), v0, s3, (u32)frame, (u32)frame + 0x10);
                *(u16*)(((s3 << 1) + *(u32*)(&D_0035f114))) = *(u16*)((((s1_1 << 2) + *(u32*)(&D_0035f118)) + 4));
                s3 = (s3 + 1);
                sp = (u32)frame;
            }
            s1_1 = (s1_1 + 1);
            t6_0 = *(u32*)(&D_0035f118);
        } while (((s32)(((s32)(s1_1) < (s32)(s4))) != 0));
        s3_2 = s3;
        sp_3 = sp;
    } else {
        s3_2 = 0;
    }
    if (((s32)(s3_2) != 0)) {
        v0_4 = func_002891f0(*(u32*)(&D_0035f10c), ((s32)(*(s8*)(&D_0035f120)) < (s32)(0)) ? 0 : *(s8*)(&D_0035f120), 1, 2, 2);
        v0_6 = v0_4;
    } else {
        v0_5 = func_0028af28(*(u32*)(&D_0035f10c), 0x10);
        v0_6 = v0_5;
    }
    return v0_6;
}
