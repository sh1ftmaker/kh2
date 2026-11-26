// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00350a18 asm("D_00350a18");
extern "C" u32 D_00ffffff asm("D_00ffffff");
extern "C" f32 func_00192fb8(u32) asm("func_00192fb8");
extern "C" f32 func_001aa310(u32, u32, u32, u32, u32) asm("func_001aa310");
extern "C" u32 func_001aa8a8(u32, u32, u32, u32, u32) asm("func_001aa8a8");
extern "C" u32 func_001aa8f0(u32, u32, u32, u32, u32) asm("func_001aa8f0");
extern "C" u32 func_001aae80(u32, u32) asm("func_001aae80");
extern "C" u32 func_00313bc0(f32) asm("func_00313bc0");

// 0x001aa0a8 func_001aa0a8
// minilink-rodata 0x0036d698   (float literals live here in the original)
f32 func_001aa0a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_ZN2YS11MESSAGEDRAW11draw_letterEPNS0_3ENVEiii");
f32 func_001aa0a8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    u32 s6;
    u32 s0;
    u32 t6;
    u32 s6_0;
    u32 s6_1;
    u32 s2;
    u32 s6_2;
    u32 s6_3;
    u32 s2_4;
    u32 v0;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    f32 f20;
    if (((s32)(a4) == 0)) {
        s6 = *(u32*)((a1 + 0x10));
        func_001aa310(a0, a1, a2, a3, a4);
        return;
    } else {
        if ((*(u32*)(*(u32*)(a1)) != 1)) {
            if ((*(u32*)(*(u32*)(a1)) == 2)) {
                s0 = 1;
                t6 = 0;
                do {
                    s6_0 = *(u32*)((a1 + 0x10));
                    if (((s32)(func_001aa8a8(a1, a2 + *(u32*)(((t6 << 2) + (u32)&D_00350a18)), a3 + *(u32*)(((((t6 + 1) & 3) << 2) + (u32)&D_00350a18)), *(u32*)((a1 + 0x14)), a4)) != 0)) {
                        *(u32*)((a1 + 4)) = (*(u32*)((a1 + 4)) + 1);
                    }
                    s0 = (t6 + 1);
                    t6 = (t6 + 1);
                } while (((s32)(t6) < (s32)(4)));
                s6_1 = s6_0;
            } else {
                s6_1 = *(u32*)((a1 + 0x10));
            }
            s6_3 = s6_1;
        } else {
            s2 = *(u32*)(a1);
            s6_2 = *(u32*)((a1 + 0x10));
            if (((s32)(func_001aa8a8(a1, a2 + 0x20, a3 + 0x20, *(u32*)((a1 + 0x14)), a4)) != 0)) {
                *(u32*)((a1 + 4)) = (*(u32*)((a1 + 4)) + 1);
            }
            s6_3 = s6_2;
        }
        s2_4 = *(u32*)(a1);
        if ((0.0f < *(f32*)((a0 + 0x4c)))) {
            if (((*(f32*)((a1 + 0x18)) / *(f32*)((a0 + 0x4c))) < 1.0f)) {
                s6_3 = ((s6_3 & (u32)&D_00ffffff) | (func_00313bc0((*(f32*)((a1 + 0x18)) / *(f32*)((a0 + 0x4c))) * 128.0f) << 0x18));
            }
        }
        if (((s32)((*(u32*)(s2_4) ^ 4)) == 0)) {
            v0 = func_001aa8f0(a1, a2, a3, s6_3, a4);
            v0_6 = v0;
        } else {
            v0_5 = func_001aa8a8(a1, a2, a3, s6_3, a4);
            v0_6 = v0_5;
        }
        if ((v0_6 != 0)) {
            *(u32*)((a1 + 4)) = (*(u32*)((a1 + 4)) + 1);
        }
        v0_7 = func_001aae80(*(u32*)(a1), a4);
        f20 = (f32)(v0_7);
        return ((f20 * func_00192fb8(a1 + 0x20)) + 0.5f);
    }
}
