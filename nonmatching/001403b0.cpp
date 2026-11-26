// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_0013fca8(u32) asm("func_0013fca8");
extern "C" u32 func_0013ff08(u32, u32, f32) asm("func_0013ff08");
extern "C" u32 func_00140370(u32, u32) asm("func_00140370");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" void func_0013f5f0(u32) asm("func_0013f5f0");
extern "C" void func_0013f828(u32) asm("func_0013f828");
extern "C" void func_0013f888(u32, u32, u32) asm("func_0013f888");
extern "C" void func_00140210(u32, u32, f32) asm("func_00140210");

// 0x001403b0 func_001403b0
u32 func_001403b0(u32 a0) asm("func_001403b0");
u32 func_001403b0(u32 a0) {
    u32 s2;
    f32 f20;
    u32 s1;
    u32 v0;
    func_0013f5f0(a0);
    s2 = func_00167f18(0);
    f20 = *(f32*)(&D_00349e10);
    if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x44))) + 0x40))))(*(u32*)((a0 + 0x44)))) != 0)) {
        s1 = func_0013ff08(a0, s2, f20);
    } else {
        s1 = 0;
    }
    v0 = func_00140370(a0, s1);
    if (((s32)(v0) == 0)) {
        if ((*(u8*)((a0 + 0x3a)) == 1)) {
            func_00140210(a0, s2, f20);
        }
    }
    func_0013f828(a0);
    func_0013f888(a0, a0 + 0x80, v0);
    return func_0013fca8(a0);
}
