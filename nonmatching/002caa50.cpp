// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001708f8(u32, u32) asm("func_001708f8");
extern "C" u32 func_0023f848(u32) asm("func_0023f848");
extern "C" u32 func_0023f908(u32, u32) asm("func_0023f908");
extern "C" u32 func_0023f948(u32, u32) asm("func_0023f948");
extern "C" u32 func_002ca3d0(u32, u32) asm("func_002ca3d0");
extern "C" void func_001391c8(u32, u32, u32) asm("func_001391c8");
extern "C" void func_0023eea0(u32, u32, u32, u32, u32, u32) asm("func_0023eea0");
extern "C" void func_0023ef50(u32) asm("func_0023ef50");
extern "C" void func_0023f0c8(u32, u32) asm("func_0023f0c8");
extern "C" void func_0023f800(u32, u32, u32) asm("func_0023f800");
extern "C" void func_0023fa08(u32, u32) asm("func_0023fa08");
extern "C" void func_002ca828(u32) asm("func_002ca828");

// 0x002caa50 dk::WM_GLANDING::create(char const*, int)
u32 lift_002caa50(u32 a0, u32 a1, u32 a2) asm("_ZN2dk11WM_GLANDING6createEPKci");
u32 lift_002caa50(u32 a0, u32 a1, u32 a2) {
    u8 frame[32];
    u32 v0;
    u32 s3;
    u32 s1;
    *(u32*)((a0 + 0x280)) = a2;
    *(u32*)((a0 + 0x288)) = 0;
    func_0023f800((u32)frame, a1, a2);
    v0 = func_001708f8(a1, 0xffffffff);
    *(u32*)((a0 + 0x27c)) = v0;
    func_0023fa08((u32)frame, v0);
    s3 = func_0023f948((u32)frame, 0);
    s1 = func_0023f908((u32)frame, 0);
    func_0023eea0(a0 + 0x1c, 0x7531, s3, s1, func_002ca3d0(a0, 0), 0);
    func_0023ef50(a0 + 0x1c);
    func_0023f0c8(a0 + 0x1c, func_002ca3d0(a0, 2));
    func_002ca828(a0);
    func_001391c8(a0, 0x7532, 0);
    return func_0023f848((u32)frame);
}
