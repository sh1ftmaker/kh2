// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_001eed88(u32) asm("func_001eed88");
extern "C" u32 func_001eed60(u32, f32) asm("func_001eed60");

// 0x001eee30 func_001eee30
void func_001eee30(u32 a0, u32 a1, u32 a2) asm("func_001eee30");
void func_001eee30(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t6_0;
    u32 t7_1;
    u32 s0;
    u32 s0_2;
    u32 s3;
    u32 t6_3;
    u32 s0_4;
    t6 = *(u32*)(&D_01d9ea9c);
    if (((s32)(t6) == 0)) {
        t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        if (((s32)((t7 & ((u64)(0xff) | 0xff00))) == 0)) {
            t6_0 = *(u32*)(a1);
            t7_1 = *(u32*)((a0 + 0xc));
            if ((t6_0 == t7_1)) {
                s0 = *(u32*)(*(u32*)((a2 + 0xc)));
                s0_2 = (a0 + s0);
                *(f32*)((s0_2 + 0xa0)) = func_001eed88(*(u8*)((a1 + 0xc)));
                s3 = (s0_2 + 0xa0);
                *(f32*)((s3 + 4)) = func_001eed88(*(u8*)((a1 + 0xc)));
                *(f32*)((s3 + 8)) = func_001eed88(*(u8*)((a1 + 0xc)));
                *(f32*)((s3 + 0xc)) = func_001eed88(*(u8*)((a1 + 0xc)));
                t6_3 = *(u32*)((a1 + 4));
                if ((t6_3 != 0xffffffff)) {
                    s0_4 = ((a0 + t6_3) + 0xa0);
                } else {
                    s0_4 = (u32)&D_01d9e360;
                }
                *(u8*)(s0_4) = (func_001eed60(*(s8*)((a1 + 8)), *(f32*)(s3)) + *(u8*)(s0_4));
                *(u8*)((s0_4 + 1)) = (func_001eed60(*(s8*)((a1 + 9)), *(f32*)((s3 + 4))) + *(u8*)((s0_4 + 1)));
                *(u8*)((s0_4 + 2)) = (func_001eed60(*(s8*)((a1 + 0xa)), *(f32*)((s3 + 8))) + *(u8*)((s0_4 + 2)));
                *(u8*)((s0_4 + 3)) = (func_001eed60(*(s8*)((a1 + 0xb)), *(f32*)((s3 + 0xc))) + *(u8*)((s0_4 + 3)));
            }
        }
    }
    return;
}
