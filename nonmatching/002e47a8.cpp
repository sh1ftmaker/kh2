// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_002e44b8(u32) asm("func_002e44b8");
extern "C" f32 func_002e49a8(u32, u32) asm("func_002e49a8");
extern "C" f32 func_002f8870(f32) asm("func_002f8870");
extern "C" f32 func_002f8960(f32) asm("func_002f8960");
extern "C" f32 func_002f8aa0(f32) asm("func_002f8aa0");
extern "C" void func_002e3f58(u32) asm("func_002e3f58");
extern "C" void func_002e40a8(u32, u32, u32, f32) asm("func_002e40a8");
extern "C" void func_002e44c0(u32, f32) asm("func_002e44c0");

// 0x002e47a8 func_002e47a8
// minilink-rodata 0x00375fa4   (float literals live here in the original)
f32 func_002e47a8(u32 a0, u32 a1, u32 a2, f32 fa0) asm("func_002e47a8");
f32 func_002e47a8(u32 a0, u32 a1, u32 a2, f32 fa0) {
    u8 frame[16];
    f32 f20;
    f32 f21;
    f32 f22;
    f32 f20_0;
    f32 f0;
    f32 f1;
    func_002e40a8((u32)frame, a2, a2, fa0);
    if ((func_002e49a8(a1, (u32)frame) < 0.0f)) {
        func_002e44c0((u32)frame, -1.0f);
    }
    func_002e3f58(a0);
    f20 = func_002f8aa0((((*(f32*)(a1) * *(f32*)((u32)frame)) + (*(f32*)((a1 + 4)) * *(f32*)(((u32)frame + 4)))) + (*(f32*)((a1 + 8)) * *(f32*)(((u32)frame + 8)))) + (*(f32*)((a1 + 0xc)) * *(f32*)(((u32)frame + 0xc))));
    f21 = func_002f8960(func_002f8aa0((((*(f32*)(a1) * *(f32*)((u32)frame)) + (*(f32*)((a1 + 4)) * *(f32*)(((u32)frame + 4)))) + (*(f32*)((a1 + 8)) * *(f32*)(((u32)frame + 8)))) + (*(f32*)((a1 + 0xc)) * *(f32*)(((u32)frame + 0xc)))));
    f22 = func_002f8960(f20 * (1.0f - fa0));
    f20_0 = func_002f8960(f20 * fa0);
    if ((func_002f8870(f21) < 9.999999747378752e-06f)) {
        *(f32*)(a0) = ((*(f32*)(a1) * (1.0f - fa0)) + (*(f32*)((u32)frame) * fa0));
        *(f32*)((a0 + 4)) = ((*(f32*)((a1 + 4)) * (1.0f - fa0)) + (*(f32*)(((u32)frame + 4)) * fa0));
        f0 = ((*(f32*)((a1 + 0xc)) * (1.0f - fa0)) + (*(f32*)(((u32)frame + 0xc)) * fa0));
        f1 = ((*(f32*)((a1 + 8)) * (1.0f - fa0)) + (*(f32*)(((u32)frame + 8)) * fa0));
    } else {
        *(f32*)(a0) = (((*(f32*)(a1) * f22) + (*(f32*)((u32)frame) * f20_0)) * (1.0f / f21));
        *(f32*)((a0 + 4)) = (((*(f32*)((a1 + 4)) * f22) + (*(f32*)(((u32)frame + 4)) * f20_0)) * (1.0f / f21));
        f0 = (((*(f32*)((a1 + 0xc)) * f22) + (*(f32*)(((u32)frame + 0xc)) * f20_0)) * (1.0f / f21));
        f1 = (((*(f32*)((a1 + 8)) * f22) + (*(f32*)(((u32)frame + 8)) * f20_0)) * (1.0f / f21));
    }
    *(f32*)((a0 + 8)) = f1;
    *(f32*)((a0 + 0xc)) = f0;
    return func_002e44b8((u32)frame);
}
