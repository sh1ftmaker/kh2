// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002ef148 asm("D_002ef148");
extern "C" void func_00189f20(u32, u32, u32, f32) asm("func_00189f20");
extern "C" void func_002eef08(u32, u32, f32) asm("func_002eef08");
extern "C" void func_002ef180(u32, f32, f32) asm("func_002ef180");

// 0x002ef028 func_002ef028
void func_002ef028(u32 a0, f32 fa0) asm("func_002ef028");
void func_002ef028(u32 a0, f32 fa0) {
    u32 t7;
    u32 t7_0;
    u32 t3;
    u32 t2;
    u32 t5;
    f32 f1;
    u32 t7_1;
    u32 t7_2;
    t7 = *(u32*)((a0 + 8));
    if (((s32)(t7) != 0)) {
        t7_0 = *(u32*)(a0);
        if (((t7_0 & 1) == 0)) {
            *(f32*)((a0 + 0x10)) = (*(f32*)((a0 + 0x10)) + fa0);
            func_002ef180(a0, *(f32*)((a0 + 0x10)), *(f32*)((a0 + 0x10)) + fa0);
            if ((*(f32*)((a0 + 0x14)) <= *(f32*)((a0 + 0x10)))) {
                t3 = *(u32*)(((a0 + 0x18) + 4));
                t2 = *(u32*)((a0 + 0x18));
                if ((t3 != t2)) {
                    *(u32*)(((a0 + 0x18) + 4)) = ((t3 + 1) - (((s32)((((s32)((t3 + 1)) < (s32)(0)) ? (t3 + 4) : (t3 + 1))) >> 2) << 2));
                    func_002eef08(a0, *(u32*)((((a0 + 0x18) + (t3 << 3)) + 8)), *(f32*)((((a0 + 0x18) + (t3 << 3)) + 0xc)));
                } else {
                    t5 = *(u32*)((a0 + 8));
                    f1 = *(f32*)((a0 + 0x10));
                    *(f32*)((a0 + 0x10)) = ((f1 - *(f32*)((a0 + 0x14))) + ((u32(*)(u32))(*(u32*)((*(u32*)(t5) + 0x1c))))(t5));
                    func_002ef180(a0, ((u32(*)(u32))(*(u32*)((*(u32*)(t5) + 0x1c))))(t5), (f1 - *(f32*)((a0 + 0x14))) + ((u32(*)(u32))(*(u32*)((*(u32*)(t5) + 0x1c))))(t5));
                }
            }
        }
        t7_1 = *(u32*)((a0 + 0xc));
        if (((s32)(t7_1) != 0)) {
            func_00189f20(t7_1, (u32)&D_002ef148, *(u32*)((a0 + 4)), fa0);
        }
        t7_2 = *(u32*)(a0);
        *(u32*)(a0) = (t7_2 & 0xfffffffe);
    }
    return;
}
