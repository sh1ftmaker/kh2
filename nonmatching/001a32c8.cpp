// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_0032e020 asm("D_0032e020");
extern "C" u32 func_001815d0(u32) asm("func_001815d0");
extern "C" u32 func_00181670() asm("func_00181670");
extern "C" u32 func_001a3168(u32, u32, u32) asm("func_001a3168");
extern "C" u32 func_001a38b8(u32) asm("func_001a38b8");
extern "C" u32 func_001a39c8(u32) asm("func_001a39c8");
extern "C" u32 func_001a80c8(u32, u32) asm("func_001a80c8");

// 0x001a32c8 YS::ITEM::GetBackyard(int, int)
u32 lift_001a32c8(u32 a0, u32 a1) asm("_ZN2YS4ITEM11GetBackyardEii");
u32 lift_001a32c8(u32 a0, u32 a1) {
    u32 s0;
    u32 t7;
    u32 v0;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t6;
    u32 s3;
    u32 v0_3;
    u32 t6_4;
    u32 t5;
    u32 t6_5;
    u32 t4;
    u32 t7_6;
    s0 = func_001a80c8(a0, a1);
    t7 = *(u8*)((s0 + 3));
    v0 = func_001a3168(a0, 0x64, a1);
    if (((s32)((t7 & 1)) != 0)) {
        t7_0 = *(u16*)((s0 + 0x12));
        t7_1 = *(u32*)((((t7_0 >> 5) << 2) + ((u32)&D_0032e020 + 0x11d0)));
        *(u32*)((((t7_0 >> 5) << 2) + ((u32)&D_0032e020 + 0x11d0))) = (t7_1 | (1 << (t7_0 & 0x1f)));
        s3 = 0;
    } else {
        t7_2 = *(u16*)((s0 + 0x12));
        t6 = *(u8*)(((t7_2 + (u32)&D_0032e020) + 0x1090));
        *(u8*)(((t7_2 + (u32)&D_0032e020) + 0x1090)) = (t6 + a1);
        s3 = (t6 & 0xff);
    }
    if ((a0 == 0x20)) {
        v0_3 = func_001815d0(0xffffffff);
        v0 = v0_3;
    }
    t6_4 = *(u8*)((s0 + 2));
    if ((t6_4 != 0x12)) {
        if (((s32)(t6_4) < (s32)(0x13))) {
            if ((t6_4 != 0)) {
                return v0;
            } else {
                return func_001a39c8(a0);
            }
        } else {
            if ((t6_4 == 0x15)) {
                return func_001a38b8(s0);
            } else {
                return v0;
            }
        }
    } else {
        if ((s3 == 0)) {
            t5 = 0;
            t6_5 = (u32)&D_0032bb30;
            t4 = (u32)&D_0032bb30;
            do {
                t7_6 = *(u16*)(((t6_5 + (t5 * 2)) + 0x36f8));
                if (((s32)(t7_6) == 0)) {
                    *(u16*)((((t4 + (t5 * 2)) + 0x36f0) + 8)) = *(u16*)((s0 + 0x10));
                    break;
                }
                t5 = (t5 + 1);
            } while (((s32)(((s32)(t5) < (s32)(3))) != 0));
        }
        return func_00181670();
    }
}
