// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" u32 func_001a1d50(u32, f32) asm("func_001a1d50");
extern "C" u32 func_001a1de0(u32) asm("func_001a1de0");
extern "C" u32 func_001b58a8() asm("func_001b58a8");

// 0x00176f00 YS::PARTY::exec_mpdrive()
void lift_00176f00(u32 a0) asm("_ZN2YS5PARTY12exec_mpdriveEv");
void lift_00176f00(u32 a0) {
    u32 t7;
    u32 t7_0;
    f32 f20;
    f32 f20_1;
    f32 f20_2;
    f32 f20_3;
    t7 = *(u32*)((a0 + 0x48c));
    if (((s32)(t7) != 0)) {
        if ((func_001a1de0(t7) != 0)) {
            t7_0 = *(u32*)((a0 + 0x7f8));
            if (((t7_0 & 4) == 0)) {
                if (((s32)((*(u32*)((a0 + 0x588)) & 0x80)) != 0)) {
                    if ((func_001b58a8() == 0)) {
                        f20 = *(f32*)(&D_00349e10);
                        f20_1 = (-(f20) * *(f32*)((func_00177860(a0) + 0x38)));
                        func_001a1d50(*(u32*)((a0 + 0x48c)), -(f20) * *(f32*)((func_00177860(a0) + 0x38)));
                        return;
                    } else {
                        return;
                    }
                } else {
                    f20_2 = *(f32*)(&D_00349e10);
                    f20_3 = (-(f20_2) * *(f32*)((func_00177860(a0) + 0x38)));
                    func_001a1d50(*(u32*)((a0 + 0x48c)), -(f20_2) * *(f32*)((func_00177860(a0) + 0x38)));
                    return;
                }
            } else {
                return;
            }
        } else {
            return;
        }
    } else {
        return;
    }
}
