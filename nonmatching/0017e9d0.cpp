// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00144490(u32, f32, f32, f32, f32, f32, f32) asm("func_00144490");
extern "C" void func_0017fdf8(u32) asm("func_0017fdf8");
extern "C" void func_0031cc28(u32, u32) asm("func_0031cc28");

// 0x0017e9d0 func_0017e9d0
// minilink-rodata 0x0036c594   (float literals live here in the original)
void func_0017e9d0(u32 a0, u32 a1) asm("func_0017e9d0");
void func_0017e9d0(u32 a0, u32 a1) {
    u32 s1;
    u32 s2;
    u32 s3;
    u32 s4;
    u32 s1_0;
    u32 t7;
    u32 t5;
    u32 t6;
    u32 t7_1;
    u32 t6_2;
    u32 t7_3;
    u32 a0_4;
    *(u32*)(a0) = 0;
    *(u32*)((a0 + 8)) = a1;
    *(u32*)((a0 + 0x1c)) = 0xffffffff;
    *(u32*)((a0 + 4)) = 0;
    *(u32*)((a0 + 0xc)) = 0;
    *(u32*)((a0 + 0x10)) = 0;
    *(u32*)((a0 + 0x14)) = 0xffffffff;
    *(u32*)((a0 + 0x18)) = 0xffffffff;
    *(u32*)((a0 + 0x20)) = 0;
    *(u32*)((a0 + 0x24)) = 0;
    *(u32*)((a0 + 0x28)) = 0;
    s1 = (a0 + 0x44);
    s2 = 3;
    s3 = 0xffffffff;
    s4 = (a0 + 0x3c);
    do {
        s1_0 = (s1 + 0x14);
        func_0031cc28(s1 + 0x10, a1);
        s1 = s1_0;
        s2 = (s2 + -1);
    } while ((s2 != s3));
    *(u32*)((s4 + 4)) = 0;
    *(u32*)(s4) = 0;
    *(u32*)((a0 + 0x98)) = 0;
    *(u32*)((a0 + 0x94)) = 0;
    t7 = (a0 + 0xb0);
    *(f32*)((t7 + 0xc)) = 0.0f;
    *(f32*)((t7 + 4)) = 0.0f;
    *(f32*)((t7 + 8)) = 0.0f;
    *(u32*)((a0 + 0xd0)) = 0;
    *(u32*)((a0 + 0xd4)) = 0;
    *(f32*)((a0 + 0xb0)) = 0.0f;
    func_00144490(a0 + 0xd8, -0.5f, -0.5f, -0.5f, 0.5f, 0.5f, 0.5f);
    *(u32*)((a0 + 0xfc)) = 0;
    *(u32*)((a0 + 0x100)) = 0;
    *(u32*)((a0 + 0xf0)) = (a1 + 0x80);
    *(f32*)((a0 + 0xf4)) = 1.0f;
    *(u32*)((a0 + 0x104)) = 0;
    t5 = 0xffffffff;
    t6 = 7;
    do {
        t7_1 = ((a0 + ((t6 - 7) * -8)) + 0x108);
        *(u32*)(t7_1) = 0;
        t6 = (t6 + -1);
    } while ((t6 != t5));
    *(u32*)((a0 + 0x148)) = 0;
    *(u32*)((a0 + 0x190)) = 0;
    *(u32*)((a0 + 0x18c)) = 0;
    *(u32*)((a0 + 0x194)) = 0;
    *(u32*)((a0 + 0x1b8)) = 0;
    func_0017fdf8(a0);
    t6_2 = 0xffffffff;
    t7_3 = 0xf;
    do {
        a0_4 = ((a0 + ((t7_3 - 0xf) * -4)) + 0x14c);
        *(u32*)(a0_4) = t6_2;
        t7_3 = (t7_3 + -1);
    } while (((s32)(t7_3) >= 0));
    return;
}
