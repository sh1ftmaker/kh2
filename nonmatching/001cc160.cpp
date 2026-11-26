// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" u32 D_001cc358 asm("D_001cc358");
extern "C" u32 D_00352050 asm("D_00352050");
extern "C" u32 func_001cc128(u32, u32) asm("func_001cc128");
extern "C" void func_0016bda8(u32, u32) asm("func_0016bda8");

// 0x001cc160 YS::PRIZE_CA::Appear(YS::BTLOBJ*, int)
void lift_001cc160(u32 a0, u32 a1) asm("_ZN2YS8PRIZE_CA6AppearEPNS_6BTLOBJEi");
void lift_001cc160(u32 a0, u32 a1) {
    u8 frame[32];
    u32 s0;
    u32 s2;
    u32 v0;
    if (((s32)(*(u32*)(&D_00352050)) != 0)) {
        if (((s32)((((s32)(*(u32*)((a0 + 0xac8))) < (s32)(a1)) ? *(u32*)((a0 + 0xac8)) : a1)) != 0)) {
            s0 = (((s32)(*(u32*)((a0 + 0xac8))) < (s32)(a1)) ? *(u32*)((a0 + 0xac8)) : a1);
            func_0016bda8((u32)frame + 0x10, a0);
            if (((u32)frame != ((u32)frame + 0x10))) {
                *(Q16*)((u32)frame) = *(Q16*)(((u32)frame + 0x10));
            }
            if (((s32)(s0) > 0)) {
                s2 = 0;
                do {
                    v0 = func_001cc128(*(u32*)(&D_00352050), (u32)frame);
                    if (((s32)(v0) == 0)) {
                        break;
                    }
                    *(u32*)((v0 + 0x10)) = (u32)&D_001cc358;
                    *(u32*)((a0 + 0xac8)) = (*(u32*)((a0 + 0xac8)) + -1);
                    s2 = (s2 + 1);
                } while (((s32)(((s32)(s2) < (s32)(s0))) != 0));
            }
        }
    }
    return;
}
