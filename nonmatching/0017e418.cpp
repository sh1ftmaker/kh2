// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 func_001050d8(u32) asm("func_001050d8");
extern "C" u32 func_001c88a8(u32, f32) asm("func_001c88a8");
extern "C" u32 func_001c9958(u32, u32, f32) asm("func_001c9958");
extern "C" void func_0010c078(u32, u32, u32, f32) asm("func_0010c078");
extern "C" void func_001c97b0(u32, f32) asm("func_001c97b0");

// 0x0017e418 YS::FRIEND::Appear(YS::OBJENTRY const*, kn::FVector const&, float)
// minilink-rodata 0x0036c580   (float literals live here in the original)
u32 lift_0017e418(u32 a0, u32 a1, f32 fa0) asm("_ZN2YS6FRIEND6AppearEPKNS_8OBJENTRYERKN2kn7FVectorEf");
u32 lift_0017e418(u32 a0, u32 a1, f32 fa0) {
    u32 v0;
    u32 v0_0;
    if (((s32)(*(u8*)(((u32)&D_0032bb30 + 0x3525))) != 0)) {
        func_001c97b0(*(u16*)((a0 + 0x4c)), 15.0f);
        return func_001c88a8(a1, fa0);
    } else {
        if (((s32)(func_001c9958(*(u8*)(((u32)&D_0032bb30 + 0x3524)), *(u16*)((a0 + 0x4c)), fa0)) != 0)) {
            func_001c97b0(*(u16*)((a0 + 0x4c)), 15.0f);
            v0_0 = 0;
        } else {
            v0 = func_001050d8(0xd00);
            func_0010c078(v0, a0, a1, fa0);
            v0_0 = v0;
        }
        return v0_0;
    }
}
