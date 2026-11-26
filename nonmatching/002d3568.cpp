// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_002d38e8(u32, u32, u32) asm("func_002d38e8");
extern "C" u32 func_001cbe30(u32, u32, u32) asm("func_001cbe30");

// 0x002d3568 func_002d3568
// minilink-rodata 0x00375a8c   (float literals live here in the original)
f32 func_002d3568(u32 a0, u32 a1, u32 a2) asm("_ZN2Ti15MGOarashiGimObj16appear_rot_prizeERKNS_9MGOarashi13RotPrizeParamEi");
f32 func_002d3568(u32 a0, u32 a1, u32 a2) {
    u8 frame[16];
    Q16 loc_0;
    f32 f0;
    u32 s6;
    u32 t6;
    u32 s7;
    u32 s1;
    f32 f20;
    u32 v0;
    u32 s2;
    f32 f0_0;
    u32 t7;
    u32 s4;
    u32 s5;
    u32 s4_1;
    u32 s5_2;
    u32 s1_3;
    u32 s2_4;
    u32 s4_5;
    u32 s5_6;
    u32 s6_7;
    f32 f0_8;
    func_002d38e8((u32)&loc_0, a0, a2);
    if (((s32)(*(u32*)(a1)) > 0)) {
        f0 = 0.0f;
        s6 = 0;
        t6 = *(u32*)((a1 + 4));
        do {
            s7 = (a1 + 8);
            if (((s32)(t6) > 0)) {
                s1 = 0;
                do {
                    f20 = ((f32)((s32)(s6)) * *(f32*)(s7));
                    v0 = func_001cbe30((u32)&loc_0, a2, 0);
                    s2 = (a1 + 4);
                    if (((s32)(v0) != 0)) {
                        f0_0 = ((f32)((s32)(s1)) * 6.2831854820251465f);
                        t7 = (v0 + 0x70);
                        if ((t7 != (u32)frame)) {
                            *(Q16*)(t7) = loc_0;
                        }
                        *(f32*)((v0 + 0xa0)) = ((f0_0 / (f32)(*(s32*)(s2))) - 3.1415927410125732f);
                        s4 = (a1 + 0x10);
                        *(u32*)((v0 + 0xac)) = 0;
                        *(f32*)((v0 + 0xa8)) = *(f32*)(s4);
                        s5 = (a1 + 0xc);
                        *(f32*)((v0 + 0x60)) = f20;
                        *(f32*)((v0 + 0xb4)) = *(f32*)(s5);
                        *(f32*)((v0 + 0x64)) = 120.0f;
                        *(u32*)((v0 + 0x40)) = 0;
                        *(f32*)((v0 + 0x68)) = *(f32*)((a1 + 0x14));
                        s4_1 = s4;
                        s5_2 = s5;
                    } else {
                        s4_1 = (a1 + 0x10);
                        s5_2 = (a1 + 0xc);
                    }
                    s1_3 = (s1 + 1);
                    s1 = s1_3;
                    t6 = *(u32*)(s2);
                } while (((s32)(((s32)(s1_3) < (s32)(*(u32*)(s2)))) != 0));
                s2_4 = s2;
                s4_5 = s4_1;
                s5_6 = s5_2;
            } else {
                s2_4 = (a1 + 4);
                s4_5 = (a1 + 0x10);
                s5_6 = (a1 + 0xc);
            }
            s6_7 = (s6 + 1);
            s6 = s6_7;
        } while (((s32)(s6_7) < (s32)(*(u32*)(a1))));
        f0_8 = f0;
    } else {
        f0_8 = func_002d38e8((u32)&loc_0, a0, a2);
    }
    return f0_8;
}
