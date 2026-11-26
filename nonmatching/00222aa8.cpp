// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0035da40 asm("D_0035da40");
extern "C" u32 D_0035da50 asm("D_0035da50");
extern "C" u32 D_0035da60 asm("D_0035da60");
extern "C" f32 func_0020ebd8(u32) asm("func_0020ebd8");
extern "C" u32 func_0020eaf8(u32, u32, u32, f32) asm("func_0020eaf8");
extern "C" u32 func_00313bc0(f32) asm("func_00313bc0");
extern "C" void func_002f3e90(u32, u32, f32) asm("func_002f3e90");
extern "C" void func_002f3ef8(u32, u32, u32) asm("func_002f3ef8");
extern "C" void func_002f3f10(u32, u32, u32) asm("func_002f3f10");

// 0x00222aa8 func_00222aa8
// minilink-rodata 0x00370bd4   (float literals live here in the original)
f32 func_00222aa8(u32 a0, u32 a1, u32 a2, f32 fa0) asm("func_00222aa8");
f32 func_00222aa8(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u8 frame[48];
    u32 v0;
    u32 s0;
    u32 s1;
    u32 s2;
    u32 t7;
    u32 s0_0;
    u32 s2_1;
    u32 t7_2;
    u32 sp;
    u32 s0_3;
    u32 s2_4;
    u32 sp_5;
    u32 s6;
    u32 s1_6;
    u32 s1_7;
    u32 s0_8;
    u32 s0_9;
    u32 s1_10;
    u32 t6;
    *(u32*)(((u32)frame + 0x20)) = a1;
    *(u32*)(((u32)frame + 0x24)) = a0;
    v0 = func_0020eaf8(0x20, a1, a2, fa0);
    *(Q16*)(v0) = *(Q16*)(&D_0035da40);
    *(Q16*)((v0 + 0x10)) = *(Q16*)(&D_0035da50);
    if (((s32)((s32)(fa0)) < 0)) {
        s0 = ((((s32)((s32)(fa0)) < (s32)(-0x100)) ? 0xffffff00 : (s32)(fa0)) + 0x100);
        s1 = ((((((((s32)((s32)(fa0)) < (s32)(-0x100)) ? 0xffffff00 : (s32)(fa0)) + 0x100) & 0xe0) + *(s8*)(((((((s32)((s32)(fa0)) < (s32)(-0x100)) ? 0xffffff00 : (s32)(fa0)) + 0x100) & 0x1f) + (u32)&D_0035da60))) << 2) + a2);
        s2 = ((((s32)((s32)(fa0)) < (s32)(-0x100)) ? 0xffffff00 : (s32)(fa0)) + 0x100);
        while (((s32)(((s32)(s0) < (s32)(0x100))) != 0)) {
            *(u32*)(s1) = *(u32*)(((u32)frame + 0x24));
            t7 = *(s8*)((v0 + (s0 & 0x1f)));
            s0 = (s0 + 1);
            s1 = (s1 + (t7 << 2));
        }
        fa0 = (f32)((s32)(s2));
        s0_3 = 0;
        s2_4 = s2;
    } else {
        s0_0 = 0;
        s2_1 = (((s32)((s32)(fa0)) < (s32)(0x100)) ? (s32)(fa0) : 0xff);
        if (((s32)((((s32)((s32)(fa0)) < (s32)(0x100)) ? (s32)(fa0) : 0xff)) > 0)) {
            do {
                *(u32*)(a2) = *(u32*)(((u32)frame + 0x20));
                t7_2 = *(s8*)((v0 + (s0_0 & 0x1f)));
                s0_0 = (s0_0 + 1);
                a2 = (a2 + (t7_2 << 2));
            } while (((s32)(((s32)(s0_0) < (s32)(s2_1))) != 0));
        } else {
            sp = (u32)frame;
        }
        fa0 = (256.0f - (f32)((s32)(s2_1)));
        s0_3 = s0_0;
        s2_4 = 0x100;
        sp_5 = sp;
    }
    *(f32*)(sp_5) = (f32)((s32)(*(u8*)((sp_5 + 0x24))));
    *(f32*)((sp_5 + 4)) = (f32)((s32)(*(u8*)((sp_5 + 0x25))));
    *(f32*)((sp_5 + 8)) = (f32)((s32)(*(u8*)((sp_5 + 0x26))));
    *(f32*)((sp_5 + 0xc)) = (f32)((s32)(*(u8*)((sp_5 + 0x27))));
    *(f32*)((sp_5 + 0x10)) = (f32)((s32)(*(u8*)((sp_5 + 0x20))));
    *(f32*)((sp_5 + 0x14)) = (f32)((s32)(*(u8*)((sp_5 + 0x21))));
    *(f32*)((sp_5 + 0x18)) = (f32)((s32)(*(u8*)((sp_5 + 0x22))));
    *(f32*)((sp_5 + 0x1c)) = (f32)((s32)(*(u8*)((sp_5 + 0x23))));
    func_002f3f10(sp_5, sp_5, sp_5 + 0x10);
    func_002f3e90(sp_5, sp_5, __f32(fa0));
    if (((s32)(((s32)(s0_3) < (s32)(s2_4))) != 0)) {
        s6 = (sp_5 + 0x10);
        do {
            s1_6 = (func_00313bc0(*(f32*)((sp_5 + 0x1c))) << 0x18);
            s1_7 = (s1_6 | func_00313bc0(*(f32*)((sp_5 + 0x10))));
            s0_8 = (func_00313bc0(*(f32*)((sp_5 + 0x14))) << 8);
            *(u32*)(a2) = (s1_7 | (s0_8 | (func_00313bc0(*(f32*)((sp_5 + 0x18))) << 0x10)));
            s0_9 = (s0_8 | (func_00313bc0(*(f32*)((sp_5 + 0x18))) << 0x10));
            s1_10 = (s1_7 | (s0_8 | (func_00313bc0(*(f32*)((sp_5 + 0x18))) << 0x10)));
            t6 = *(s8*)((v0 + (s0_3 & 0x1f)));
            func_002f3ef8(s6, s6, sp_5);
            s0_3 = (s0_3 + 1);
            a2 = (a2 + (t6 << 2));
        } while (((s32)(((s32)(s0_3) < (s32)(s2_4))) != 0));
    }
    return func_0020ebd8(0x20);
}
