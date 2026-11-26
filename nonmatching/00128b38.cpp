// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 func_001285f8(u32, u32, u32, f32) asm("func_001285f8");
extern "C" u32 func_00128750(u32, u32, u32, u32, f32) asm("func_00128750");

// 0x00128b38 func_00128b38
u32 func_00128b38(u32 a0, u32 a1, f32 fa0) asm("_ZN2kn16MotionPrototype014setFcurveValueEPNS_8ModelObjEf");
u32 func_00128b38(u32 a0, u32 a1, f32 fa0) {
    u32 loc_4;
    u32 loc_0;
    u32 v0;
    u32 s0;
    u32 s2;
    u32 s1;
    u32 s3;
    u32 v0_0;
    u32 t6;
    u32 t6_1;
    u32 t5;
    u32 t6_2;
    u32 t5_3;
    u32 s2_4;
    u32 s1_5;
    u32 s0_6;
    u32 s2_7;
    u32 s3_8;
    u32 s5;
    u32 v0_9;
    u32 t7;
    u32 t7_10;
    u32 t6_11;
    u32 t7_12;
    u32 t7_13;
    u32 t6_14;
    u32 t7_15;
    u32 t7_16;
    u32 s2_17;
    v0 = func_001285f8(a0, (u32)&loc_0, (u32)&loc_4, fa0);
    if (((s32)(*(u32*)((*(u32*)((a0 + 4)) + 0x34))) > 0)) {
        s0 = (*(u32*)((a0 + 4)) + *(u32*)((*(u32*)((a0 + 4)) + 0x30)));
        s2 = 0;
        do {
            s1 = *(u32*)((a0 + 4));
            s3 = *(u32*)((*(u32*)((a0 + 4)) + 0x34));
            v0_0 = func_00128750(a0, s0, loc_0, loc_4, fa0);
            switch (((*(u8*)((s0 + 2)) & 0xf) & 0xff)) {
            case 0:
            case 1:
            case 2:
                t6 = (*(u32*)((a1 + 0x1c)) + (*(u16*)(s0) << 4));
                *(f32*)((t6 + ((*(u8*)((s0 + 2)) & 0xf) << 2))) = __f32(v0_0);
                break;
            case 3:
            case 4:
            case 5:
                t6_1 = ((*(u8*)((s0 + 2)) & 0xf) + -3);
                t5 = (*(u32*)((a1 + 0x20)) + (*(u16*)(s0) << 4));
                *(f32*)((t5 + (t6_1 << 2))) = __f32(v0_0);
                break;
            case 6:
            case 7:
            case 8:
                t6_2 = ((*(u8*)((s0 + 2)) & 0xf) + -6);
                t5_3 = (*(u32*)((a1 + 0x24)) + (*(u16*)(s0) << 4));
                *(f32*)((t5_3 + (t6_2 << 2))) = __f32(v0_0);
                break;
            default:
                break;
            }
            s2_4 = (s2 + 1);
            s0 = (s0 + 6);
            s2 = s2_4;
            v0 = v0_0;
        } while (((s32)(((s32)(s2_4) < (s32)(s3))) != 0));
        s1_5 = s1;
    } else {
        s1_5 = *(u32*)((a0 + 4));
    }
    if (((s32)(*(u32*)((s1_5 + 0x3c))) > 0)) {
        s0_6 = (s1_5 + *(u32*)((s1_5 + 0x38)));
        s2_7 = 0;
        do {
            s3_8 = *(u32*)((s1_5 + 0x3c));
            s5 = (s1_5 + *(u32*)((s1_5 + 0x18)));
            v0_9 = func_00128750(a0, s0_6, loc_0, loc_4, fa0);
            switch (((*(u8*)((s0_6 + 2)) & 0xf) & 0xff)) {
            case 0:
            case 1:
            case 2:
                t7 = (*(u16*)(s0_6) << 6);
                t7_10 = (s5 + t7);
                *(f32*)(((t7_10 + ((*(u8*)((s0_6 + 2)) & 0xf) << 2)) + 0x10)) = __f32(v0_9);
                break;
            case 3:
            case 4:
            case 5:
                t6_11 = ((*(u8*)((s0_6 + 2)) & 0xf) + -3);
                t7_12 = (*(u16*)(s0_6) << 6);
                t7_13 = (s5 + t7_12);
                *(f32*)(((t7_13 + (t6_11 << 2)) + 0x20)) = __f32(v0_9);
                break;
            case 6:
            case 7:
            case 8:
                t6_14 = ((*(u8*)((s0_6 + 2)) & 0xf) + -6);
                t7_15 = (*(u16*)(s0_6) << 6);
                t7_16 = (s5 + t7_15);
                *(f32*)(((t7_16 + (t6_14 << 2)) + 0x30)) = __f32(v0_9);
                break;
            default:
                break;
            }
            s2_17 = (s2_7 + 1);
            s0_6 = (s0_6 + 6);
            s2_7 = s2_17;
            v0 = v0_9;
        } while (((s32)(((s32)(s2_17) < (s32)(s3_8))) != 0));
    }
    return v0;
}
