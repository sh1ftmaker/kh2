// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_00180e28(u32) asm("func_00180e28");
extern "C" u32 func_001050c8() asm("func_001050c8");
extern "C" u32 func_0011b720(u32, f32) asm("func_0011b720");
extern "C" u32 func_00127a88(u32, u32) asm("func_00127a88");
extern "C" u32 func_001b0580(u32) asm("func_001b0580");
extern "C" void func_0011b6a8(u32) asm("func_0011b6a8");
extern "C" void func_0011c138(u32) asm("func_0011c138");
extern "C" void func_0011c4e8(u32, u32, u32, u32, u32, u32, f32) asm("func_0011c4e8");
extern "C" void func_0011d440(u32) asm("func_0011d440");
extern "C" void func_00124b10(u32, u32) asm("func_00124b10");
extern "C" void func_0017ee68(u32) asm("func_0017ee68");
extern "C" void func_0017fdf8(u32) asm("func_0017fdf8");
extern "C" void func_0017fef0(u32, f32) asm("func_0017fef0");
extern "C" void func_0017fff8(u32) asm("func_0017fff8");
extern "C" void func_001808c0(u32, u32) asm("func_001808c0");
extern "C" void func_00180b98(u32) asm("func_00180b98");

// 0x0017f938 func_0017f938
f32 func_0017f938(u32 a0) asm("_ZN2YS6MOTION4execEv");
f32 func_0017f938(u32 a0) {
    u8 frame[576];
    u32 s4;
    u32 t7;
    u32 s5;
    u32 s1;
    u32 s3;
    u32 s5_0;
    u32 s0;
    u32 v0;
    u32 sp;
    u32 t7_1;
    u32 sp_2;
    u32 sp_3;
    u32 t6;
    u32 t7_4;
    u32 t7_5;
    if (((s32)((*(u32*)((a0 + 0x20)) & 1)) != 0)) {
        s4 = *(u32*)((*(u32*)((a0 + 8)) + 0x670));
        func_0017ee68(a0);
        if (!((0.0f < *(f32*)((a0 + 0x34))))) {
            t7 = 0;
        } else {
            t7 = 1;
        }
        if (((s32)((t7 & 0xff)) != 0)) {
            s5 = ((u32)frame + 0x40);
            s1 = 0xf;
            s3 = 0xffffffff;
            s5_0 = s5;
            do {
                s0 = (s5 + ((s1 - 0xf) * -0x20));
                func_0011c138(s0);
                s1 = (s1 + -1);
            } while ((s1 != s3));
            if (((s32)((*(u32*)((a0 + 0x104)) & 2)) != 0)) {
                *(u32*)((a0 + 0xd0)) = func_00127a88(s4, func_001050c8());
                func_0011b6a8((u32)frame);
                *(f32*)(((u32)frame + 0x34)) = *(f32*)((a0 + 0xc4));
                *(f32*)(((u32)frame + 0x38)) = *(f32*)((a0 + 0xc8));
                *(f32*)(((u32)frame + 0x30)) = -(*(f32*)((a0 + 0xc0)));
                v0 = func_0011b720((u32)frame, *(f32*)((a0 + 0xcc)));
                if (((u32)frame != v0)) {
                    *(Q16*)((u32)frame) = *(Q16*)(v0);
                    *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((v0 + 0x10));
                    *(Q16*)(((u32)frame + 0x20)) = *(Q16*)((v0 + 0x20));
                    *(Q16*)(((u32)frame + 0x30)) = *(Q16*)((v0 + 0x30));
                }
                func_00124b10(*(u32*)((a0 + 0xd0)), (u32)frame);
                sp = (u32)frame;
            }
            func_001808c0(a0, s5_0);
            func_0011c4e8(s4, *(u32*)((a0 + 8)) + 0x40, *(u32*)((a0 + 0xc)), func_001b0580(*(u32*)((a0 + 8)) + 0x4a0), s5_0, 0, *(f32*)((a0 + 0x38)));
            *(u32*)((a0 + 0xd4)) = func_00127a88(s4, func_001050c8());
            if (((s32)((*(u32*)((a0 + 0x104)) & 2)) == 0)) {
                *(u32*)((a0 + 0xd0)) = func_00127a88(s4, func_001050c8());
            }
            func_0011d440(s4);
            t7_1 = (sp + 0x240);
            do {
                t7_1 = (t7_1 + -0x20);
            } while ((s5_0 != t7_1));
        } else {
            func_0017fff8(a0);
            sp_2 = (u32)frame;
        }
        func_0017fdf8(a0);
        *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) & 0xfffffffe);
        sp_3 = sp_2;
    } else {
        sp_3 = (u32)frame;
    }
    t6 = (a0 + 0xc0);
    t7_4 = (a0 + 0xa0);
    func_0017fef0(a0, *(f32*)((a0 + 0x30)));
    if ((t6 != t7_4)) {
        *(Q16*)(t6) = *(Q16*)(t7_4);
    }
    *(u32*)((a0 + 0x20)) = (*(u32*)((a0 + 0x20)) | 0x80);
    func_00180b98(a0);
    func_00180e28(a0);
    t7_5 = ((s32)((*(u32*)((a0 + 0x20)) & 0x2000)) != 0) ? ((*(u32*)((a0 + 0x20)) & 0xffffdfff) | 0x1000) : (*(u32*)((a0 + 0x20)) & 0xffffefff);
    *(u32*)((a0 + 0x20)) = t7_5;
    return func_00180e28(a0);
}
