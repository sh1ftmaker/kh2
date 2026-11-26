// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00186548(u32, u32, f32) asm("func_00186548");
extern "C" u32 func_001866a0(u32, u32, f32) asm("func_001866a0");
extern "C" u32 func_001866f0(u32, u32, f32) asm("func_001866f0");
extern "C" u32 func_0019c090(u32, u32, f32) asm("func_0019c090");
extern "C" void func_001a2a18(u32, u32, f32) asm("func_001a2a18");

// 0x001863a8 func_001863a8
void func_001863a8(u32 a0, u32 a1, f32 fa0) asm("func_001863a8");
void func_001863a8(u32 a0, u32 a1, f32 fa0) {
    u32 t7;
    u32 t7_0;
    u32 t5;
    t7 = *(u32*)((*(u32*)((a0 + 0xc)) + 8));
    if (((s32)((t7 & 0x10)) != 0)) {
        func_001866f0(a0, a1, fa0);
        return;
    } else {
        if (((s32)(func_0019c090(a0, a1, fa0)) != 0)) {
            func_001866a0(a0, a1, fa0);
            return;
        } else {
            t7_0 = *(u32*)((*(u32*)((a0 + 0xc)) + 8));
            if (((t7_0 & 2) == 0)) {
                t5 = 0;
            } else {
                t5 = ((u32)(0) < (u32)((t7_0 & 0x40)));
            }
            if (((s32)((t5 & 0xff)) != 0)) {
                func_001a2a18(a0, a1, fa0);
            }
            func_00186548(a0, a1, fa0);
            return;
        }
    }
}
