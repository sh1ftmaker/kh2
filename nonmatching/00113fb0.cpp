// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0010f448(u32, u32, u32, u32) asm("func_0010f448");
extern "C" u32 func_001883d8(u32, u32, u32, u32, u8) asm("func_001883d8");
extern "C" u32 func_00188758(u32) asm("func_00188758");
extern "C" void func_00188170(u32, u32, u32, u32, u8) asm("func_00188170");

// 0x00113fb0 func_00113fb0
u32 func_00113fb0(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) asm("_ZN2kn17FriendPersonality16execScriptActionEPNS_12FriendActionEPN2YS6TARGETEPPvb");
u32 func_00113fb0(u32 a0, u32 a1, u32 a2, u32 a3, u8 a4) {
    u32 t5;
    u32 a1_0;
    u32 t7;
    u32 t7_1;
    u32 t7_2;
    u32 t7_3;
    u32 t7_4;
    u32 t5_5;
    u32 t7_6;
    u32 t7_7;
    if (((s32)(a4) != 0)) {
        *(u32*)(a3) = 0;
        t5 = *(u32*)((a0 + 4));
        *(u32*)(a2) = *(u32*)((t5 + 0x9f4));
        *(u32*)((a2 + 4)) = *(u32*)((t5 + 0x9f8));
        *(u32*)((a2 + 8)) = *(u32*)((t5 + 0x9fc));
        *(u32*)((a2 + 0xc)) = *(u32*)((t5 + 0xa00));
        *(u32*)((a2 + 0x10)) = *(u32*)((t5 + 0xa04));
        if (((s32)(a1) != 0)) {
            a1_0 = *(u32*)((a1 + 0x20));
            if (((s32)(a1_0) != 0)) {
                if (((s32)(func_001883d8(*(u32*)((a0 + 4)) + 0x300, a1_0, a2, a3, a4)) != 0)) {
                    if ((func_00188758(*(u32*)((a0 + 4)) + 0x300) == 0)) {
                        t7_1 = 0;
                    } else {
                        if (((s32)(func_0010f448(*(u32*)((a0 + 4)), a1, 1, 1)) != 0)) {
                            t7 = 1;
                        } else {
                            t7 = 0;
                        }
                        t7_1 = t7;
                    }
                    t7_2 = t7_1;
                } else {
                    t7_2 = 0;
                }
                t7_3 = t7_2;
            } else {
                t7_3 = 0;
            }
            t7_4 = t7_3;
        } else {
            t7_4 = 0;
        }
        t7_7 = t7_4;
    } else {
        t5_5 = *(u32*)((a0 + 4));
        *(u32*)((t5_5 + 0x9f4)) = *(u32*)(a2);
        *(u32*)((t5_5 + 0x9f8)) = *(u32*)((a2 + 4));
        *(u32*)((t5_5 + 0x9fc)) = *(u32*)((a2 + 8));
        *(u32*)((t5_5 + 0xa00)) = *(u32*)((a2 + 0xc));
        *(u32*)((t5_5 + 0xa04)) = *(u32*)((a2 + 0x10));
        t7_6 = *(u32*)((a1 + 0x10));
        if ((t7_6 != 0)) {
            *(u8*)((*(u32*)((a0 + 4)) + 0xaf4)) = *(u32*)((t7_6 + 8));
        }
        func_00188170(*(u32*)((a0 + 4)) + 0x300, *(u32*)((a1 + 0x20)), a2, a3, a4);
        t7_7 = 1;
    }
    return t7_7;
}
