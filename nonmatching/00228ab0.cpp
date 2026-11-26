// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00224910() asm("func_00224910");
extern "C" u32 func_0022b720() asm("func_0022b720");
extern "C" u32 func_0022b9e0() asm("func_0022b9e0");
extern "C" void func_001386e0(u32, u32, u32, u32, u32, u32) asm("func_001386e0");
extern "C" void func_001396b0(u32) asm("func_001396b0");
extern "C" void func_00229430(u32, u32) asm("func_00229430");
extern "C" void func_0031a260(u32, u32) asm("func_0031a260");

// 0x00228ab0 func_00228ab0
void func_00228ab0(u32 a0) asm("_ZN2sa14MUSICAL_GAUGE36createEv");
void func_00228ab0(u32 a0) {
    u32 s0;
    u32 v0;
    u32 s3;
    u32 s2;
    func_00229430(a0, 0xaf0);
    s0 = func_0022b9e0();
    v0 = func_0022b720();
    s3 = (a0 + 0x18);
    func_001386e0(s3, 0xaf0, s0, v0, 0x1c, 0xb);
    *(u32*)((s3 + 0x188)) = 0x1d;
    s2 = (a0 + 0x1b0);
    func_001386e0(s2, 0xaf0, s0, v0, 0x17, 0xb);
    *(u32*)((s2 + 0x18c)) = s3;
    func_001396b0(s2);
    if (((s32)(*(u32*)((s2 + 0x18c))) != 0)) {
        *(u32*)((s2 + 0x190)) = 0;
        func_001396b0(s2);
        if (((s32)(*(u32*)((s2 + 0x190))) != 0)) {
            func_0031a260(s2, 0);
        }
    }
    *(u32*)((s3 + 0x18c)) = 0;
    func_001396b0(s3);
    if (((s32)(*(u32*)((s3 + 0x18c))) != 0)) {
        *(u32*)((s3 + 0x190)) = 0;
        func_001396b0(s3);
        if (((s32)(*(u32*)((s3 + 0x190))) != 0)) {
            func_0031a260(s3, 0);
        }
    }
    *(f32*)((a0 + 0x4e0)) = 0.0f;
    *(f32*)((a0 + 0x4e4)) = 0.0f;
    *(u32*)((a0 + 0x4e8)) = func_00224910();
    return;
}
