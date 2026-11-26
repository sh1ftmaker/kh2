// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e360 asm("D_01d9e360");
extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" f32 func_001ef398(u32) asm("func_001ef398");
extern "C" u32 func_001ef370(u32, f32) asm("func_001ef370");

// 0x001ef440 func_001ef440
void func_001ef440(u32 a0, u32 a1, u32 a2) asm("func_001ef440");
void func_001ef440(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 s0_0;
    u32 s3;
    u32 s0_1;
    if (((s32)(*(u32*)(&D_01d9ea9c)) == 0)) {
        if (((s32)((*(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8)) & ((u64)(0xff) | 0xff00))) == 0)) {
            if ((*(u32*)(a1) == *(u32*)((a0 + 0xc)))) {
                s0 = *(u32*)(*(u32*)((a2 + 0xc)));
                s0_0 = (a0 + s0);
                *(f32*)((s0_0 + 0xa0)) = func_001ef398(*(u8*)((a1 + 0x10)));
                s3 = (s0_0 + 0xa0);
                *(f32*)((s3 + 4)) = func_001ef398(*(u8*)((a1 + 0x10)));
                *(f32*)((s3 + 8)) = func_001ef398(*(u8*)((a1 + 0x10)));
                *(f32*)((s3 + 0xc)) = func_001ef398(*(u8*)((a1 + 0x10)));
                s0_1 = (*(u32*)((a1 + 4)) != 0xffffffff) ? ((a0 + *(u32*)((a1 + 4))) + 0xa0) : (u32)&D_01d9e360;
                *(u16*)(s0_1) = (*(u16*)(s0_1) + func_001ef370(*(s16*)((a1 + 8)), *(f32*)(s3)));
                *(u16*)((s0_1 + 2)) = (*(u16*)((s0_1 + 2)) + func_001ef370(*(s16*)((a1 + 0xa)), *(f32*)((s3 + 4))));
                *(u16*)((s0_1 + 4)) = (*(u16*)((s0_1 + 4)) + func_001ef370(*(s16*)((a1 + 0xc)), *(f32*)((s3 + 8))));
                *(u16*)((s0_1 + 6)) = (*(u16*)((s0_1 + 6)) + func_001ef370(*(s16*)((a1 + 0xe)), *(f32*)((s3 + 0xc))));
            }
        }
    }
    return;
}
