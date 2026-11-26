// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00287df0(u32, u32, u32, u32, u32) asm("func_00287df0");
extern "C" u32 func_002891e8(u32) asm("func_002891e8");
extern "C" u32 func_00289310(u32) asm("func_00289310");
extern "C" u32 func_00289380(u32) asm("func_00289380");
extern "C" u32 func_002ca0a8() asm("func_002ca0a8");
extern "C" u32 func_002ca5b8(u32) asm("func_002ca5b8");
extern "C" void func_002cac40(u32) asm("func_002cac40");

// 0x002ca4c0 dk::WM_GLANDING::select()
u32 lift_002ca4c0(u32 a0) asm("_ZN2dk11WM_GLANDING6selectEv");
u32 lift_002ca4c0(u32 a0) {
    u32 s0;
    u32 v0;
    u32 t7;
    s0 = func_00289380(*(u32*)((a0 + 0xbc)));
    v0 = func_00287df0(s0, func_00289310(*(u32*)((a0 + 0xbc))), 0, 0, 1);
    if ((s0 != 0xfffffffe)) {
        if (((s32)(((s32)(s0) < (s32)(-1))) != 0)) {
            t7 = 0xfffffffc;
        } else {
            t7 = 0xffffffff;
        }
        if ((s0 != t7)) {
            if (((s32)(func_002891e8(*(u32*)((a0 + 0xbc)))) == 0)) {
                func_002cac40(2);
                *(u32*)((a0 + 0x18)) = (*(u32*)((a0 + 0x18)) | 1);
                *(u32*)((a0 + 0x284)) = 1;
                func_002ca5b8(a0);
                return func_002ca0a8();
            } else {
                func_002cac40(2);
                *(u32*)((a0 + 0x284)) = 0;
                return func_002ca5b8(a0);
            }
        } else {
            return v0;
        }
    } else {
        func_002cac40(4);
        *(u32*)((a0 + 0x284)) = 0;
        return func_002ca5b8(a0);
    }
}
