// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035ee5c asm("D_0035ee5c");
extern "C" u32 D_0035ee60 asm("D_0035ee60");
extern "C" u32 D_0035ee80 asm("D_0035ee80");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_003725c0 asm("D_003725c0");
extern "C" u32 func_0023aa78(u32) asm("func_0023aa78");
extern "C" u32 func_00287cc0(u32) asm("func_00287cc0");
extern "C" u32 func_002891b8(u32, u32) asm("func_002891b8");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_00288d80(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_00288d80");
extern "C" void func_00288e08(u32, u32, u32, u32) asm("func_00288e08");
extern "C" void func_002891f0(u32, u32, u32, u32, u32) asm("func_002891f0");
extern "C" void func_0028af28(u32, u32) asm("func_0028af28");
extern "C" void func_0028d8c0(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_0028d8c0");
extern "C" void func_0028dcc0(u32, u32) asm("func_0028dcc0");

// 0x002515a0 func_002515a0
u32 func_002515a0() asm("_ZN2Tz4CANA8SetupSelEv");
u32 func_002515a0() {
    u8 frame[16];
    u32 t7;
    u32 s1;
    u32 t6;
    u32 t5;
    u32 t6_0;
    u32 s4;
    u32 s7;
    u32 s6;
    u32 s5;
    u32 s3;
    u32 s2;
    u32 s1_1;
    u32 fp;
    u32 v0;
    t7 = (0 << 3);
    s1 = 0;
    do {
        t7 = (t7 + (u32)frame);
        t6 = 3;
        t5 = ((u32)frame + 8);
        do {
            if ((s1 == 1)) {
                *(u16*)(t5) = 0xb;
            } else {
                *(u16*)(t7) = 0xa;
            }
            t7 = (t7 + 2);
            t6 = (t6 + -1);
            t5 = (t5 + 2);
        } while (((s32)(t6) >= 0));
        s1 = (s1 + 1);
        t7 = ((s32)(s1) < (s32)(2));
        t7 = (s1 << 3);
    } while (((s32)(t7) != 0));
    func_0028d8c0(*(u32*)(&D_0035ee80), 0x753d, 2, 2, *(u32*)(&D_0035ee60), 7, 8, 0);
    *(u8*)((*(u32*)(&D_0035ee80) + 0x195)) = 1;
    t6_0 = (*(u32*)(&D_0035ee80) + 0x18);
    *(u32*)((t6_0 + 0xb8)) = (*(u32*)((t6_0 + 0xb8)) | 8);
    s4 = *(u32*)(&D_0035f3d4);
    *(u32*)(&D_0035f3d4) = 0x753e;
    s7 = 0x360000;
    s6 = ((u32)frame + 8);
    s5 = 2;
    s3 = (u32)&D_003725c0;
    s2 = 0x360000;
    s1_1 = 0;
    fp = 0x360000;
    do {
        func_00288d80(*(u32*)((s2 + -0x11a4)), s1_1, 2, 2, *(u32*)((fp + -0x11a0)), *(u32*)(s3), (u32)frame, s6);
        s3 = (s3 + 4);
        v0 = func_002891b8(*(u32*)((s2 + -0x11a4)), s1_1);
        func_00288e08(*(u32*)((s2 + -0x11a4)), s1_1, 0, func_0023aa78(v0 + 0x18));
        s1_1 = (s1_1 + 1);
        func_00139620(v0);
        *(u32*)((v0 + 0x1b0)) = s5;
        func_0028dcc0(v0, *(u32*)((s7 + -0x1180)));
    } while (((s32)(s1_1) < (s32)(2)));
    *(u32*)(&D_0035f3d4) = s4;
    func_002891f0(*(u32*)(&D_0035ee5c), 1, 1, 0, 2);
    func_0028af28(*(u32*)(&D_0035ee5c), 0x40);
    return func_00287cc0(0);
}
