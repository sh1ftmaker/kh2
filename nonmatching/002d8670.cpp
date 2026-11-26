// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_002d73f0(u32) asm("func_002d73f0");
extern "C" u32 func_002d94b8(u32) asm("func_002d94b8");
extern "C" void func_001991a8(u32, u32) asm("func_001991a8");
extern "C" void func_002d74c8(u32, u32, u32) asm("func_002d74c8");

// 0x002d8670 func_002d8670(int)
// minilink-rodata 0x00375c0c   (float literals live here in the original)
void lift_002d8670(u32 a0) asm("_Z13func_002d8670i");
void lift_002d8670(u32 a0) {
    u32 t7;
    u32 t7_0;
    f32 f1;
    f32 f1_1;
    f32 f2;
    f32 f2_2;
    u32 t7_3;
    u32 v0;
    f32 f0;
    u32 v0_4;
    u32 v0_5;
    u32 t6;
    u32 a1_6;
    u32 t7_7;
    u32 t7_8;
    f32 f0_9;
    u32 t6_10;
    u32 t7_11;
    t7 = *(u8*)((a0 + 0x1d1));
    if (((s32)(t7) == 0)) {
        t7_0 = *(u8*)((a0 + 0x1d2));
        if (((s32)(t7_0) == 0)) {
            *(f32*)((a0 + 0xb0)) = *(f32*)((a0 + 0xac));
            f1 = *(f32*)(func_002d73f0(a0));
            f1_1 = (f1 * *(f32*)(&D_00349e10));
            f2 = *(f32*)((a0 + 0xac));
            f2_2 = (f2 + (f1_1 * 0.5f));
            *(f32*)((a0 + 0xac)) = f2_2;
            t7_3 = *(u8*)((a0 + 0xc9));
            if (((s32)(t7_3) != 0)) {
                v0 = func_002d94b8(a0);
                v0_5 = v0;
            } else {
                f0 = *(f32*)((*(u32*)((a0 + 0xb8)) + 4));
                if (!(((f32)(__u32(f0)) < f2_2))) {
                    v0_4 = 0;
                } else {
                    v0_4 = 1;
                }
                v0_5 = v0_4;
            }
            if (((s32)(v0_5) != 0)) {
                t6 = *(u32*)((a0 + 0x94));
                a1_6 = (*(u32*)((a0 + 0xa8)) + 1);
                *(u32*)((a0 + 0xa8)) = a1_6;
                if (((s32)(((s32)(a1_6) < (s32)(t6))) == 0)) {
                    t7_7 = *(u8*)((a0 + 0x90));
                    if (((s32)(t7_7) == 0)) {
                        func_001991a8(0x15, 0);
                        *(u8*)((a0 + 0x90)) = 1;
                        t7_8 = (*(u32*)((a0 + 0x94)) + -1);
                    } else {
                        t7_8 = (t6 + -1);
                    }
                    *(u32*)((a0 + 0xa8)) = t7_8;
                    f0_9 = *(f32*)((*(u32*)((a0 + 0xb8)) + 4));
                    *(f32*)((a0 + 0xac)) = (f32)(__u32(f0_9));
                    *(u8*)((a0 + 0x1d2)) = 1;
                } else {
                    func_002d74c8(a0, a1_6, 1);
                }
            }
        }
    }
    t6_10 = (a0 + 0x150);
    t7_11 = (a0 + 0x110);
    if ((t6_10 != t7_11)) {
        *(Q16*)(t6_10) = *(Q16*)(t7_11);
        *(Q16*)((t6_10 + 0x10)) = *(Q16*)((t7_11 + 0x10));
        *(Q16*)((t6_10 + 0x20)) = *(Q16*)((t7_11 + 0x20));
        *(Q16*)((t6_10 + 0x30)) = *(Q16*)((t7_11 + 0x30));
    }
    *(u8*)((a0 + 0x58)) = 1;
    return;
}
