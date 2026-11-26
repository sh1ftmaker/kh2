// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_0034e948 asm("D_0034e948");
extern "C" u32 func_0016c028(u32, u32) asm("func_0016c028");
extern "C" u32 func_0016e920(u32) asm("func_0016e920");
extern "C" void func_001a7888(u32, u32, u32, f32, f32, f32, f32) asm("func_001a7888");
extern "C" void func_001a78c0(u32, u32, u32, f32, f32, f32, f32) asm("func_001a78c0");

// 0x0019afd8 YS::UNIT_GROUP::RandomPosPlayer(unsigned int)
// minilink-rodata 0x0036d344   (float literals live here in the original)
void lift_0019afd8(u32 a0, u32 a1) asm("_ZN2YS10UNIT_GROUP15RandomPosPlayerEj");
void lift_0019afd8(u32 a0, u32 a1) {
    u8 frame[16];
    u32 v0;
    u8 t7;
    v0 = func_0016c028(*(u32*)(&D_0034e948), a1);
    if ((a0 != v0)) {
        *(Q16*)(a0) = *(Q16*)(v0);
    }
    *(f32*)((a0 + 4)) = (*(f32*)((a0 + 4)) + -200.0f);
    t7 = ((*(u16*)((func_0016e920(a1) + 0x48)) >> 3) & 1);
    if (((s32)(t7) != 0)) {
        func_001a78c0((u32)frame, a0, 0x10002, 150.0f, 450.0f, -100.0f, 100.0f);
    } else {
        func_001a7888((u32)frame, a0, 0x10001, 150.0f, 450.0f, -100.0f, 100.0f);
    }
    if ((a0 != (u32)frame)) {
        *(Q16*)(a0) = *(Q16*)((u32)frame);
    }
    return;
}
