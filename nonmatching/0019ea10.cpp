// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_00177860(u32, u32, u32) asm("func_00177860");
extern "C" u32 func_001a3570(u32) asm("func_001a3570");
extern "C" u32 func_001bc2a8(u32, u32, u32) asm("func_001bc2a8");

// 0x0019ea10 func_0019ea10
void func_0019ea10(u32 a0, u32 a1, u32 a2) asm("_ZN2YS11RC_SEARCHER16CheckAutoCommandEPNS_6PLAYEREPKNS_10ITEM_TABLEEPKNS_12COMMAND_ELEME");
void func_0019ea10(u32 a0, u32 a1, u32 a2) {
    u32 v0;
    u32 t4;
    u32 t4_0;
    u32 t4_1;
    u32 t4_2;
    v0 = func_00177860(a0, a1, a2);
    if ((*(u8*)((a1 + 2)) != 0x13)) {
        if ((*(u8*)((a1 + 2)) != 0x14)) {
            t4_0 = (((s32)(func_001bc2a8(a2, a0, 0)) < (s32)(4)) & 0xff);
        } else {
            if (((s32)(func_001a3570(*(u16*)(a1))) != 0)) {
                t4 = (((s32)(func_001bc2a8(a2, a0, 0)) < (s32)(4)) & 0xff);
            } else {
                t4 = 0;
            }
            t4_0 = t4;
        }
        t4_2 = t4_0;
    } else {
        if (((s32)((*(u32*)((((*(u16*)((a1 + 4)) >> 5) << 2) + v0)) & (1 << (*(u16*)((a1 + 4)) & 0x1f)))) != 0)) {
            t4_1 = (((s32)(func_001bc2a8(a2, a0, 0)) < (s32)(4)) & 0xff);
        } else {
            t4_1 = 0;
        }
        t4_2 = t4_1;
    }
    return;
}
