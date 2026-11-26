// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00138d30(u32, f32) asm("func_00138d30");
extern "C" u32 func_001395a8(u32) asm("func_001395a8");
extern "C" u32 func_00155758(u32, u32, u32, u32, u32, u32) asm("func_00155758");
extern "C" void func_00139598(u32, u32, u32) asm("func_00139598");
extern "C" void func_00139d78(u32) asm("func_00139d78");
extern "C" void func_0013edd0(u32, f32) asm("func_0013edd0");
extern "C" void func_0014b1e0(u32, u32, u32) asm("func_0014b1e0");
extern "C" void func_0014b208(u32, u32, u32) asm("func_0014b208");

// 0x001558b8 func_001558b8
u32 func_001558b8(u32 a0, u32 a1, u32 a2) asm("_ZN2dk12GAUGE_PLAYER12createCircleEii");
u32 func_001558b8(u32 a0, u32 a1, u32 a2) {
    u32 s1;
    u32 s4;
    u32 loc_0;
    u32 loc_8;
    u32 loc_c;
    f32 loc_10;
    u32 loc_4;
    u32 v0;
    f32 f20;
    u32 s1_0;
    u32 s0;
    u32 s2;
    u32 s3;
    u32 s7;
    u32 v0_1;
    u32 v0_2;
    s1 = (a0 + (a2 * 0x250));
    s4 = (s1 + 0x33b0);
    func_00139598(s4, a1, a2);
    v0 = func_00155758(a1, (u32)&loc_0, (u32)&loc_4, (u32)&loc_8, (u32)&loc_c, (u32)&loc_10);
    if (((s32)(v0) == 0)) {
        f20 = loc_10;
        func_00139d78(s4);
        s1_0 = (loc_0 << 0x10);
        s0 = (loc_4 << 0x10);
        func_0013edd0(s1 + 0x33d0, f20);
        s2 = loc_8;
        s3 = loc_c;
        s7 = (s1 + 0x34f0);
        func_00139d78(s4);
        func_0014b1e0(s7, (s32)(s1_0) >> 0x10, (s32)(s0) >> 0x10);
        func_0014b208(s7, s2 & 0xffff, s3 & 0xffff);
        v0_1 = func_001395a8(s4);
        if ((a2 == 1)) {
            v0_2 = func_00138d30(a0 + 0x2574, -(loc_10));
            v0_1 = v0_2;
        }
        v0 = v0_1;
    }
    return v0;
}
