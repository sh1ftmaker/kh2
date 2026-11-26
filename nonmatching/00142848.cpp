// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00141970(u32) asm("func_00141970");
extern "C" void func_00141c18(u32, u32, u32, u32, u32) asm("func_00141c18");
extern "C" void func_00141c38(u32, u32, u32, u32, u32) asm("func_00141c38");
extern "C" void func_00144490(u32, u32, f32, f32, f32, f32, f32, f32) asm("func_00144490");
extern "C" void func_00144e30(u32) asm("func_00144e30");
extern "C" void func_00144e50(u32, u32, u32) asm("func_00144e50");

// 0x00142848 dk::OctCollFile::selectDownAllPolygon(dk::CollisionParam*)
// minilink-rodata 0x0036aef0   (float literals live here in the original)
f32 lift_00142848(u32 a0, u32 a1) asm("_ZN2dk11OctCollFile20selectDownAllPolygonEPNS_14CollisionParamE");
f32 lift_00142848(u32 a0, u32 a1) {
    u8 frame[64];
    func_00144490((u32)frame, a1, *(f32*)((a1 + 0x30)), *(f32*)((a1 + 0x34)) - *(f32*)((a1 + 0x6c)), *(f32*)((a1 + 0x38)), *(f32*)((a1 + 0x30)), *(f32*)((a1 + 0x34)) + 320000.0f, *(f32*)((a1 + 0x38)));
    func_00144e30((u32)frame + 0x20);
    func_00144e50((u32)frame + 0x20, (u32)frame, func_00141970(a0));
    *(u16*)(((u32)frame + 0x30)) = 0;
    func_00141c18(a0, 0, 0, 0, 0);
    func_00141c38(a0, 0, (u32)frame + 0x20, (u32)frame + 0x30, 0xf);
    return *(u16*)(((u32)frame + 0x30));
}
