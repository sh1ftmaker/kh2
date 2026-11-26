// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f210 asm("D_0035f210");
extern "C" u32 D_0035f3d4 asm("D_0035f3d4");
extern "C" u32 D_0035f5d4 asm("D_0035f5d4");
extern "C" u32 D_0035f5dc asm("D_0035f5dc");
extern "C" u32 D_0035f5e0 asm("D_0035f5e0");
extern "C" u32 D_00374b60 asm("D_00374b60");
extern "C" u32 func_00139d78(u32) asm("func_00139d78");
extern "C" u32 func_0023c4b8(u32, u32) asm("func_0023c4b8");
extern "C" u32 func_0023f1b0(u32) asm("func_0023f1b0");
extern "C" u32 func_0023f988(u32, u32) asm("func_0023f988");
extern "C" u32 func_002766d0() asm("func_002766d0");
extern "C" u32 func_0028dcc0(u32, u32) asm("func_0028dcc0");
extern "C" u32 func_002a1bc0(u32) asm("func_002a1bc0");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_00139620(u32) asm("func_00139620");
extern "C" void func_002362b0(u32, u32) asm("func_002362b0");

// 0x002a1d38 Tz::JmDiagram::UpdateGra()
u32 lift_002a1d38() asm("_ZN2Tz9JmDiagram9UpdateGraEv");
u32 lift_002a1d38() {
    u8 frame[16];
    u32 v0;
    u32 t6;
    u32 v0_0;
    u32 s6;
    u32 v0_1;
    u32 t5;
    u32 t7;
    u32 t6_2;
    u32 fp;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s7;
    u32 t7_3;
    u32 s0;
    u32 t7_4;
    u32 t5_5;
    u32 t7_6;
    u32 s3_7;
    u32 v0_8;
    u32 sp;
    u32 sp_9;
    u32 sp_10;
    v0 = func_002766d0();
    t6 = *(u8*)(&D_0035f5e0);
    if (((s32)(t6) != 0)) {
        v0_0 = func_00139d78(v0 + 0x4398);
        if ((v0_0 == 0)) {
            s6 = (*(u32*)(&D_0035f3d4) + 3);
            v0_1 = func_0023c4b8(func_0023f1b0(*(u32*)(&D_0035f210)), 0);
            t5 = *(u32*)(&D_0035f5d4);
            t7 = *(s8*)((t5 + 2));
            t6_2 = *(s8*)(t5);
            if (((s32)(t6_2) > 0)) {
                fp = 1;
                s2 = (v0 + 0xdca0);
                s3 = 0;
                s4 = ((((u32)((t7 ^ 0x10)) < (u32)(1)) * 6) + (u32)&D_00374b60);
                s7 = 1;
                do {
                    t7_3 = (s3 << 3);
                    func_002362b0(s2, func_0023f988(*(u32*)(&D_0035f5dc), *(s8*)((func_002a1bc0(*(u16*)(((t7_3 + t5) + 0x50))) + 1))));
                    *(u8*)((s2 + 0x190)) = fp;
                    s0 = (v0 + 0x4398);
                    func_001386e0(s0, s6, v0_1, s2, *(s16*)(s4), 0);
                    *(u32*)((v0 + 0x4520)) = *(s16*)((s4 + 4));
                    func_00139620(s0);
                    *(u8*)((v0 + 0x452d)) = s7;
                    t7_4 = *(u32*)((v0 + 0x4468));
                    *(u32*)((v0 + 0x4468)) = (t7_4 | 8);
                    t5_5 = *(u32*)(&D_0035f5d4);
                    t7_6 = *(s8*)(t5_5);
                    s3_7 = (s3 + 1);
                    v0_8 = func_0028dcc0(s0, v0 + 0x1098);
                    v0 = (v0 + 0x198);
                    s2 = (s2 + 0x1a0);
                    s3 = s3_7;
                    t5 = t5_5;
                    v0_1 = v0_8;
                } while (((s32)(((s32)(s3_7) < (s32)(t7_6))) != 0));
            } else {
                sp = (u32)frame;
            }
            sp_9 = sp;
            v0_0 = v0_1;
        } else {
            sp_9 = (u32)frame;
        }
        sp_10 = sp_9;
        v0 = v0_0;
    } else {
        sp_10 = (u32)frame;
    }
    return v0;
}
