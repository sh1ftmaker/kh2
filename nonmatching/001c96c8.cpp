// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" void func_0017c030(u32, u32, u32, u32) asm("func_0017c030");
extern "C" void func_0017c4c8(u32, u32) asm("func_0017c4c8");
extern "C" void func_0017f488(u32, u32, f32, f32) asm("func_0017f488");

// 0x001c96c8 func_001c96c8
void func_001c96c8(u32 a0, u32 a1, u32 a2) asm("_ZN2YS13ACTION_LKDASH10party_jumpEPNS_3OBJEb");
void func_001c96c8(u32 a0, u32 a1, u32 a2) {
    u8 frame[48];
    func_0017c030((u32)frame, a1, (u32)frame + 0x20, a2 & 0xff);
    if (((s32)((*(u32*)((a1 + 0x10c)) & 0x10)) != 0)) {
        *(f32*)(((u32)frame + 0xc)) = *(f32*)((*(u32*)((a1 + 0x12c)) + 0x24));
        *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((u32)frame);
        func_0017c4c8(a1, (u32)frame + 0x10);
        *(u8*)((a1 + 0x514)) = 5;
    } else {
        *(Q16*)(((u32)frame + 0x10)) = *(Q16*)((u32)frame);
        func_0017c4c8(a1, (u32)frame + 0x10);
    }
    func_0017f488(a1 + 0x140, *(u32*)(((u32)frame + 0x20)), 0.0f, 0.0f);
    *(u32*)((a1 + 0x100)) = 4;
    *(u32*)((a1 + 0x104)) = 5;
    return;
}
