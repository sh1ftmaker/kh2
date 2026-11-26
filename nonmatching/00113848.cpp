// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

struct __attribute__((aligned(16))) Q16 { u32 w[4]; };   // lq/sq quadword copy

extern "C" f32 func_0010f8a8(u32) asm("func_0010f8a8");
extern "C" u32 func_0010cc70(u32) asm("func_0010cc70");
extern "C" u32 func_0010cc80(u32) asm("func_0010cc80");
extern "C" u32 func_0010ef48(u32) asm("func_0010ef48");
extern "C" u32 func_0010f8c0(u32, u32, u32, u32, u8) asm("func_0010f8c0");
extern "C" u32 func_0010f8e0(u32) asm("func_0010f8e0");
extern "C" u32 func_0010f9e0(u32, u32) asm("func_0010f9e0");
extern "C" void func_0010f880(u32, f32, f32) asm("func_0010f880");
extern "C" void func_0010f9f0(u32, u32, u32) asm("func_0010f9f0");
extern "C" void func_0016af58(u32, u32) asm("func_0016af58");
extern "C" void func_0016b010(u32, u32) asm("func_0016b010");

// 0x00113848 func_00113848
void func_00113848(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) asm("_ZN2kn17FriendPersonality4idleEPNS_12FriendActionEPN2YS6TARGETEPPvb");
void func_00113848(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) {
    u32 t5;
    u32 t7;
    u32 t7_0;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    Q16 loc_0;
    u32 t7_4;
    if (((s32)(a4) != 0)) {
        *(u32*)(a3) = 0;
        t5 = *(u32*)((a0 + 4));
        *(u32*)(a2) = *(u32*)((t5 + 0x9f4));
        *(u32*)((a2 + 4)) = *(u32*)((t5 + 0x9f8));
        *(u32*)((a2 + 8)) = *(u32*)((t5 + 0x9fc));
        *(u32*)((a2 + 0xc)) = *(u32*)((t5 + 0xa00));
        *(u32*)((a2 + 0x10)) = *(u32*)((t5 + 0xa04));
        if ((func_0010f8c0(*(u32*)((a0 + 4)), a1, a2, a3, a4) != 0)) {
            if (((s32)(func_0010f8e0(*(u32*)((a0 + 4)))) == 0)) {
                t7 = !((func_0010f8a8(*(u32*)((a0 + 4))) <= 0.0f)) ? ((func_0010ef48(*(u32*)((a0 + 4))) ^ 1) & 0xff) : 0;
                t7_0 = t7;
            } else {
                t7_0 = 0;
            }
            t7_2 = t7_0;
        } else {
            t7_1 = ((s32)(func_0010f9e0(*(u32*)((a0 + 4)), a1)) == 0) ? ((func_0010ef48(*(u32*)((a0 + 4))) ^ 1) & 0xff) : 0;
            t7_2 = t7_1;
        }
        t7_4 = t7_2;
    } else {
        if (((s32)(func_0010f8c0(*(u32*)((a0 + 4)), a1, a2, a3, a4)) == 0)) {
            t7_3 = *(u32*)((a0 + 8));
            func_0010f880(*(u32*)((a0 + 4)), *(f32*)((t7_3 + 0x70)), *(f32*)((t7_3 + 0x74)));
        }
        if ((func_0010cc80(*(u32*)((a0 + 4))) != 0)) {
            loc_0 = *(Q16*)((func_0010cc70(*(u32*)((a0 + 4))) + 0x20));
            func_0016b010(*(u32*)((a0 + 4)), (u32)&loc_0);
        }
        func_0016af58((u32)&loc_0, *(u32*)((a0 + 4)));
        *(u32*)(((u32)&loc_0 + 0xc)) = 0;
        func_0010f9f0(*(u32*)((a0 + 4)), (u32)&loc_0, 0);
        t7_4 = 1;
    }
    return;
}
