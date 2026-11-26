// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00180cd0(u32, u32) asm("func_00180cd0");
extern "C" u32 func_001b0580(u32) asm("func_001b0580");
extern "C" void func_0011c138(u32) asm("func_0011c138");
extern "C" void func_0011c4b0(u32) asm("func_0011c4b0");
extern "C" void func_0011c4e8(u32, u32, u32, u32, u32, u32, f32) asm("func_0011c4e8");
extern "C" void func_0011c6a8(u32, u32, u32, u32, u32, u32, u32, f32) asm("func_0011c6a8");
extern "C" void func_001808c0(u32, u32) asm("func_001808c0");
extern "C" void func_00180a10(u32, u32) asm("func_00180a10");

// 0x0017fba0 YS::MOTION::calc(kn::FMatrix*)
void lift_0017fba0(u32 a0, u32 a1) asm("_ZN2YS6MOTION4calcEPN2kn7FMatrixE");
void lift_0017fba0(u32 a0, u32 a1) {
    u8 frame[512];
    u32 s4;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 v0;
    u32 t7;
    u32 t6;
    u32 sp;
    u32 sp_0;
    *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) & 0xffffff7f);
    *(u32*)((a0 + 0x104)) = ((*(u32*)((a0 + 0x104)) | 1) & 0xfffffffd);
    if (((s32)(*(u32*)((*(u32*)((a0 + 8)) + 0x670))) != 0)) {
        s4 = *(u32*)((*(u32*)((a0 + 8)) + 0x670));
        if (((s32)(func_00180cd0(a0, a1)) == 0)) {
            s2 = 0xffffffff;
            s1 = (u32)frame;
            s0 = 0xf;
            do {
                func_0011c138(s1);
                s0 = (s0 + -1);
                s1 = (s1 + 0x20);
            } while ((s0 != s2));
            func_001808c0(a0, (u32)frame);
            v0 = func_001b0580(*(u32*)((a0 + 8)) + 0x4a0);
            if (!((0.0f < *(f32*)((a0 + 0x34))))) {
                t7 = 0;
            } else {
                t7 = 1;
            }
            if (((s32)((t7 & 0xff)) != 0)) {
                func_0011c6a8(s4, a1, *(u32*)((a0 + 0xd0)), *(u32*)((a0 + 0xd4)), v0, (u32)frame, 0, *(f32*)((a0 + 0x30)) / *(f32*)((a0 + 0x34)));
            } else {
                func_0011c4e8(s4, a1, *(u32*)((a0 + 0xc)), v0, (u32)frame, 0, *(f32*)((a0 + 0x30)));
            }
            func_00180a10(a0, (u32)frame);
            *(u32*)((a0 + 0x104)) = (*(u32*)((a0 + 0x104)) | 2);
            t6 = ((u32)frame + 0x200);
            do {
                t6 = (t6 + -0x20);
            } while (((u32)frame != t6));
        } else {
            func_0011c4b0(s4);
            sp = (u32)frame;
        }
        sp_0 = sp;
    } else {
        sp_0 = (u32)frame;
    }
    return;
}
