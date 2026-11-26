// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003628f0 asm("D_003628f0");
extern "C" u32 func_00181500(u32) asm("func_00181500");
extern "C" u32 func_002db968(u32, u32) asm("func_002db968");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_002d00a0(u32) asm("func_002d00a0");

// 0x002dba40 func_002dba40
u32 func_002dba40(u32 a0) asm("_ZN2Ti14MGHachimitsuPo15_OVR_initializeEv");
u32 func_002dba40(u32 a0) {
    f32 loc_0;
    f32 loc_4;
    f32 loc_8;
    f32 loc_c;
    func_002d00a0(a0);
    *(u8*)(((u32)&D_003628f0 + 1)) = (0x15 - ((u32)(func_00181500(0x2437)) < (u32)(1)));
    func_0016bd60(a0, 3);
    loc_0 = 0.0f;
    loc_4 = 0.0f;
    loc_8 = 0.0f;
    loc_c = 0.0f;
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 1);
    func_0016b070(a0, (u32)&loc_0);
    *(f32*)((a0 + 0xbf0)) = 0.0f;
    return func_002db968(a0, 1);
}
