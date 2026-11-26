// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0034ec60 asm("D_0034ec60");
extern "C" u32 D_0036c5b0 asm("D_0036c5b0");
extern "C" u32 func_0016a080(u32, u32, u32, u32, u32, f32) asm("func_0016a080");
extern "C" void func_00180058(u32, u32, u32, u32, u32, u32, f32) asm("func_00180058");
extern "C" void func_002fee78(u32, u32, u32) asm("func_002fee78");

// 0x001801b0 YS::MOTION::_Capture(YS::OBJ*, YS::BINARC*, ryj::PAX*, YS::OBJ*, float, int*)
void lift_001801b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, f32 fa0) asm("_ZN2YS6MOTION8_CaptureEPNS_3OBJEPNS_6BINARCEPN3ryj3PAXES2_fPi");
void lift_001801b0(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, f32 fa0) {
    u32 loc_0;
    u32 s0;
    u32 s2;
    u32 t6;
    u32 t7;
    func_002fee78((u32)&loc_0, (u32)&D_0036c5b0, func_0016a080(a3, a1, a2, a3, a4, fa0));
    func_00180058(a3 + 0x140, a1, (u32)&loc_0, a2, a0, a4, fa0);
    if (((s32)((*(u32*)((a3 + 0x588)) & 4)) != 0)) {
        s0 = (a3 + 0xaf8);
        s2 = 1;
        t6 = *(u8*)(((u32)&loc_0 + 3));
        do {
            *(u8*)(((u32)&loc_0 + 3)) = (t6 + 1);
            if (((s32)(*(u32*)(s0)) != 0)) {
                func_00180058(*(u32*)(s0) + 0x140, a1, (u32)&loc_0, a2, a0, a4, fa0);
            }
            s0 = (s0 + 4);
            s2 = (s2 + -1);
            t6 = *(u8*)(((u32)&loc_0 + 3));
        } while (((s32)(s2) >= 0));
    }
    t7 = (*(u32*)(&D_0034ec60) + -1);
    *(u32*)(&D_0034ec60) = t7;
    if (((s32)(t7) >= 0)) {
        *(u32*)(&D_0034ec60) = 0xffffffff;
    }
    *(u32*)((a3 + 0x158)) = *(u32*)(&D_0034ec60);
    return;
}
