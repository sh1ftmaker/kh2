// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003512e8 asm("D_003512e8");
extern "C" u32 D_003638d0 asm("D_003638d0");
extern "C" f32 func_0016bd60(u32, u32) asm("func_0016bd60");
extern "C" void func_00169398(u32, u32, u32, u32, u32, f32) asm("func_00169398");

// 0x001bf168 func_001bf168
// minilink-rodata 0x0036dc90   (float literals live here in the original)
void func_001bf168(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) asm("func_001bf168");
void func_001bf168(u32 a0, u32 a1, u32 a2, u32 a3, f32 fa0) {
    u32 t6;
    f32 f1;
    f32 f0;
    t6 = (*(u32*)(&D_003638d0) * 0x10dcd);
    *(u32*)(&D_003638d0) = t6;
    f1 = (f32)(t6);
    f0 = (f1 * 2.3283064365386963e-10f);
    func_00169398(a0, *(u32*)(a1), a1, 4, a2, -3.1415927410125732f + (f0 * 6.2831854820251465f));
    *(u32*)((a0 + 0x9b4)) = a3;
    *(f32*)((a0 + 0x3c)) = fa0;
    *(f32*)((a0 + 0x9b8)) = fa0;
    *(u32*)((a0 + 0x588)) = (*(u32*)((a0 + 0x588)) | 0x40000);
    *(u32*)(a0) = (u32)&D_003512e8;
    *(u32*)((a0 + 0x108)) = (*(u32*)((a0 + 0x108)) | 2);
    *(u32*)((a0 + 0x9e0)) = 0;
    *(u32*)((a0 + 0x9e4)) = 0;
    *(u32*)((a0 + 0x9e8)) = 0;
    func_0016bd60(a0, 0xc);
    return;
}
