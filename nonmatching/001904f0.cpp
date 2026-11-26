// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016bc20(u32, u32, u32) asm("func_0016bc20");
extern "C" void func_0018a818(u32, u32, u32) asm("func_0018a818");
extern "C" void func_001902a8(u32, u32, u32) asm("func_001902a8");
extern "C" void func_0019ba60(u32, u32) asm("func_0019ba60");

// 0x001904f0 YS::TARGET::make_talk_camera_collision(YS::COLLISION*) const
// minilink-rodata 0x0036cd20   (float literals live here in the original)
f32 lift_001904f0(u32 a0, u32 a1) asm("_ZNK2YS6TARGET26make_talk_camera_collisionEPNS_9COLLISIONE");
f32 lift_001904f0(u32 a0, u32 a1) {
    u32 v0;
    func_0019ba60(*(u32*)(a0), a1);
    v0 = func_0016bc20(*(u32*)(a0), 0x13, *(u32*)((a0 + 4)));
    if (((s32)(v0) != 0)) {
        func_0018a818(a1, *(u32*)(a0), v0);
    } else {
        func_001902a8(a0, a1, v0);
    }
    *(f32*)((a1 + 0x1c)) = 1.0f;
    return 1.0f;
}
