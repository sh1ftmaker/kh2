// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c6e0 asm("D_0034c6e0");
extern "C" u32 D_0036b448 asm("D_0036b448");
extern "C" u32 D_0036b450 asm("D_0036b450");
extern "C" u32 func_0014b628(u32, u32) asm("func_0014b628");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_0014b468(u32, u32, u32) asm("func_0014b468");
extern "C" void func_0014b5e0(u32, u32) asm("func_0014b5e0");
extern "C" void func_0014b5e8(u32, u32, u32) asm("func_0014b5e8");
extern "C" void func_0014b608(u32, u32) asm("func_0014b608");
extern "C" void func_0014b610(u32, u32) asm("func_0014b610");
extern "C" void func_0014b618(u32, u32) asm("func_0014b618");
extern "C" void func_0014b630(u32, u32) asm("func_0014b630");
extern "C" void func_0014b7f0(u32) asm("func_0014b7f0");
extern "C" void func_0014c050(u32) asm("func_0014c050");

// 0x0015e4e0 func_0015e4e0
u32 func_0015e4e0(u32 a0) asm("_ZN2gm12SPRITEFROM3D11draw_commonERKN2kn16ProjectionCameraERKNS1_7FVectorE");
u32 func_0015e4e0(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034c6e0;
    *(u32*)((a0 + 4)) = 0;
    func_0014b7f0(a0 + 0x90);
    func_0014c050(a0 + 0x1a0);
    *(u32*)((a0 + 0x4b0)) = 0;
    func_0014b610(a0 + 0x90, (0x131 << 0x18) | 0x70);
    func_0014b608(a0 + 0x90, *(u64*)(&D_0036b448));
    func_0014b5e0(a0 + 0x90, 0x116);
    func_0014b630(a0 + 0x90, 0x60);
    func_0014b618(a0 + 0x90, 0x3cfe5);
    func_0014b5e8(a0 + 0x90, 0x80008, 0x4080408);
    func_0014b610(a0 + 0x1a0, (0x131 << 0x18) | 0x70);
    func_0014b5e0(a0 + 0x1a0, 0x156);
    func_0014b630(a0 + 0x1a0, 0x60);
    func_0014b618(a0 + 0x1a0, 0x3001d);
    func_0014b208(a0 + 0x1a0, 0x200, 0x1a0);
    func_0014b468(a0 + 0x1a0, 0x200, 0x1a0);
    return func_0014b628(a0 + 0x1a0, *(u64*)(&D_0036b450));
}
