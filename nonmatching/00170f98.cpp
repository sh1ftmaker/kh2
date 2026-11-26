// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00175528 asm("D_00175528");
extern "C" u32 D_01c5f490 asm("D_01c5f490");
extern "C" u32 D_01c5f4a0 asm("D_01c5f4a0");
extern "C" u32 func_0016f000(u32, u32, f32) asm("func_0016f000");
extern "C" void func_002fd188(u32) asm("func_002fd188");

// 0x00170f98 func_00170f98
// minilink-rodata 0x0036c490   (float literals live here in the original)
void func_00170f98(u32 a0) asm("func_00170f98");
void func_00170f98(u32 a0) {
    if (((s32)(*(s8*)(&D_01c5f490)) == 0)) {
        *(f32*)(((u32)&D_01c5f4a0 + 4)) = 0.0f;
        *(f32*)(((u32)&D_01c5f4a0 + 8)) = 0.0f;
        *(f32*)(((u32)&D_01c5f4a0 + 0xc)) = 1.0f;
        *(u8*)(&D_01c5f490) = 1;
        *(f32*)(&D_01c5f4a0) = 0.0f;
        func_002fd188((u32)&D_00175528);
    }
    *(u32*)(a0) = func_0016f000(*(u32*)(a0), (u32)&D_01c5f4a0, 3.1415927410125732f);
    return;
}
