// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f620 asm("D_0035f620");
extern "C" u32 D_0035f628 asm("D_0035f628");
extern "C" u32 D_0035f62c asm("D_0035f62c");
extern "C" void func_002acda8() asm("func_002acda8");
extern "C" void func_002aceb0() asm("func_002aceb0");
extern "C" void func_002acf48() asm("func_002acf48");
extern "C" void func_002ae280(u32, u32) asm("func_002ae280");

// 0x002ad018 wtarget_002ad018(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00374c40   (float literals live here in the original)
f32 lift_002ad018() asm("_Z16wtarget_002ad018jjjj");
f32 lift_002ad018() {
    u32 loc_4;
    u32 loc_0;
    f32 f1;
    f32 f0;
    if (((s32)(*(u32*)(&D_0035f620)) == 0)) {
        func_002acda8();
    }
    func_002acf48();
    loc_4 = 0;
    loc_0 = 0;
    func_002ae280((u32)&loc_0, (u32)&loc_4);
    *(u32*)(&D_0035f62c) = (*(u32*)(&D_0035f62c) + loc_0);
    *(u32*)(&D_0035f628) = (*(u32*)(&D_0035f628) + loc_4);
    func_002aceb0();
    f1 = ((s32)(*(u32*)(&D_0035f62c)) >= 0) ? (f32)(*(s32*)(&D_0035f62c)) : ((f32)((s32)(((*(u32*)(&D_0035f62c) & 1) | (*(u32*)(&D_0035f62c) >> 1)))) + (f32)((s32)(((*(u32*)(&D_0035f62c) & 1) | (*(u32*)(&D_0035f62c) >> 1)))));
    f0 = ((s32)(*(u32*)(&D_0035f628)) >= 0) ? (f32)(*(s32*)(&D_0035f628)) : ((f32)((s32)(((*(u32*)(&D_0035f628) & 1) | (*(u32*)(&D_0035f628) >> 1)))) + (f32)((s32)(((*(u32*)(&D_0035f628) & 1) | (*(u32*)(&D_0035f628) >> 1)))));
    return ((f1 / f0) * 100.0f);
}
