// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034c6c8 asm("D_0034c6c8");
extern "C" u32 D_0036b458 asm("D_0036b458");
extern "C" u32 D_004f3820 asm("D_004f3820");
extern "C" u32 func_0014b628(u32, u32) asm("func_0014b628");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");
extern "C" void func_0014b220(u32, u32, u32, u32, u32) asm("func_0014b220");
extern "C" void func_0014b468(u32, u32, u32) asm("func_0014b468");
extern "C" void func_0014b5e0(u32, u32) asm("func_0014b5e0");
extern "C" void func_0014b608(u32, u32) asm("func_0014b608");
extern "C" void func_0014b610(u32, u32) asm("func_0014b610");
extern "C" void func_0014b618(u32, u32) asm("func_0014b618");
extern "C" void func_0014b630(u32, u32) asm("func_0014b630");
extern "C" void func_0014c050(u32) asm("func_0014c050");

// 0x0015e8c8 func_0015e8c8
u32 func_0015e8c8(u32 a0) asm("_ZN2gm11FRAMEBUFFER4InitEv");
u32 func_0015e8c8(u32 a0) {
    *(u32*)(a0) = (u32)&D_0034c6c8;
    *(u32*)((a0 + 4)) = 0;
    func_0014c050(a0 + 0x50);
    *(u32*)((a0 + 0x360)) = 0;
    func_0014b610((u32)&D_004f3820, (0x131 << 0x18) | 0x70);
    func_0014b608((u32)&D_004f3820, 0x80140);
    func_0014b5e0((u32)&D_004f3820, 6);
    func_0014b220((u32)&D_004f3820, 0, 0, 0, 0);
    func_0014b208((u32)&D_004f3820, 0x200, 0x1a0);
    func_0014b610(a0 + 0x50, (0x131 << 0x18) | 0x70);
    func_0014b5e0(a0 + 0x50, 0x156);
    func_0014b630(a0 + 0x50, 0x60);
    func_0014b618(a0 + 0x50, 0x3001d);
    func_0014b208(a0 + 0x50, 0x200, 0x1a0);
    func_0014b468(a0 + 0x50, 0x200, 0x1a0);
    return func_0014b628(a0 + 0x50, *(u64*)(&D_0036b458));
}
