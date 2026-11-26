// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

static inline f32 __f32(u32 x) { union { u32 u; f32 f; } c; c.u = x; return c.f; }
static inline u32 __u32(f32 x) { union { u32 u; f32 f; } c; c.f = x; return c.u; }

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" f32 func_001a1aa0(u32, u32) asm("func_001a1aa0");
extern "C" f32 func_001a1b68(u32, f32) asm("func_001a1b68");
extern "C" f32 func_001bbfd0() asm("func_001bbfd0");
extern "C" u32 func_00177860(u32) asm("func_00177860");
extern "C" u32 func_001a1de0(u32, f32) asm("func_001a1de0");

// 0x00179a68 YS::PLAYER::add_drive(float)
void lift_00179a68(u32 a0, f32 fa0) asm("_ZN2YS6PLAYER9add_driveEf");
void lift_00179a68(u32 a0, f32 fa0) {
    u32 s0;
    f32 f20;
    if ((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) != 2)) {
        if (((s32)(((s32)(*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af))) < (s32)(3))) != 0)) {
            if ((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) != 1)) {
                return;
            } else {
                if (((s32)(func_001a1de0(*(u32*)((a0 + 0x48c)), fa0)) != 0)) {
                    s0 = *(u32*)(&D_00352130);
                    fa0 = (fa0 * (*(f32*)((s0 + 0x78)) * *(f32*)((func_00177860(a0) + 0x3c))));
                }
                f20 = (__f32(fa0) * func_001bbfd0());
                func_001a1aa0(*(u32*)((a0 + 0x48c)), (s32)((__f32(fa0) * func_001bbfd0())));
                return;
            }
        } else {
            if ((*(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af)) == 3)) {
                func_001a1b68(*(u32*)((a0 + 0x48c)), fa0 * *(f32*)((*(u32*)(&D_00352130) + 0x70)));
                return;
            } else {
                return;
            }
        }
    } else {
        if (((s32)((*(u32*)((a0 + 0xb50)) ^ 0xc)) != 0)) {
            func_001a1b68(*(u32*)((a0 + 0x48c)), fa0 * *(f32*)((*(u32*)(&D_00352130) + 0x70)));
            return;
        } else {
            return;
        }
    }
}
