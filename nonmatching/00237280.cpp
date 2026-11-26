// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_002373a8(u32, u32, u32) asm("func_002373a8");
extern "C" void func_00237680(u32, u32) asm("func_00237680");
extern "C" void func_00237740(u32, f32, f32, f32) asm("func_00237740");
extern "C" void func_00237a68(u32, f32, f32, f32) asm("func_00237a68");
extern "C" void func_00237ad8(u32, u32) asm("func_00237ad8");

// 0x00237280 func_00237280
// minilink-rodata 0x00371478   (float literals live here in the original)
u32 func_00237280(u32 a0, u32 a1, u32 a2) asm("func_00237280");
u32 func_00237280(u32 a0, u32 a1, u32 a2) {
    *(u32*)((a0 + 4)) = (a1 + *(u32*)((a1 + 0xc)));
    *(u32*)((a0 + 8)) = (a1 + *(u32*)((a1 + 0x14)));
    *(u32*)((a0 + 0xc)) = (a1 + *(u32*)((a1 + 0x1c)));
    *(u32*)((a0 + 0x34)) = *(u32*)((a1 + 8));
    *(u32*)((a0 + 0x38)) = *(u32*)((a1 + 0x10));
    *(u32*)((a0 + 0x3c)) = *(u32*)((a1 + 0x18));
    *(u32*)((a0 + 0x10)) = ((((*(u32*)((a0 + 0x10)) | 7) & 0xfffffff7) & 0xffffffef) & 0xffffffdf);
    *(u32*)((a0 + 0x40)) = a2;
    *(u32*)((a0 + 0x68)) = 0xffffffff;
    *(f32*)((a0 + 0x44)) = 1.0f;
    *(u32*)((a0 + 0x48)) = 0;
    *(u32*)((a0 + 0x14)) = 0;
    *(u32*)((a0 + 0x18)) = 0;
    func_002373a8(a0, a1, a2);
    func_00237680(a0, 0);
    func_00237740(a0, 0.0f, 0.0f, 0.0f);
    func_00237a68(a0, 1.0f, 1.0f, 1.0f);
    *(u32*)((a0 + 0x8c)) = 0;
    *(u32*)((a0 + 0x90)) = 0;
    *(u32*)((a0 + 0x88)) = 0x80808080;
    *(u32*)((a0 + 0x94)) = 0;
    *(u32*)((a0 + 0x98)) = 0;
    func_00237ad8(a0, 0);
    return 1;
}
