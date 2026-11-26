// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_002be6e8 asm("D_002be6e8");
extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 D_01e2bc20 asm("D_01e2bc20");
extern "C" u32 D_01e2bc30 asm("D_01e2bc30");
extern "C" f32 func_0017f488(u32, u32, f32, f32) asm("func_0017f488");
extern "C" u32 func_0016b740(u32) asm("func_0016b740");
extern "C" void func_0016b070(u32, u32) asm("func_0016b070");
extern "C" void func_001c0d38(u32, u32, u32, u32) asm("func_001c0d38");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x002be630 func_002be630
// minilink-rodata 0x00375004   (float literals live here in the original)
void func_002be630() asm("_ZN8worldmap8Libretto6gotoHbEv");
void func_002be630() {
    u32 s0;
    s0 = *(u32*)(&D_0034e948);
    func_001c0d38(*(u32*)(&D_0034e948), func_0016b740(0x3a3), 0x4002, 0);
    if (((s32)(*(s8*)(&D_01e2bc20)) == 0)) {
        *(u8*)(&D_01e2bc20) = 1;
        *(f32*)(&D_01e2bc30) = 0.0f;
        *(f32*)(((u32)&D_01e2bc30 + 0xc)) = 0.0f;
        *(f32*)(((u32)&D_01e2bc30 + 4)) = 3.1415927410125732f;
        *(f32*)(((u32)&D_01e2bc30 + 8)) = 0.0f;
        func_002fd188((u32)&D_002be6e8);
    }
    func_0016b070(s0, (u32)&D_01e2bc30);
    func_0017f488(s0 + 0x140, 0x9c, 0.0f, 0.0f);
    return;
}
