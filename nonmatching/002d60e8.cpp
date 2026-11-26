// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 func_002d1878(u32) asm("func_002d1878");

// 0x002d60e8 func_002d60e8
// minilink-rodata 0x00375b20   (float literals live here in the original)
f32 func_002d60e8(u32 a0) asm("_ZN2Ti11MGOarashiPo18get_separate_speedEv");
f32 func_002d60e8(u32 a0) {
    u32 s0;
    u32 s4;
    u32 s1;
    u32 s3;
    u32 v0;
    f32 f0;
    s0 = *(u32*)(&D_00361f60);
    s4 = func_002d1878(*(u32*)(&D_00361f60));
    s1 = func_002d1878(s0);
    s3 = func_002d1878(s0);
    v0 = func_002d1878(s0);
    if ((*(f32*)((a0 + 0xb34)) < *(f32*)((s1 + 0xa0)))) {
        v0 = *(f32*)((s4 + 0x9c));
    } else {
        f0 = (*(f32*)((a0 + 0xb34)) < (*(f32*)((s1 + 0xa0)) + *(f32*)((s3 + 0xa4)))) ? ((*(f32*)((s4 + 0x9c)) * (1.0f - ((*(f32*)((a0 + 0xb34)) - *(f32*)((s1 + 0xa0))) / *(f32*)((s3 + 0xa4))))) + (*(f32*)((v0 + 0xa8)) * ((*(f32*)((a0 + 0xb34)) - *(f32*)((s1 + 0xa0))) / *(f32*)((s3 + 0xa4))))) : *(f32*)((v0 + 0xa8));
        v0 = f0;
    }
    return v0;
}
