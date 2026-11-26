// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001b7f30(u32) asm("func_001b7f30");
extern "C" void func_001b7e68(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_001b7e68");
extern "C" void func_001b80d8(u32) asm("func_001b80d8");

// 0x0014b698 func_0014b698
u32 func_0014b698(u32 a0) asm("func_0014b698");
u32 func_0014b698(u32 a0) {
    u32 t5;
    u32 t4;
    u32 t6;
    u32 t1;
    u32 t0;
    u32 t3;
    u32 t2;
    u32 a3_0;
    u32 loc_0;
    u32 loc_8;
    u32 loc_4;
    u32 t4_1;
    u32 t5_2;
    u32 t7;
    t5 = *(s16*)((a0 + 0xa));
    t4 = *(s16*)((a0 + 8));
    t6 = *(u16*)((a0 + 4));
    t1 = *(u8*)((a0 + 0x11));
    t0 = *(u8*)((a0 + 0x12));
    t3 = *(u8*)((a0 + 0x10));
    t2 = *(u32*)((a0 + 0xc));
    a3_0 = *(u8*)((a0 + 0x13));
    loc_0 = 0;
    loc_4 = 0;
    loc_8 = 0;
    *(u64*)((a0 + 0xc8)) = (((t3 | (u64)(1)) | ((t0 << 0x10) | (t1 << 8))) | (a3_0 << 0x18));
    *(u64*)((a0 + 0xd8)) = ((((t4 << 4) + 0x7000) | (((t5 << 4) + 0x7300) << 0x10)) | (u64)(t2));
    *(u64*)((a0 + 0xe8)) = (((((t4 + t6) << 4) + 0x7000) | ((((t5 + *(u16*)((a0 + 6))) << 4) + 0x7300) << 0x10)) | (u64)(t2));
    func_001b7e68((u32)&loc_0, 0xd0, ((t5 << 4) + 0x7300) << 0x10, a3_0 << 0x18, (t0 << 0x10) | (t1 << 8), t1 << 8, (u64)(t2), ((t3 | (u64)(1)) | ((t0 << 0x10) | (t1 << 8))) | (a3_0 << 0x18));
    t4_1 = (u32)&loc_0;
    t5_2 = 0xc;
    do {
        *(Q16*)(*(u32*)((t4_1 + 8))) = *(Q16*)(((a0 + ((t5_2 - 0xc) * -0x10)) + 0x20));
        t7 = *(u32*)((t4_1 + 8));
        *(u32*)((t4_1 + 8)) = (t7 + 0x10);
        t5_2 = (t5_2 + -1);
    } while (((s32)(t5_2) >= 0));
    func_001b80d8((u32)&loc_0);
    return func_001b7f30((u32)&loc_0);
}
