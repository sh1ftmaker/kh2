// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003109e0 asm("D_003109e0");
extern "C" u32 D_01e3b300 asm("D_01e3b300");
extern "C" u32 func_0030edb0(u32, u32, u32) asm("func_0030edb0");
extern "C" u32 func_00310048() asm("func_00310048");
extern "C" void func_0030ee00() asm("func_0030ee00");
extern "C" void func_003102e0(u32) asm("func_003102e0");
extern "C" void func_00310768(u32, u32, u32, u32) asm("func_00310768");

// 0x00310a40 func_00310a40
u32 func_00310a40(u32 a0, u32 a1, u32 a2) asm("func_00310a40");
u32 func_00310a40(u32 a0, u32 a1, u32 a2) {
    u32 s0;
    u32 s3;
    u32 s3_0;
    u32 v0;
    u32 s1;
    u32 s1_1;
    u32 v0_2;
    u32 v0_3;
    u32 v0_4;
    if (((s32)(a1) == 0)) {
        v0_4 = 0x80000016;
    } else {
        s0 = *(u32*)(&D_01e3b300);
        if (((s32)(*(u32*)(&D_01e3b300)) != 0)) {
            *(u32*)(&D_01e3b300) = *(u32*)(*(u32*)(&D_01e3b300));
        }
        if (((s32)(s0) == 0)) {
            if (((s32)(func_0030edb0(a0, a1, a2)) != 0)) {
                s3 = func_0030edb0(a0, a1, a2);
                func_0030ee00();
            }
            v0_3 = 0x80008005;
        } else {
            s3_0 = func_0030edb0(a0, a1, a2);
            if (((s32)(func_00310048()) < 0)) {
                v0 = *(u32*)(&D_01e3b300);
                *(u32*)(&D_01e3b300) = s0;
                *(u32*)(s0) = v0;
                *(u32*)((s0 + 4)) = 0;
                s1 = func_00310048();
                if (((s32)(s3_0) != 0)) {
                    func_0030ee00();
                }
                v0_2 = s1;
            } else {
                *(u32*)((s0 + 8)) = a1;
                *(u32*)((s0 + 0xc)) = a2;
                *(u32*)((s0 + 4)) = func_00310048();
                s1_1 = func_00310048();
                func_00310768(func_00310048(), a0, (u32)&D_003109e0, s0);
                func_003102e0(s1_1);
                if (((s32)(s3_0) != 0)) {
                    func_0030ee00();
                }
                v0_2 = (((s0 << 4) | (s1_1 & 0xfe)) | 1);
            }
            v0_3 = v0_2;
        }
        v0_4 = v0_3;
    }
    return v0_4;
}
