// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_00168b88(u32, u32, u32, u32) asm("func_00168b88");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_00196f00(u32) asm("func_00196f00");
extern "C" u32 func_00198738(u32, u32) asm("func_00198738");
extern "C" u32 func_001b5858(u32, u32, u8, f32) asm("func_001b5858");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" u32 func_003142e0(u32, u32) asm("func_003142e0");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");
extern "C" void func_0016b010(u32, u32) asm("func_0016b010");
extern "C" void func_00185278(u32, u8, f32) asm("func_00185278");
extern "C" void func_00185e78(u32) asm("func_00185e78");
extern "C" void func_00196ca8(u32, u32, u32) asm("func_00196ca8");
extern "C" void func_00196e98(u32, u32) asm("func_00196e98");

// 0x001b50e0 func_001b50e0
// minilink-rodata 0x0036da90   (float literals live here in the original)
u32 func_001b50e0(u32 a0, u32 a1, u8 a2, f32 fa0) asm("_ZN2YS5LIMIT12camera_startEPKcfb");
u32 func_001b50e0(u32 a0, u32 a1, u8 a2, f32 fa0) {
    u8 frame[48];
    u32 v0;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 a2_0;
    u32 v0_1;
    u32 t7_2;
    u32 t7_3;
    u32 s2;
    u32 s2_4;
    u32 v0_5;
    u32 v0_6;
    u32 v0_7;
    u32 v0_8;
    if ((func_001b5858(a0, a1, a2, fa0) != 0)) {
        v0 = func_00198738(*(u32*)((a0 + 0x10)), a1);
        s2_4 = v0;
        v0_5 = v0;
    } else {
        t5 = *(s8*)((a1 + 1));
        t6 = *(s8*)((a1 + 3));
        t7 = *(s8*)((a1 + 2));
        a2_0 = *(s8*)(a1);
        v0_1 = func_00168b88(*(u32*)((a0 + 4)), 0x16, (a2_0 | (t6 << 0x18)) | ((t7 << 0x10) | (t5 << 8)), 0);
        if (((s32)(v0_1) != 0)) {
            t7_2 = *(u32*)((v0_1 + 8));
            t7_3 = ((u32)(0) < (u32)(t7_2));
        } else {
            t7_3 = 0;
        }
        s2 = ((t7_3 & 0xff) == 0) ? 0 : *(u32*)((v0_1 + 8));
        s2_4 = s2;
        v0_5 = v0_1;
    }
    if (((s32)(s2_4) != 0)) {
        func_00185278(*(u32*)((a0 + 0xc)), a2, 500.0f);
        func_0016af58((u32)frame, *(u32*)((a0 + 0xc)));
        func_0016b010(*(u32*)((a0 + 0xc)), (u32)frame);
        if (((s32)(func_003142e0(0, func_00313b80(fa0))) < 0)) {
            v0_6 = func_0016c028(*(u32*)((a0 + 0xc)));
            *(u32*)(((u32)frame + 0x10)) = 0;
            *(f32*)(((u32)frame + 0x14)) = fa0;
            *(f32*)(((u32)frame + 0x18)) = fa0;
            *(u32*)(((u32)frame + 0x1c)) = 0;
            *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(v0_6);
            func_00185e78((u32)frame + 0x10);
        }
        v0_7 = func_001050d8(0xb0);
        func_00196ca8(v0_7, 0xb, s2_4);
        func_00196e98(v0_7, *(u32*)((a0 + 0xc)));
        v0_8 = func_00196f00(v0_7);
        v0_5 = v0_8;
    }
    return v0_5;
}
