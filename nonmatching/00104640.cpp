// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032b930 asm("D_0032b930");
extern "C" u32 D_0032ba90 asm("D_0032ba90");
extern "C" u32 D_003a6a80 asm("D_003a6a80");
extern "C" u32 D_003a6a90 asm("D_003a6a90");
extern "C" u32 D_003a6aa0 asm("D_003a6aa0");
extern "C" u32 D_003a6ab0 asm("D_003a6ab0");
extern "C" u32 D_003a6ac0 asm("D_003a6ac0");
extern "C" u32 D_003a6ad0 asm("D_003a6ad0");
extern "C" u32 D_003a6ae0 asm("D_003a6ae0");
extern "C" u32 D_003a6ae4 asm("D_003a6ae4");
extern "C" u32 D_003a6ae8 asm("D_003a6ae8");
extern "C" u32 D_003a6aec asm("D_003a6aec");

// 0x00104640 wtarget_00104640(unsigned int, unsigned int, unsigned int, unsigned int)
// minilink-rodata 0x00369e40   (float literals live here in the original)
void lift_00104640(u32 a0, u32 a1) asm("_Z16wtarget_00104640jjjj");
void lift_00104640(u32 a0, u32 a1) {
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(((u32)&D_003a6a80 + 0xc)) = 0.0f;
            *(f32*)(&D_003a6a80) = 0.0f;
            *(f32*)(((u32)&D_003a6a80 + 4)) = 1.0f;
            *(f32*)(((u32)&D_003a6a80 + 8)) = 0.0f;
        }
        if ((a1 == 0xffff)) {
            if ((a0 == 1)) {
                *(f32*)(&D_003a6a90) = 0.0f;
                *(f32*)(((u32)&D_003a6a90 + 0xc)) = 0.0f;
                *(f32*)(((u32)&D_003a6a90 + 8)) = 0.0f;
                *(f32*)(((u32)&D_003a6a90 + 4)) = -1.0f;
            }
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(((u32)&D_003a6aa0 + 0xc)) = 0.0f;
            *(f32*)(&D_003a6aa0) = -1.0f;
            *(f32*)(((u32)&D_003a6aa0 + 4)) = 0.0f;
            *(f32*)(((u32)&D_003a6aa0 + 8)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(((u32)&D_003a6ab0 + 0xc)) = 0.0f;
            *(f32*)(&D_003a6ab0) = 1.0f;
            *(f32*)(((u32)&D_003a6ab0 + 4)) = 0.0f;
            *(f32*)(((u32)&D_003a6ab0 + 8)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a6ac0) = 0.0f;
            *(f32*)(((u32)&D_003a6ac0 + 0xc)) = 0.0f;
            *(f32*)(((u32)&D_003a6ac0 + 4)) = 0.0f;
            *(f32*)(((u32)&D_003a6ac0 + 8)) = 1.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(((u32)&D_003a6ad0 + 0xc)) = 0.0f;
            *(f32*)(&D_003a6ad0) = 0.0f;
            *(f32*)(((u32)&D_003a6ad0 + 8)) = -1.0f;
            *(f32*)(((u32)&D_003a6ad0 + 4)) = 0.0f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a6ae0) = 1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a6ae4) = -1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a6ae8) = -1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(f32*)(&D_003a6aec) = 1.570796251296997f;
        }
    }
    if ((a1 == 0xffff)) {
        if ((a0 == 1)) {
            *(u32*)(&D_0032ba90) = (u32)&D_0032b930;
            *(u32*)(((u32)&D_0032ba90 + 0x14)) = a0;
            *(u32*)(((u32)&D_0032ba90 + 0x18)) = 0x27100;
            *(u32*)(((u32)&D_0032ba90 + 0x28)) = 0x3000;
            *(u8*)(((u32)&D_0032ba90 + 8)) = 0x47;
            *(u32*)(((u32)&D_0032ba90 + 4)) = 0;
            *(u32*)(((u32)&D_0032ba90 + 0x1c)) = 0;
            *(u32*)(((u32)&D_0032ba90 + 0x20)) = 0;
            *(u32*)(((u32)&D_0032ba90 + 0x24)) = 0;
        }
    }
    return;
}
