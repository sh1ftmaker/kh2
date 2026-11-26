// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_003144b0(u32) asm("func_003144b0");
extern "C" u32 func_00227d10(u32) asm("func_00227d10");
extern "C" u32 func_002282f0(u32) asm("func_002282f0");
extern "C" u32 func_002f83f0(u32) asm("func_002f83f0");
extern "C" u32 func_00313b80(f32) asm("func_00313b80");
extern "C" void func_001ba028(u32) asm("func_001ba028");

// 0x0022e4f0 func_0022e4f0
void func_0022e4f0(u32 a0) asm("_ZN2sa5EVENT14set_mirror_seqERNS_10BIN_MIRROREP4TASK");
void func_0022e4f0(u32 a0) {
    u32 v0;
    u32 s0;
    u32 s0_0;
    u32 s0_1;
    if (((s32)(func_002282f0(*(s16*)((a0 + 4)))) == 0)) {
        v0 = func_00227d10(*(s16*)((a0 + 6)));
        func_001ba028(*(u32*)((v0 + 8)));
        s0 = *(u32*)((v0 + 8));
        *(f32*)((s0 + 0x30)) = func_003144b0(func_002f83f0(func_00313b80(*(f32*)((*(u32*)((v0 + 8)) + 0x30)))));
        if ((*(s16*)((a0 + 8)) != 0)) {
            *(f32*)((*(u32*)((v0 + 8)) + 0x30)) = -(*(f32*)((*(u32*)((v0 + 8)) + 0x30)));
        }
        s0_0 = *(u32*)((v0 + 8));
        *(f32*)((s0_0 + 0x34)) = func_003144b0(func_002f83f0(func_00313b80(*(f32*)((*(u32*)((v0 + 8)) + 0x34)))));
        if ((*(s16*)((a0 + 0xa)) != 0)) {
            *(f32*)((*(u32*)((v0 + 8)) + 0x34)) = -(*(f32*)((*(u32*)((v0 + 8)) + 0x34)));
        }
        s0_1 = *(u32*)((v0 + 8));
        *(f32*)((s0_1 + 0x38)) = func_003144b0(func_002f83f0(func_00313b80(*(f32*)((*(u32*)((v0 + 8)) + 0x38)))));
        if (((s32)(*(s16*)((a0 + 0xc))) != 0)) {
            *(f32*)((*(u32*)((v0 + 8)) + 0x38)) = -(*(f32*)((*(u32*)((v0 + 8)) + 0x38)));
        }
    }
    return;
}
