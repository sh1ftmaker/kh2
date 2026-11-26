// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035037c asm("D_0035037c");
extern "C" u32 func_00196e88(u32, u32, u32, f32) asm("func_00196e88");
extern "C" u32 func_00224e90(u32) asm("func_00224e90");
extern "C" u32 func_00242ea8() asm("func_00242ea8");
extern "C" void func_00138480(u32) asm("func_00138480");
extern "C" void func_0014ce60(f32) asm("func_0014ce60");
extern "C" void func_001c1130(u32) asm("func_001c1130");
extern "C" void func_002bc798(u32) asm("func_002bc798");

// 0x00197828 func_00197828
u32 func_00197828(f32 fa0) asm("_ZN2YS5EVENT14StartMainEventEf");
u32 func_00197828(f32 fa0) {
    u32 v0;
    func_0014ce60(fa0);
    if ((((*(u16*)((*(u32*)((*(u32*)(&D_0035037c) + 0x3c)) + 2)) & 1) & 0xff) != 0)) {
        if (((s32)(func_00242ea8()) != 0)) {
            if (((s32)(func_00224e90(4)) != 0)) {
                func_00138480(0);
            }
        }
        func_001c1130(0x24);
    }
    if (((s32)((((*(u16*)((*(u32*)((*(u32*)(&D_0035037c) + 0x3c)) + 2)) >> 5) & 1) & 0xff)) == 0)) {
        func_002bc798(*(u32*)(&D_0035037c));
    }
    v0 = func_00196e88(*(u32*)(&D_0035037c), 5, 0, 0.0f);
    *(f32*)((*(u32*)(&D_0035037c) + 0x90)) = fa0;
    return v0;
}
