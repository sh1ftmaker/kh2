// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" void func_00237280(u32, u32) asm("func_00237280");
extern "C" void func_002373a8(u32) asm("func_002373a8");
extern "C" void func_00239d50(u32, f32) asm("func_00239d50");
extern "C" void func_00239da0(u32, f32) asm("func_00239da0");
extern "C" void func_00239df0(u32, f32) asm("func_00239df0");
extern "C" void func_00239e60(u32, f32, f32, f32) asm("func_00239e60");
extern "C" void func_00239fd0(u32, f32, f32, f32, f32) asm("func_00239fd0");

// 0x00239988 func_00239988
// minilink-rodata 0x003714b4   (float literals live here in the original)
u32 func_00239988(u32 a0, u32 a1) asm("func_00239988");
u32 func_00239988(u32 a0, u32 a1) {
    func_00237280(a0, a1);
    *(u32*)((a0 + 0x10)) = ((*(u32*)((a0 + 0x10)) & 0xfffffffe) & 0xfffffffb);
    *(u32*)((a0 + 0xb8)) = (*(u32*)((a0 + 0xb8)) & 0xfffffff7);
    *(u32*)((a0 + 0xb0)) = (a1 + *(u32*)((a1 + 0x24)));
    *(u32*)((a0 + 0xb4)) = (a1 + *(u32*)((a1 + 0x2c)));
    *(u32*)((a0 + 0xf4)) = *(u32*)((a1 + 0x20));
    *(u32*)((a0 + 0xb8)) = ((((*(u32*)((a0 + 0xb8)) & 0xfffffff7) & 0xfffffffe) & 0xfffffffd) & 0xfffffffb);
    *(u8*)((a0 + 0xbc)) = 0;
    *(u32*)((a0 + 0xc4)) = 0;
    *(u32*)((a0 + 0xc8)) = 0;
    *(u32*)((a0 + 0xcc)) = 0;
    *(u8*)((a0 + 0xd4)) = 0;
    *(f32*)((a0 + 0xd8)) = 1.0f;
    *(f32*)((a0 + 0xdc)) = 1.0f;
    *(u32*)((a0 + 0xe0)) = 0x80808080;
    *(u32*)((a0 + 0xe4)) = 0;
    *(u32*)((a0 + 0xe8)) = 0;
    *(u32*)((a0 + 0xec)) = 0;
    *(u32*)((a0 + 0xf0)) = 0;
    *(u32*)((a0 + 0xf8)) = *(u32*)((a1 + 0x28));
    *(u32*)((a0 + 0x100)) = 0;
    *(u32*)((a0 + 0x10c)) = 0;
    *(u32*)((a0 + 0x114)) = 0xffffffff;
    func_002373a8(a0);
    *(f32*)((a0 + 0x44)) = 1.0f;
    *(u32*)((a0 + 0x104)) = 0;
    func_00239fd0(a0, 1.0f, 1.0f, 1.0f, 1.0f);
    func_00239d50(a0, 0.0f);
    func_00239da0(a0, 0.0f);
    func_00239df0(a0, 0.0f);
    func_00239e60(a0, 1.0f, 1.0f, 1.0f);
    *(u32*)((a0 + 0xfc)) = 0;
    *(u32*)((a0 + 0x148)) = 0;
    *(u32*)((a0 + 0x14c)) = 0;
    return 1;
}
