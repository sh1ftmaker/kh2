// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00168b38(u32, u32, u32) asm("func_00168b38");
extern "C" u32 func_0019c6f0(u32, u32, f32, f32) asm("func_0019c6f0");
extern "C" void func_0017eee8(u32, f32, f32) asm("func_0017eee8");
extern "C" void func_0017f938(u32) asm("func_0017f938");
extern "C" void func_001807a0(u32, f32, f32) asm("func_001807a0");
extern "C" void func_001807d0(u32, f32) asm("func_001807d0");
extern "C" void func_00180800(u32, u32) asm("func_00180800");
extern "C" void func_00180ce0(u32) asm("func_00180ce0");
extern "C" void func_00189258(u32) asm("func_00189258");
extern "C" void func_001d7a50(u32) asm("func_001d7a50");

// 0x0017efa0 YS::MOTION::start_motion(YS::BINARC*, float, float)
// minilink-rodata 0x0036c5a4   (float literals live here in the original)
void lift_0017efa0(u32 a0, u32 a1, f32 fa0, f32 fa1) asm("_ZN2YS6MOTION12start_motionEPNS_6BINARCEff");
void lift_0017efa0(u32 a0, u32 a1, f32 fa0, f32 fa1) {
    u32 t6;
    u32 t7;
    u32 s1;
    u32 t5;
    u32 t7_0;
    u32 t6_1;
    u32 v0;
    u32 t6_2;
    u32 t5_3;
    u32 t7_4;
    u32 t7_5;
    if ((func_0019c6f0(*(u32*)((a0 + 8)), a1, fa0, fa1) != 0)) {
        func_001d7a50(*(u32*)((a0 + 8)) + 0x518);
    }
    t6 = *(u32*)((a0 + 0x148));
    if (((s32)(t6) != 0)) {
        t7 = *(u32*)(t6);
        *(u32*)((a0 + 0x148)) = 0;
        *(u32*)(t6) = (t7 + -1);
    }
    func_00180ce0(a0);
    func_00189258(a0);
    if (((s32)(a1) == 0)) {
        *(u32*)((a0 + 0xc)) = 0;
    } else {
        *(u32*)((a0 + 0x14)) = 0xffffffff;
        *(u32*)((a0 + 0x18)) = 0xffffffff;
        s1 = func_00168b38(a1, 9, 0);
        t5 = *(u32*)((a0 + 8));
        t7_0 = *(u32*)((t5 + 0x10c));
        func_00180800(a0, 0xffffffff);
        *(u32*)((t5 + 0x10c)) = (t7_0 & 0xfffffffe);
        t6_1 = *(u32*)((s1 + 8));
        *(u32*)((a0 + 0xc)) = t6_1;
        v0 = *(u32*)((*(u32*)(t6_1) + 8));
        *(f32*)((a0 + 0x2c)) = (f32)((s32)(((u32(*)(u32))(v0))(t6_1)));
        *(u32*)((a0 + 0x10)) = *(u32*)((func_00168b38(a1, 0x10, 0) + 8));
        t6_2 = *(u32*)((a0 + 0x20));
        *(u32*)((a0 + 0x20)) = 1;
        *(u32*)((a0 + 0x194)) = 0;
        t5_3 = *(u32*)((a0 + 0x24));
        *(u32*)((a0 + 0x24)) = 0;
        if (((s32)((t5_3 & 4)) != 0)) {
            *(u32*)((a0 + 0x20)) = 0x4001;
        }
        func_001807d0(a0, fa1);
        if ((2.0f < fa0)) {
            t7_4 = *(u32*)((a0 + 0x104));
            if (((s32)((t7_4 & 1)) != 0)) {
                func_0017eee8(a0, fa0, fa1);
            } else {
                *(f32*)((a0 + 0x30)) = fa1;
                *(u32*)((a0 + 0x34)) = 0;
                func_001807a0(a0, fa1, -1.0f);
            }
        } else {
            *(f32*)((a0 + 0x30)) = fa1;
            *(u32*)((a0 + 0x34)) = 0;
            func_001807a0(a0, fa1, -1.0f);
        }
        t7_5 = *(u32*)((a0 + 0x20));
        *(u32*)((a0 + 0x20)) = (t7_5 | 0x2000);
        if (((s32)(((u32)(0) < (u32)((t6_2 & 0x80)))) != 0)) {
            func_0017f938(a0);
        }
    }
    return;
}
