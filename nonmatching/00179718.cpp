// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_00349e10 asm("D_00349e10");
extern "C" u32 func_0015ef18(u32) asm("func_0015ef18");
extern "C" u32 func_0015ef28() asm("func_0015ef28");
extern "C" u32 func_001dc5f8(u32) asm("func_001dc5f8");
extern "C" u32 func_001dc648(u32) asm("func_001dc648");
extern "C" u32 func_001dc9d0(u32) asm("func_001dc9d0");
extern "C" u32 func_001de168(u32, u32, u32, u32, u32, u32) asm("func_001de168");
extern "C" u32 func_001de2e0(u32, u32) asm("func_001de2e0");
extern "C" void func_00143e50(u32, u32, u32) asm("func_00143e50");
extern "C" void func_0017d050(u32, u32) asm("func_0017d050");
extern "C" void func_001dc920(u32) asm("func_001dc920");

// 0x00179718 YS::PLAYER::exec_barrier_effect()
// minilink-rodata 0x0036c4dc   (float literals live here in the original)
void lift_00179718(u32 a0) asm("_ZN2YS6PLAYER19exec_barrier_effectEv");
void lift_00179718(u32 a0) {
    u8 frame[32];
    u32 a0_0;
    u32 s1;
    u32 t7;
    u32 t7_1;
    u32 v0;
    u32 v0_2;
    u32 v0_3;
    u32 s1_4;
    f32 f1;
    f32 f0;
    if ((func_0015ef18(a0) != 0)) {
        a0_0 = *(u32*)((a0 + 0xb54));
        if ((a0_0 != 0)) {
            if ((func_001dc9d0(a0_0) == 0)) {
                func_001dc920(*(u32*)((a0 + 0xb54)));
                *(u32*)((a0 + 0xb54)) = 0;
            }
        }
        s1 = *(u16*)((a0 + 0x5f2));
        if ((s1 != 0xffff)) {
            t7 = *(u32*)((a0 + 0xb54));
            if (((s32)(t7) == 0)) {
                t7_1 = *(u32*)((a0 + 0xb58));
                if ((s1 != t7_1)) {
                    v0 = func_001de2e0(func_0015ef28(), 1);
                    if (((s32)(v0) >= 0)) {
                        v0_2 = func_001de168(func_0015ef28(), v0, 0, 2, 0x9c40, 0);
                        *(u32*)((a0 + 0xb54)) = v0_2;
                        if (((s32)(v0_2) != 0)) {
                            func_00143e50((u32)frame, s1 & 0xffff, 0);
                            v0_3 = func_001dc5f8(*(u32*)((a0 + 0xb54)));
                            if ((v0_3 != (a0 + 0x5d0))) {
                                *(Q16*)(v0_3) = *(Q16*)((a0 + 0x5d0));
                            }
                            s1_4 = func_001dc648(*(u32*)((a0 + 0xb54)));
                            func_0017d050((u32)frame + 0x10, (u32)frame);
                            if ((s1_4 != ((u32)frame + 0x10))) {
                                *(Q16*)(s1_4) = *(Q16*)(((u32)frame + 0x10));
                            }
                        }
                    }
                    *(u32*)((a0 + 0xb58)) = *(u16*)((a0 + 0x5f2));
                    ((void(*)(u32, u32))(*(u32*)((*(u32*)(a0) + 0x94))))(a0, *(u16*)((a0 + 0x5f2)));
                }
            }
            *(f32*)((a0 + 0xb5c)) = 30.0f;
        } else {
            f1 = *(f32*)((a0 + 0xb5c));
            if ((0.0f < f1)) {
                f0 = *(f32*)(&D_00349e10);
                *(f32*)((a0 + 0xb5c)) = (f1 - f0);
                if (((f1 - f0) <= 0.0f)) {
                    *(u32*)((a0 + 0xb58)) = s1;
                }
            }
        }
    }
    return;
}
