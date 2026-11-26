// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_00107330(u32, f32, f32, f32) asm("func_00107330");
extern "C" f32 func_002dc7f8(u32) asm("func_002dc7f8");
extern "C" f32 func_002dceb0(u32) asm("func_002dceb0");
extern "C" f32 func_002dcf18(u32) asm("func_002dcf18");
extern "C" f32 func_002f87c0(f32) asm("func_002f87c0");
extern "C" f32 func_002f8960(f32) asm("func_002f8960");
extern "C" u32 func_00106a18(u32) asm("func_00106a18");
extern "C" u32 func_00106a60(u32) asm("func_00106a60");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_002dc7c8(u32) asm("func_002dc7c8");
extern "C" void func_00106c08(u32) asm("func_00106c08");
extern "C" void func_00106de8(u32, u32, f32) asm("func_00106de8");
extern "C" void func_00107340(u32, f32, f32, f32) asm("func_00107340");

// 0x002dcf90 func_002dcf90(int)
// minilink-rodata 0x00375db0   (float literals live here in the original)
f32 lift_002dcf90(u32 a0) asm("_Z13func_002dcf90i");
f32 lift_002dcf90(u32 a0) {
    u8 frame[48];
    u32 v0;
    u32 v0_0;
    f32 f21;
    u32 s1;
    u32 s0;
    f32 f20;
    f32 f21_1;
    f32 f0;
    f32 f0_2;
    func_002dcf18(a0);
    if (((s32)(*(u8*)(((a0 + 0x8000) + 0x60))) == 0)) {
        if (((s32)(func_002dc7f8(a0)) != 0)) {
            v0 = func_00106a18(1);
            func_00106de8(v0, 1, *(f32*)((a0 + 0x64)));
            func_00106c08(v0);
            v0_0 = func_00106a60(1);
            *(u32*)(((u32)frame + 0x18)) = 0;
            *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(func_0016c028(func_002dc7f8(a0)));
            *(u32*)(((u32)frame + 8)) = 0;
            *(f32*)(((u32)frame + 4)) = ((*(f32*)(((u32)frame + 0x24)) + 300.0f) - 80.0f);
            f21 = (*(f32*)(((u32)frame + 0x24)) + 300.0f);
            s1 = func_002dc7c8(a0);
            s0 = func_002dc7c8(a0);
            f20 = (((*(f32*)((s1 + 0xa4)) - *(f32*)((s0 + 0xa8))) * func_002dceb0(a0)) + *(f32*)((s0 + 0xa8)));
            *(f32*)(((u32)frame + 0x14)) = (f21 - (func_002f8960(((*(f32*)((s1 + 0xa4)) - *(f32*)((s0 + 0xa8))) * func_002dceb0(a0)) + *(f32*)((s0 + 0xa8))) * *(f32*)((a0 + 0x68))));
            f21_1 = (f21 - (func_002f8960(((*(f32*)((s1 + 0xa4)) - *(f32*)((s0 + 0xa8))) * func_002dceb0(a0)) + *(f32*)((s0 + 0xa8))) * *(f32*)((a0 + 0x68))));
            *(f32*)((u32)frame) = (*(f32*)(((u32)frame + 0x20)) * *(f32*)((a0 + 0x6c)));
            *(f32*)(((u32)frame + 4)) = (*(f32*)(((u32)frame + 4)) - 300.0f);
            *(f32*)(((u32)frame + 0x10)) = (*(f32*)(((u32)frame + 0x20)) * *(f32*)((a0 + 0x6c)));
            *(f32*)(((u32)frame + 0x14)) = (*(f32*)(((u32)frame + 0x14)) - 300.0f);
            *(f32*)(((u32)frame + 0x18)) = (-(func_002f87c0(f20)) * *(f32*)((a0 + 0x68)));
            func_00107340(v0_0, *(f32*)(((u32)frame + 0x20)) * *(f32*)((a0 + 0x6c)), *(f32*)(((u32)frame + 4)) - 300.0f, *(f32*)(((u32)frame + 8)));
            func_00107330(v0_0, *(f32*)(((u32)frame + 0x10)), *(f32*)(((u32)frame + 0x14)), *(f32*)(((u32)frame + 0x18)));
            f0 = func_00107330(v0_0, *(f32*)(((u32)frame + 0x10)), *(f32*)(((u32)frame + 0x14)), *(f32*)(((u32)frame + 0x18)));
        } else {
            f0 = func_002dc7f8(a0);
        }
        f0_2 = f0;
    } else {
        f0_2 = func_002dcf18(a0);
    }
    return f0_2;
}
