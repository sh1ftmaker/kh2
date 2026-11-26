// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00354be0 asm("D_00354be0");
extern "C" u32 D_01d9e730 asm("D_01d9e730");
extern "C" u32 D_01d9e8c0 asm("D_01d9e8c0");
extern "C" void func_002f3cd8(u32, u32, u32) asm("func_002f3cd8");
extern "C" void func_002f3d08(u32, u32, u32) asm("func_002f3d08");
extern "C" void func_002f3f88(u32, u32) asm("func_002f3f88");
extern "C" void func_002f4000(u32, u32, u32) asm("func_002f4000");
extern "C" void func_002f40a0(u32, u32, f32) asm("func_002f40a0");

// 0x0020aec8 func_0020aec8
// minilink-rodata 0x003706b8   (float literals live here in the original)
f32 func_0020aec8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) asm("_Z10set_matrixPA4_fS0_P19PRyjMegaBirthFilterP19VRyjMegaBirthFilterP14_PARTICLE_DATA");
f32 func_0020aec8(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4) {
    f32 f20;
    func_002f4000(a1, a1, a2);
    *(f32*)(a1) = (*(f32*)((a4 + 0x38)) * *(f32*)(&D_00354be0));
    *(f32*)((a1 + 0x14)) = (*(f32*)((a4 + 0x3c)) * *(f32*)(((u32)&D_00354be0 + 4)));
    *(f32*)((a1 + 0x28)) = (*(f32*)((a4 + 0x38)) * *(f32*)(&D_00354be0));
    if (!((*(f32*)((a4 + 0x2c)) == 0.0f))) {
        func_002f40a0(a1, a1, (*(f32*)((a4 + 0x2c)) * 3.1415927410125732f) / 180.0f);
    }
    func_002f3f88(a1 + 0x30, a4);
    func_002f3cd8(a1 + 0x30, (u32)&D_01d9e730, a1 + 0x30);
    *(f32*)((a1 + 0x34)) = (*(f32*)((a1 + 0x34)) * *(f32*)((a2 + 0xa4)));
    *(f32*)((a1 + 0x34)) = ((*(f32*)((a1 + 0x34)) * *(f32*)((a2 + 0xa4))) + *(f32*)((a2 + 0xa8)));
    f20 = *(f32*)((a1 + 0x38));
    func_002f3d08(a1, (u32)&D_01d9e8c0, a1);
    return f20;
}
