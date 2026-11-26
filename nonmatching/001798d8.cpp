// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_00352130 asm("D_00352130");
extern "C" f32 func_00177760(u32, u32, u32, u32, f32) asm("func_00177760");
extern "C" u32 func_0017df58(u32, u32, u32, u32) asm("func_0017df58");
extern "C" u32 func_0019ba60(u32) asm("func_0019ba60");
extern "C" void func_0016cce8(u32, u32, u32, u32, u32) asm("func_0016cce8");
extern "C" void func_00179a68(u32, f32) asm("func_00179a68");
extern "C" void func_001a1b68(u32, f32) asm("func_001a1b68");

// 0x001798d8 func_001798d8
f32 func_001798d8(u32 a0, u32 a1, u32 a2, u32 a3) asm("_ZN2YS6PLAYER20_OVR_attack_callbackEPNS_6BTLOBJEPNS_6ATTACKEPKNS_11ATTACKPARAME");
f32 func_001798d8(u32 a0, u32 a1, u32 a2, u32 a3) {
    u8 frame[16];
    u32 s1;
    u32 v0;
    u32 t7;
    u32 t5;
    u32 t6;
    u32 t5_0;
    u32 t7_1;
    s1 = 0;
    do {
        v0 = func_0017df58(s1, a1, a2, a3);
        if (((s32)(v0) != 0)) {
            if (((s32)(func_0019ba60(v0)) != 0)) {
                t7 = *(u32*)((v0 + 0x484));
                if (((s32)(t7) != 0)) {
                    *(u32*)((u32)frame) = a1;
                    *(u32*)(((u32)frame + 4)) = a2;
                    func_0016cce8(*(u32*)((v0 + 0x484)), 0xf, (u32)frame, 2, 0);
                }
            }
        }
        s1 = (s1 + 1);
    } while (((s32)(((s32)(s1) < (s32)(2))) != 0));
    t5 = *(u8*)((a3 + 0x29));
    if (((s32)(t5) != 0)) {
        t6 = *(u32*)((a1 + 0x588));
        if (((s32)((t6 & 0x10)) != 0)) {
            t5_0 = *(u8*)((*(u32*)((a0 + 0x48c)) + 0x1af));
            if ((t5_0 != 2)) {
                if (((s32)(((s32)(t5_0) < (s32)(3))) != 0)) {
                    if ((t5_0 == 1)) {
                        func_00179a68(a0, (f32)((s32)(t5)) * *(f32*)((*(u32*)(&D_00352130) + 0x60)));
                    }
                } else {
                    if ((t5_0 == 3)) {
                        if (!((*(f32*)((*(u32*)((a0 + 0x48c)) + 0x1b4)) == 0.0f))) {
                            func_00179a68(a0, (f32)((s32)(t5)) * *(f32*)((*(u32*)(&D_00352130) + 0x60)));
                        }
                    }
                }
            } else {
                t7_1 = *(u32*)(&D_00352130);
                func_001a1b68(*(u32*)((a0 + 0x48c)), (-((f32)((s32)(t5))) * *(f32*)((t7_1 + 0x74))) * *(f32*)((t7_1 + 0x64)));
            }
        }
    }
    return func_00177760(a0, a1, a2, a3, (f32)((s32)(t5)));
}
