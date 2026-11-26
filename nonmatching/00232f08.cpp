// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 D_0035dcf8 asm("D_0035dcf8");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001c0cd8(u32) asm("func_001c0cd8");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_0017f430(u32, u32, f32, f32) asm("func_0017f430");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x00232f08 func_00232f08
// minilink-rodata 0x00371368   (float literals live here in the original)
f32 func_00232f08() asm("_ZN2sa5EVENT11motion_ctrlEv");
f32 func_00232f08() {
    f32 f0;
    u32 s1;
    u32 t7;
    u32 v0;
    f32 f20;
    f32 f20_0;
    f32 f2;
    f32 f2_1;
    f32 f0_2;
    if (((s32)(*(u32*)(&D_0035dcf8)) != 0)) {
        s1 = 0;
        t7 = *(u32*)(&D_0035dcf8);
        do {
            if ((*(u32*)((t7 + (s1 << 6))) != 0xffffffff)) {
                if ((*(u32*)(((t7 + (s1 << 6)) + 8)) != 0)) {
                    if ((((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10) != 0xffffffff)) {
                        if ((*(u8*)(((t7 + (s1 << 6)) + 0x30)) == 1)) {
                            func_001ba028(*(u32*)(((t7 + (s1 << 6)) + 8)));
                            v0 = func_0016c028(*(u32*)(((t7 + (s1 << 6)) + 8)));
                            if ((((t7 + (s1 << 6)) + 0x20) != v0)) {
                                *(Q16*)(((t7 + (s1 << 6)) + 0x20)) = *(Q16*)(v0);
                            }
                            *(u8*)(((t7 + (s1 << 6)) + 0x30)) = 0;
                        }
                        if ((((f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10)) + (f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10))) < *(f32*)(((t7 + (s1 << 6)) + 0x10)))) {
                            f20 = !((((f32)((s32)(*(f32*)(((t7 + (s1 << 6)) + 0x10)))) - ((f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10)) + (f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10)))) < 2.0f)) ? ((f32)((s32)(*(f32*)(((t7 + (s1 << 6)) + 0x10)))) - ((f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10)) + (f32)(((s32)((*(u16*)(((t7 + (s1 << 6)) + 0x1a)) << 0x10)) >> 0x10)))) : 2.0f;
                            f20_0 = (f20 + ((f32)((s32)(*(s16*)(((t7 + (s1 << 6)) + 0x18)))) + (f32)((s32)(*(s16*)(((t7 + (s1 << 6)) + 0x18))))));
                            func_001ba028(*(u32*)(((t7 + (s1 << 6)) + 8)));
                            func_0017f430(*(u32*)(((t7 + (s1 << 6)) + 8)) + 0x140, *(u32*)((*(u32*)(((t7 + (s1 << 6)) + 0xc)) + 0x14)), 0.0f, f20_0);
                            if (((s32)(func_001c0cd8(*(u32*)(((t7 + (s1 << 6)) + 8)))) == 0)) {
                                func_0016ace0(*(u32*)(((t7 + (s1 << 6)) + 8)), (t7 + (s1 << 6)) + 0x20);
                            }
                            *(f32*)(((t7 + (s1 << 6)) + 0x10)) = f20_0;
                            f2 = f20_0;
                        } else {
                            f2 = *(f32*)(((t7 + (s1 << 6)) + 0x10));
                        }
                        f2_1 = f2;
                    } else {
                        f2_1 = *(f32*)(((t7 + (s1 << 6)) + 0x10));
                    }
                    *(f32*)(((t7 + (s1 << 6)) + 0x10)) = (f2_1 + *(f32*)(&D_00349e10));
                    s1 = (s1 + 1);
                    f0 = (f2_1 + *(f32*)(&D_00349e10));
                } else {
                    s1 = (s1 + 1);
                }
            } else {
                s1 = (s1 + 1);
            }
            t7 = ((s32)(s1) < (s32)(0x40));
            t7 = *(u32*)(&D_0035dcf8);
        } while (((s32)(t7) != 0));
        f0_2 = f0;
    }
    return f0_2;
}
