// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00359110 asm("D_00359110");
extern "C" u32 D_00359150 asm("D_00359150");

// 0x0020e960 u_call0_0020e960()
// minilink-rodata 0x003707b0   (float literals live here in the original)
f32 lift_0020e960() asm("_Z16u_call0_0020e960v");
f32 lift_0020e960() {
    *(f32*)(&D_00359110) = 0.0f;
    *(u8*)(&D_00359150) = 0xffffff80;
    *(f32*)(((u32)&D_00359110 + 0x1c)) = 255.0f;
    *(f32*)(((u32)&D_00359110 + 0x3c)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x20)) = 0.7999999523162842f;
    *(f32*)(((u32)&D_00359110 + 0x38)) = 128.0f;
    *(u8*)(((u32)&D_00359150 + 1)) = 0xffffff80;
    *(f32*)(((u32)&D_00359110 + 4)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 8)) = 255.0f;
    *(f32*)(((u32)&D_00359110 + 0xc)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x10)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x14)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x18)) = 255.0f;
    *(f32*)(((u32)&D_00359110 + 0x24)) = -32.0f;
    *(f32*)(((u32)&D_00359110 + 0x28)) = 128.0f;
    *(f32*)(((u32)&D_00359110 + 0x2c)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x30)) = 0.0f;
    *(f32*)(((u32)&D_00359110 + 0x34)) = 128.0f;
    *(u8*)(((u32)&D_00359150 + 2)) = 0xffffff80;
    return 0.7999999523162842f;
}
