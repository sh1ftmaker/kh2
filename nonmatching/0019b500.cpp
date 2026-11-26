// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016b7a0(u32) asm("func_0016b7a0");
extern "C" u32 func_00199938(u32, u32) asm("func_00199938");
extern "C" void func_001ad990(u32, f32, f32, f32) asm("func_001ad990");

// 0x0019b500 func_0019b500
// minilink-rodata 0x0036d358   (float literals live here in the original)
void func_0019b500(u32 a0) asm("_ZN2YS10UNIT_GROUP10appear_npcEv");
void func_0019b500(u32 a0) {
    u32 t6;
    u32 t7;
    u32 s1;
    u32 t5;
    u32 s0;
    u32 t7_0;
    u32 t7_1;
    u32 t6_2;
    u32 a0_3;
    u32 v0;
    u32 t7_4;
    u32 t5_5;
    u32 s1_6;
    t6 = *(u32*)((a0 + 8));
    t7 = *(u16*)((t6 + 4));
    if (((s32)(t7) != 0)) {
        s1 = 0;
        t5 = t6;
        do {
            s0 = (s1 << 6);
            t7_0 = (s0 + t6);
            t7_1 = (t7_0 + 0x30);
            t6_2 = *(u8*)((t7_1 + 0x18));
            if ((t6_2 == 2)) {
                if (((s32)(func_0016b7a0(*(u16*)((t7_1 + 0x1a)))) == 0)) {
                    a0_3 = *(u32*)((a0 + 8));
                    v0 = func_00199938((a0_3 + s0) + 0x2c, a0);
                    t7_4 = *(u32*)((v0 + 0x7f8));
                    if (((s32)((t7_4 & 0x10)) == 0)) {
                        func_001ad990(v0 + 0x82c, 0.0f, 1.0f, 10.0f);
                    }
                }
                t5_5 = *(u32*)((a0 + 8));
                t5 = t5_5;
                t7_1 = *(u16*)((t5_5 + 4));
            } else {
                t7_1 = *(u16*)((t5 + 4));
            }
            s1_6 = (s1 + 1);
            s1 = s1_6;
            t6 = t5;
        } while (((s32)(((s32)(s1_6) < (s32)(t7_1))) != 0));
    }
    return;
}
