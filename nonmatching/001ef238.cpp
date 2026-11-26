// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_001ef1a0(u32) asm("func_001ef1a0");
extern "C" u32 func_001ef170(u32, f32) asm("func_001ef170");

// 0x001ef238 func_001ef238
u32 func_001ef238(u32 a0, u32 a1, u32 a2) asm("func_001ef238");
u32 func_001ef238(u32 a0, u32 a1, u32 a2) {
    u32 t6;
    u32 t7;
    u32 t6_0;
    u32 t7_1;
    u32 s0;
    u32 t6_2;
    u32 s0_3;
    u32 v0;
    u32 v0_4;
    u32 v0_5;
    t6 = *(u32*)(&D_01d9ea9c);
    if (((s32)(t6) == 0)) {
        t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        if (((s32)((t7 & ((u64)(0xff) | 0xff00))) == 0)) {
            t6_0 = *(u32*)(a1);
            t7_1 = *(u32*)((a0 + 0xc));
            if ((t6_0 == t7_1)) {
                s0 = *(u32*)(*(u32*)((a2 + 0xc)));
                *(f32*)(((a0 + s0) + 0xa0)) = func_001ef1a0(*(u8*)((a1 + 0x10)));
                *(f32*)((((a0 + s0) + 0xa0) + 4)) = func_001ef1a0(*(u8*)((a1 + 0x10)));
                *(f32*)((((a0 + s0) + 0xa0) + 8)) = func_001ef1a0(*(u8*)((a1 + 0x10)));
                *(f32*)((((a0 + s0) + 0xa0) + 0xc)) = func_001ef1a0(*(u8*)((a1 + 0x10)));
                t6_2 = *(u32*)((a1 + 4));
                if ((t6_2 != 0xffffffff)) {
                    s0_3 = ((a0 + t6_2) + 0xa0);
                } else {
                    s0_3 = (u32)&D_01d9e360;
                }
                *(u16*)(s0_3) = (func_001ef170(*(s16*)((a1 + 8)), *(f32*)(((a0 + s0) + 0xa0))) + *(u16*)(s0_3));
                *(u16*)((s0_3 + 2)) = (func_001ef170(*(s16*)((a1 + 0xa)), *(f32*)((((a0 + s0) + 0xa0) + 4))) + *(u16*)((s0_3 + 2)));
                *(u16*)((s0_3 + 4)) = (func_001ef170(*(s16*)((a1 + 0xc)), *(f32*)((((a0 + s0) + 0xa0) + 8))) + *(u16*)((s0_3 + 4)));
                *(u16*)((s0_3 + 6)) = (func_001ef170(*(s16*)((a1 + 0xe)), *(f32*)((((a0 + s0) + 0xa0) + 0xc))) + *(u16*)((s0_3 + 6)));
                v0 = (func_001ef170(*(s16*)((a1 + 0xe)), *(f32*)((((a0 + s0) + 0xa0) + 0xc))) + *(u16*)((s0_3 + 6)));
            }
            v0_4 = v0;
        }
        v0_5 = v0_4;
    }
    return v0_5;
}
