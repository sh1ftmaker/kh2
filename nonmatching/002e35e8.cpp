// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_01e2be20 asm("D_01e2be20");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");
extern "C" void func_002cba88(u32, u32, u32, u32, f32, f32) asm("func_002cba88");

// 0x002e35e8 func_002e35e8
void func_002e35e8(u32 a0) asm("_ZN2Ti19trap_get_path_dir_rEP8BD_VALUE");
void func_002e35e8(u32 a0) {
    u8 frame[32];
    u32 s2;
    u32 s1;
    if (((s32)(*(u32*)((*(u32*)((*(u32*)(a0) + 4)) + 0x508))) != 0)) {
        s2 = *(u32*)((*(u32*)(a0) + 4));
        s1 = func_0016c028(*(u32*)((*(u32*)(a0) + 4)));
        func_0016af58((u32)frame + 0x10, s2);
        func_002cba88((u32)frame, *(u32*)((s2 + 0x508)), s1, (u32)frame + 0x10, *(f32*)((a0 + 4)), *(f32*)((a0 + 8)));
        if (((u32)frame != (u32)&D_01e2be20)) {
            *(Q16*)((u32)&D_01e2be20) = *(Q16*)((u32)frame);
        }
        *(u32*)(a0) = (u32)&D_01e2be20;
    }
    return;
}
