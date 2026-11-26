// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_0016a070(u32, u32) asm("func_0016a070");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_0017e4f8(u32, u32, f32, f32, f32) asm("func_0017e4f8");
extern "C" u32 func_001ba028(u32) asm("func_001ba028");
extern "C" void func_00102448(u32, u32) asm("func_00102448");
extern "C" void func_001617d8() asm("func_001617d8");
extern "C" void func_0016ed50(u32, u32, u32) asm("func_0016ed50");
extern "C" void func_001703a8(u32) asm("func_001703a8");
extern "C" void func_00170888(u32) asm("func_00170888");
extern "C" void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");
extern "C" void func_001afb80(u32, u32, u32, u32) asm("func_001afb80");
extern "C" void func_001c9e50(u32) asm("func_001c9e50");

// 0x001b5cf8 func_001b5cf8
// minilink-rodata 0x0036daa0   (float literals live here in the original)
u32 func_001b5cf8(u32 a0, u32 a1) asm("_ZN2YS8CHANGEIN4execEP4TASK");
u32 func_001b5cf8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 s6;
    u32 v0;
    u32 s5;
    u32 s5_0;
    u32 s4;
    u32 v0_1;
    Q16 loc_0;
    u32 s1;
    u32 t7;
    u32 v0_2;
    u32 a0_3;
    u32 s1_4;
    s6 = func_0016a070(*(u32*)((a0 + 4)), a1);
    v0 = ((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 0x3c))))(*(u32*)((a0 + 4)));
    if ((v0 != 0x96a)) {
        if ((v0 != 0x974)) {
            s5 = 0xffffffff;
        } else {
            s5 = 6;
        }
        s5_0 = s5;
    } else {
        s5_0 = 5;
    }
    s4 = *(u32*)((*(u32*)((a0 + 4)) + 0x7ac));
    v0_1 = func_0016c028(*(u32*)((a0 + 4)));
    if (((u32)frame != v0_1)) {
        loc_0 = *(Q16*)(v0_1);
    }
    if (((s32)(*(u32*)(a0)) != 0)) {
        if ((*(u32*)(a0) == 1)) {
            ((void(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 4))) + 0x90))))(*(u32*)((a0 + 4)));
        }
    } else {
        s1 = *(u32*)((a0 + 4));
        if (((s32)((*(u32*)((*(u32*)((a0 + 4)) + 0x7f8)) & 0x10)) == 0)) {
            func_001ad990(*(u32*)((a0 + 4)) + 0x82c, 1.0f, 0.0f, 8.0f);
            t7 = (*(u32*)((s1 + 0x7f8)) | 0x10);
        } else {
            t7 = (*(u32*)((*(u32*)((a0 + 4)) + 0x7f8)) | 0x10);
        }
        *(u32*)((s1 + 0x7f8)) = t7;
        while ((v0_2 = func_001ba028(*(u32*)((a0 + 4)))), ((s32)(v0_2) != 0)) {
            func_00102448(a1, 0);
        }
        func_00102448(a0_3, 1);
    }
    func_001703a8(v0);
    func_001703a8(v0 + 1);
    func_001703a8(v0 + 2);
    func_001afb80(a1, s4, s6, *(u32*)((a0 + 8)));
    func_0016ed50(*(u32*)((a0 + 8)), v0, s5_0);
    func_00170888(a1);
    func_001c9e50(a1);
    s1_4 = func_0017e4f8(*(u32*)((a0 + 8)), (u32)&loc_0, 100.0f, 200.0f, 300.0f);
    if ((*(u32*)(a0) == 1)) {
        func_001617d8();
    }
    return s1_4;
}
