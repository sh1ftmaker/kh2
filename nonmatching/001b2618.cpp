// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" f32 func_001b2380(u32, u32) asm("func_001b2380");
extern "C" f32 func_001b2520(u32, u32) asm("func_001b2520");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_00182e08() asm("func_00182e08");

// 0x001b2618 func_001b2618
// minilink-rodata 0x0036d9d0   (float literals live here in the original)
f32 func_001b2618() asm("func_001b2618");
f32 func_001b2618() {
    u8 frame[16];
    u32 s1;
    u32 v0;
    u32 s2;
    u32 s1_0;
    f32 f20;
    f32 f1;
    f32 f0;
    f32 f0_1;
    u32 sp;
    s1 = func_00182e08();
    v0 = func_001050d8(0x1c);
    func_001b2380(v0, *(u16*)((s1 + 2)));
    if (((s32)(*(u16*)((s1 + 2))) != 0)) {
        s2 = 0;
        s1_0 = s1;
        f20 = 1.0f;
        f1 = *(f32*)((s1 + 8));
        do {
            *(f32*)((u32)frame) = *(f32*)((s1 + 8));
            *(f32*)(((u32)frame + 4)) = *(f32*)((s1 + 0xc));
            *(f32*)(((u32)frame + 8)) = *(f32*)((s1 + 0x10));
            *(f32*)(((u32)frame + 0xc)) = f20;
            func_001b2520(v0, (u32)frame);
            f0 = func_001b2520(v0, (u32)frame);
            s1 = (s1 + 0xc);
            s2 = (s2 + 1);
        } while (((s32)(s2) < (s32)(*(u16*)((s1_0 + 2)))));
        f0_1 = f0;
    } else {
        f0_1 = func_001b2380(v0, *(u16*)((s1 + 2)));
        sp = (u32)frame;
    }
    return f0_1;
}
