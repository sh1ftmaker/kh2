// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00361f60 asm("D_00361f60");
extern "C" u32 D_00362380 asm("D_00362380");
extern "C" u32 D_00362388 asm("D_00362388");
extern "C" u32 func_002d1260() asm("func_002d1260");
extern "C" u32 func_002d1878(u32) asm("func_002d1878");
extern "C" u32 func_002e7340(u32, u32, u32, u32, f32, f32) asm("func_002e7340");
extern "C" void func_0017f540(u32, u32, f32, f32) asm("func_0017f540");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");
extern "C" void func_002e7568(u32, u32, u32, f32) asm("func_002e7568");

// 0x002d6518 func_002d6518
// minilink-rodata 0x00375b44   (float literals live here in the original)
void func_002d6518(u32 a0) asm("_ZN2Ti11MGOarashiPo7combineEv");
void func_002d6518(u32 a0) {
    u32 s2;
    u32 s0;
    if (((s32)(*(u32*)(&D_00361f60)) != 0)) {
        s2 = *(u32*)(&D_00361f60);
        func_0017f540(a0 + 0x140, 0, 0.0f, 0.0f);
        func_001c0d38(a0, func_002d1260(), 0x43, 0);
        func_002e7568(a0, 2, (u32)&D_00362380, 1.0f);
        s0 = func_002d1878(s2);
        func_002e7340(a0 + 0xb38, a0, 3, (u32)&D_00362388, *(f32*)((s0 + 0x100)), *(f32*)((func_002d1878(s2) + 0x104)));
        return;
    } else {
        return;
    }
}
