// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034a9f0 asm("D_0034a9f0");
extern "C" u32 func_001591a0(u32, u32) asm("func_001591a0");
extern "C" u32 func_0015a528(u32) asm("func_0015a528");
extern "C" u32 func_00167f18(u32) asm("func_00167f18");
extern "C" u32 func_00190140(u32) asm("func_00190140");
extern "C" u32 func_001b9d40(u32) asm("func_001b9d40");
extern "C" void func_0015a158(u32, u32) asm("func_0015a158");
extern "C" void func_0015a260(u32, u32, f32) asm("func_0015a260");
extern "C" void func_001904a8(u32, u32) asm("func_001904a8");

// 0x00159070 func_00159070
// minilink-rodata 0x0036b324   (float literals live here in the original)
u32 func_00159070(u32 a0) asm("_ZN2dk14ReactionCamera6updateEPNS_9ObjCameraE");
u32 func_00159070(u32 a0) {
    u32 loc_0;
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 a0_2;
    u32 a1_3;
    u32 v0_4;
    u32 v0_5;
    if (((s32)(func_001b9d40(*(u32*)((a0 + 0x44)))) == 0)) {
        if (((s32)(func_00190140((u32)&D_0034a9f0)) == 0)) {
            v0 = func_001591a0((u32)&loc_0, (u32)&D_0034a9f0);
            v0_1 = v0;
        } else {
            func_001904a8((u32)&loc_0, (u32)&D_0034a9f0);
            func_0015a260(a0, (u32)&loc_0, 1.0f);
            s0 = func_00167f18(0);
            if (((s32)(((u32(*)(u32))(*(u32*)((*(u32*)(*(u32*)((a0 + 0x44))) + 0x40))))(*(u32*)((a0 + 0x44)))) != 0)) {
                func_0015a158(s0, a0);
            }
            v0_0 = func_0015a528(a0);
            v0_1 = v0_0;
        }
        v0_5 = v0_1;
    } else {
        v0_4 = func_001591a0(a0_2, a1_3);
        v0_5 = v0_4;
    }
    return v0_5;
}
