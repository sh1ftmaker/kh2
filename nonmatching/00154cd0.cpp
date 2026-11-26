// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a838 asm("D_0034a838");
extern "C" f32 func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" f32 func_0017ce10(u32, u32, f32) asm("func_0017ce10");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");
extern "C" void func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");

// 0x00154cd0 func_00154cd0
// minilink-rodata 0x0036b278   (float literals live here in the original)
void func_00154cd0(u32 a0, u32 a1, f32 fa0) asm("func_00154cd0");
void func_00154cd0(u32 a0, u32 a1, f32 fa0) {
    u32 s3;
    u32 s4;
    u32 s5;
    u32 s6;
    f32 f20;
    if ((fa0 < *(f32*)(&D_0034a838))) {
        s3 = 0xffffffc0;
        s4 = 0xffffffc0;
        s5 = 0x40;
        s6 = 0x40;
    } else {
        s3 = 0;
        s4 = 0;
        s5 = 0;
        s6 = 0;
    }
    f20 = func_0017ce10(a0, a1, (fa0 * 3.141592502593994f) + -1.570796251296997f);
    func_00139d78((a0 + (a1 * 0x250)) + 0xa10);
    func_0013edd0((a0 + (a1 * 0x250)) + 0xa30, f20);
    func_00139d78((a0 + (a1 * 0x250)) + 0xa10);
    func_0014b1e0((a0 + (a1 * 0x250)) + 0xb50, (s32)((s4 << 0x10)) >> 0x10, (s32)((s3 << 0x10)) >> 0x10);
    func_0014b208((a0 + (a1 * 0x250)) + 0xb50, s6 & 0xffff, s5 & 0xffff);
    return;
}
