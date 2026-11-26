// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 func_00163898(u32, u32, u32, u32, u32, u32) asm("func_00163898");
extern "C" u32 func_00164578(u32, u32, u32, u32, u32, u32, f32) asm("_ZN2dk11OctCollFile15collisionSphereEPNS_14CollisionParamERNS_6SphereEftRiRKN2kn7FVectorE");
extern "C" void func_00144490(u32, u32, u32, u32, u32, u32, f32, f32, f32, f32, f32, f32) asm("func_00144490");

// 0x00164578 func_00164578
u32 func_00164578(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) asm("_ZN2dk11OctCollFile15collisionSphereEPNS_14CollisionParamERNS_6SphereEftRiRKN2kn7FVectorE");
u32 func_00164578(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5, f32 fa0) {
    u8 frame[48];
    u32 t7;
    f32 f12;
    f32 f13;
    f32 f14;
    u32 v0;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 v0_3;
    u32 t7_4;
    t7 = *(u32*)(a4);
    *(u32*)(a4) = (t7 + 1);
    f12 = *(f32*)(a2);
    f13 = *(f32*)((a2 + 4));
    f14 = *(f32*)((a2 + 8));
    func_00144490((u32)frame, a1, a2, a3, a4, a5, f12 - fa0, f13 - fa0, f14 - fa0, f12 + fa0, f13 + fa0, f14 + fa0);
    v0 = func_00163898(a0, a3 & 0xffff, a2, (u32)frame, a1 + 0x30, a1);
    if ((v0 != 0xffffffff)) {
        if ((v0 == 0)) {
            if (((a1 + 0x30) != a2)) {
                *(Q16*)((a1 + 0x30)) = *(Q16*)(a2);
            }
            t7_0 = *(u64*)((a1 + 0x70));
            *(u64*)((a1 + 0x70)) = ((t7_0 & ~((0 | ((u64)(1) << 0x22)))) | ((u64)((u32)((((u64)(t7_0) >> 0x22) & 1))) << 0x22));
        } else {
            t7_1 = *(u32*)(a4);
            if (((s32)(t7_1) < (s32)(6))) {
                if ((a2 != (a1 + 0x30))) {
                    *(Q16*)(a2) = *(Q16*)((a1 + 0x30));
                }
                *(Q16*)(((u32)frame + 0x20)) = *(Q16*)(a5);
                t7_2 = *(u64*)((a1 + 0x70));
                v0_3 = func_00164578(a0, a1, a2, a3 & 0xffff, a4, (u32)frame + 0x20, fa0);
                *(u64*)((a1 + 0x70)) = ((t7_2 & ~((0 | ((u64)(1) << 0x22)))) | ((u64)(1) << 0x22));
                v0 = v0_3;
            }
        }
    } else {
        if (((a1 + 0x30) != a5)) {
            *(Q16*)((a1 + 0x30)) = *(Q16*)(a5);
        }
        t7_4 = *(u64*)((a1 + 0x70));
        *(u64*)((a1 + 0x70)) = ((t7_4 & ~((0 | ((u64)(1) << 0x22)))) | ((u64)(1) << 0x22));
    }
    return v0;
}
