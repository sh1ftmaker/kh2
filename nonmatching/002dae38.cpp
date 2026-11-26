// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_00362698 asm("D_00362698");
extern "C" u32 func_002e7568(u32, u32, u32, f32) asm("func_002e7568");
extern "C" void func_0016ace0(u32, u32) asm("func_0016ace0");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");
extern "C" void func_002cf2b0(u32, u32) asm("func_002cf2b0");

// 0x002dae38 func_002dae38
// minilink-rodata 0x00375d04   (float literals live here in the original)
f32 func_002dae38(u32 a0) asm("_ZN2Ti18MGHachimitsuGopher7combineEv");
f32 func_002dae38(u32 a0) {
    u8 frame[16];
    func_001c0d38(a0, *(u32*)(&D_0034e948), 0x4000, 0);
    func_002cf2b0(a0 + 0xaf0, 1);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = -70.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016ace0(a0, (u32)frame);
    *(f32*)((u32)frame) = 0.0f;
    *(f32*)(((u32)frame + 4)) = 0.0f;
    *(f32*)(((u32)frame + 8)) = 0.0f;
    *(f32*)(((u32)frame + 0xc)) = 0.0f;
    func_0016b070(a0, (u32)frame);
    return func_002e7568(a0, 2, (u32)&D_00362698, 1.0f);
}
