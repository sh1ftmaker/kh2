// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00351d98 asm("D_00351d98");
extern "C" u32 D_0036dfe0 asm("D_0036dfe0");
extern "C" u32 D_0036e000 asm("D_0036e000");
extern "C" f32 func_00191b70(u32, u32) asm("func_00191b70");
extern "C" u32 func_001a5bd0(u32, u32, f32) asm("func_001a5bd0");
extern "C" void func_001a5420(u32, u32, u32) asm("func_001a5420");

// 0x001c7ca8 YS::PRIZE_MU::AppearTable(kn::FVector const&, YS::PRIZETABLE const*)
void lift_001c7ca8(u32 a0, u32 a1) asm("_ZN2YS8PRIZE_MU11AppearTableERKN2kn7FVectorEPKNS_10PRIZETABLEE");
void lift_001c7ca8(u32 a0, u32 a1) {
    u32 s0;
    u32 s1;
    f32 f20;
    if (((s32)(*(u32*)(&D_00351d98)) != 0)) {
        s0 = 0;
        s1 = 0;
        do {
            while ((f20 = func_00191b70(a0, a1)), ((s32)(((s32)(s0) < (s32)(func_001a5bd0(a1, s1, func_00191b70(a0, a1))))) != 0)) {
                func_001a5420(*(u32*)(&D_00351d98), (*(u8*)((s1 + (u32)&D_0036dfe0)) << 4) + (u32)&D_0036e000, a0);
                s0 = (s0 + 1);
            }
            s0 = 0;
            s1 = (s1 + 1);
        } while (((s32)(((s32)(s1) < (s32)(9))) != 0));
    }
    return;
}
