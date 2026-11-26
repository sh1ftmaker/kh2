// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_00117588(u32, u32) asm("func_00117588");
extern "C" void func_0017ff68(u32, u32) asm("func_0017ff68");
extern "C" void func_00194648(u32, u32) asm("func_00194648");

// 0x00117808 func_00117808
// minilink-rodata 0x0036a800   (float literals live here in the original)
void func_00117808(u32 a0, u32 a1) asm("_ZN2kn6Stitch19set_screen_positionERKNS_7FVectorE");
void func_00117808(u32 a0, u32 a1) {
    u8 frame[16];
    *(u32*)((a0 + 0x630)) = (*(u32*)((a0 + 0x630)) | 1);
    if (((a0 + 0x640) != a1)) {
        *(Q16*)((a0 + 0x640)) = *(Q16*)(a1);
    }
    *(f32*)((a0 + 0x648)) = 1024.0f;
    *(f32*)((a0 + 0x65c)) = *(f32*)((a0 + 0x64c));
    if (((s32)((*(u32*)((*(u32*)((a0 + 4)) + 0x10c)) & 0x40)) == 0)) {
        func_00117588(a0, *(u32*)((a0 + 4)) + 0x140);
        func_00194648(*(u32*)((a0 + 4)), a0 + 0x6c0);
        *(f32*)((*(u32*)((a0 + 4)) + 0x698)) = 10000000.0f;
    }
    func_0017ff68((u32)frame, *(u32*)((a0 + 4)) + 0x140);
    *(f32*)((a0 + 0x64c)) = (*(f32*)((a0 + 0x64c)) - *(f32*)(((u32)frame + 0xc)));
    return;
}
