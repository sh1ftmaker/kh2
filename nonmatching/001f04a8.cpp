// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 D_01d9eab4 asm("D_01d9eab4");
extern "C" f32 func_002f8b00(f32, f32) asm("func_002f8b00");
extern "C" void func_001f0430(u32, u32, u32) asm("func_001f0430");

// 0x001f04a8 func_001f04a8
// minilink-rodata 0x0037012c   (float literals live here in the original)
void func_001f04a8(u32 a0, u32 a1, u32 a2) asm("func_001f04a8");
void func_001f04a8(u32 a0, u32 a1, u32 a2) {
    u32 t7;
    u32 t6;
    u32 t6_0;
    u32 t7_1;
    u32 t7_2;
    u32 t6_3;
    f32 f1;
    f32 f2;
    f32 f3;
    f32 f4;
    u32 t6_4;
    f32 f0;
    f32 f1_5;
    f32 f0_6;
    f32 f1_7;
    t7 = *(u32*)((*(u32*)((a2 + 0xc)) + 8));
    t6 = *(u32*)(((a0 + t7) + 0xa0));
    if (((s32)(t6) == 0)) {
        func_001f0430(a1, (a0 + t7) + 0xa0, a2);
    }
    t6_0 = *(u32*)(&D_01d9ea9c);
    if ((t6_0 == 0)) {
        t7_1 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        if (((t7_1 & ((u64)(0xff) | 0xff00)) == 0)) {
            t7_2 = *(u32*)(a1);
            t6_3 = *(u32*)((a0 + 0xc));
            if ((t7_2 == t6_3)) {
                f1 = *(f32*)((((a0 + t7) + 0xa0) + 8));
                *(f32*)((((a0 + t7) + 0xa0) + 8)) = (f1 + *(f32*)((a1 + 0xc)));
                f2 = *(f32*)((((a0 + t7) + 0xa0) + 0xc));
                *(f32*)((((a0 + t7) + 0xa0) + 0xc)) = (f2 + *(f32*)((a1 + 0x10)));
                f3 = *(f32*)((((a0 + t7) + 0xa0) + 0x14));
                *(f32*)((((a0 + t7) + 0xa0) + 0x14)) = (f3 + *(f32*)((a1 + 0x18)));
                f4 = *(f32*)((((a0 + t7) + 0xa0) + 0x18));
                *(f32*)((((a0 + t7) + 0xa0) + 0x18)) = (f4 + *(f32*)((a1 + 0x1c)));
            }
            t6_4 = *(u32*)(&D_01d9eab4);
            if ((t6_4 == 0)) {
                f0 = *(f32*)((((a0 + t7) + 0xa0) + 8));
                f1_5 = *(f32*)((((a0 + t7) + 0xa0) + 4));
                *(f32*)((((a0 + t7) + 0xa0) + 8)) = (f0 + *(f32*)((((a0 + t7) + 0xa0) + 0xc)));
                *(f32*)((((a0 + t7) + 0xa0) + 4)) = (f1_5 + (f0 + *(f32*)((((a0 + t7) + 0xa0) + 0xc))));
                f0_6 = *(f32*)((((a0 + t7) + 0xa0) + 0x14));
                f1_7 = *(f32*)((((a0 + t7) + 0xa0) + 0x10));
                *(f32*)((((a0 + t7) + 0xa0) + 0x14)) = (f0_6 + *(f32*)((((a0 + t7) + 0xa0) + 0x18)));
                *(f32*)((((a0 + t7) + 0xa0) + 0x10)) = (f1_7 + (f0_6 + *(f32*)((((a0 + t7) + 0xa0) + 0x18))));
                *(f32*)((((a0 + t7) + 0xa0) + 4)) = func_002f8b00(f1_5 + (f0 + *(f32*)((((a0 + t7) + 0xa0) + 0xc))), 32768.0f);
                *(f32*)((((a0 + t7) + 0xa0) + 0x10)) = func_002f8b00(*(f32*)((((a0 + t7) + 0xa0) + 0x10)), 32768.0f);
            }
        }
    }
    return;
}
