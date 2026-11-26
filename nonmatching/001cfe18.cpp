// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034e8b8 asm("D_0034e8b8");
extern "C" u32 D_0034ee08 asm("D_0034ee08");
extern "C" u32 D_00351eb8 asm("D_00351eb8");
extern "C" u32 D_00351ec0 asm("D_00351ec0");
extern "C" u32 D_00352360 asm("D_00352360");
extern "C" u32 func_00319fb0(u32) asm("func_00319fb0");
extern "C" void func_0019f9a8(u32) asm("func_0019f9a8");
extern "C" void func_001c0248(u32) asm("func_001c0248");
extern "C" void func_001c8d98(u32, u32) asm("func_001c8d98");
extern "C" void func_001c9b90() asm("func_001c9b90");
extern "C" void func_001d2710(u32) asm("func_001d2710");
extern "C" void func_00319f88(u32) asm("func_00319f88");

// 0x001cfe18 func_001cfe18
u32 func_001cfe18(u32 a0) asm("func_001cfe18");
u32 func_001cfe18(u32 a0) {
    *(u32*)(a0) = (u32)&D_00352360;
    func_001c8d98((u32)&D_00351eb8, 0);
    func_001c8d98((u32)&D_00351ec0, 4);
    func_001c9b90();
    func_001d2710(a0 + 0xb74);
    *(u32*)(a0) = (u32)&D_0034e8b8;
    func_00319f88(a0 + 0xb08);
    *(u32*)(a0) = (u32)&D_0034ee08;
    func_0019f9a8(a0 + 0xa08);
    func_001c0248(a0 + 0xa50);
    return func_00319fb0(a0);
}
