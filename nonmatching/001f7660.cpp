// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_01d9e6e0 asm("D_01d9e6e0");
extern "C" u32 D_01d9e6e4 asm("D_01d9e6e4");
extern "C" u32 D_01d9ea9c asm("D_01d9ea9c");
extern "C" u32 D_01d9eaa4 asm("D_01d9eaa4");
extern "C" u32 func_00222d40(u32, u32, u32, u32, u32, u32, u32) asm("func_00222d40");
extern "C" void func_0020e7a8(u32, u32, u32, u32) asm("func_0020e7a8");
extern "C" void func_00222aa8(u32, u32, u32, f32) asm("func_00222aa8");
extern "C" void func_002f28b8(u32, u32, u32, u32, u32, u32, u32, u32) asm("func_002f28b8");

// 0x001f7660 func_001f7660
void func_001f7660(u32 a0, u32 a1, u32 a2) asm("func_001f7660");
void func_001f7660(u32 a0, u32 a1, u32 a2) {
    u32 t4;
    u32 t6;
    u32 t7;
    u32 s5;
    f32 f3;
    f32 f2;
    f32 f1;
    u32 t6_0;
    u32 t7_1;
    f32 f0;
    f32 f1_2;
    f32 f0_3;
    u32 s5_4;
    u32 t6_5;
    u32 s2;
    u32 s1;
    u32 s1_6;
    u32 t7_7;
    u32 a3_8;
    u32 s2_9;
    u32 t7_10;
    u32 s0;
    u32 a1_11;
    t4 = (a0 + *(u32*)((*(u32*)((a2 + 0xc)) + 8)));
    t6 = *(u32*)(&D_01d9ea9c);
    if (((s32)(t6) == 0)) {
        t7 = *(u64*)((*(u32*)(&D_01d9e6e0) + 0xa8));
        s5 = (t4 + 0xa0);
        if (((t7 & ((u64)(0xff) | 0xff00)) == 0)) {
            f3 = *(f32*)((s5 + 8));
            f2 = (*(f32*)((s5 + 4)) + f3);
            *(f32*)((s5 + 4)) = f2;
            f1 = (*(f32*)((t4 + 0xa0)) + f2);
            *(f32*)((t4 + 0xa0)) = f1;
            t6_0 = *(u32*)((a0 + 0xc));
            t7_1 = *(u32*)(a1);
            if ((t6_0 == t7_1)) {
                f0 = *(f32*)((a1 + 8));
                *(f32*)((t4 + 0xa0)) = (f1 + f0);
                f1_2 = *(f32*)((a1 + 0xc));
                *(f32*)((s5 + 4)) = (f2 + f1_2);
                f0_3 = *(f32*)((a1 + 0x10));
                *(f32*)((s5 + 8)) = (f3 + f0_3);
            }
        }
        s5_4 = s5;
    } else {
        s5_4 = (t4 + 0xa0);
    }
    t6_5 = *(u32*)((a1 + 4));
    if ((t6_5 != 0xffff)) {
        s2 = *(u8*)((a1 + 0x1c));
        s1 = *(u32*)(&D_01d9eaa4);
        s1_6 = (s1 + 0x10);
        t7_7 = *(u32*)((*(u32*)(&D_01d9e6e4) + 0x10));
        a3_8 = *(u32*)(((t7_7 + (t6_5 * 0x24)) + 0x10));
        s2_9 = (s2 << 2);
        t7_10 = ((u64)(1) << 0x3b);
        func_002f28b8(s1_6, ((a3_8 >> 5) & 0x3fff) + s2_9, 4, (a3_8 >> 0x13) & 0xf, 0, 0, 0x10, 0x10);
        *(u64*)((s1_6 + 0x50)) = (t7_10 | 0x8100);
        s0 = *(u32*)(&D_01d9eaa4);
        func_00222aa8(*(u32*)((a1 + 0x14)), *(u32*)((a1 + 0x18)), s0 + 0x70, *(f32*)(s5_4));
        func_0020e7a8(*(u32*)(&D_01d9eaa4), 0x107, 0, 0);
        *(u32*)(&D_01d9eaa4) = (s0 + 0x1070);
        a1_11 = *(u32*)(*(u32*)((a2 + 0xc)));
        func_00222d40(*(u32*)((a1 + 4)), (a0 + a1_11) + 0xa0, s2_9, 0, 0, *(u8*)((a1 + 0x1d)), 0);
        return;
    } else {
        return;
    }
}
