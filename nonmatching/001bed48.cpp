// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0032bb30 asm("D_0032bb30");
extern "C" u32 D_0036dc88 asm("D_0036dc88");
extern "C" u32 func_00177850(u32) asm("func_00177850");
extern "C" u32 func_001b8e88(u32) asm("func_001b8e88");
extern "C" u32 func_001bc780(u32, u32, u32, u32) asm("func_001bc780");
extern "C" void func_001bc778(u32) asm("func_001bc778");

// 0x001bed48 func_001bed48
u32 func_001bed48(u32 a0) asm("_ZN2YS13FIELD_COMMAND13make_shortcutEv");
u32 func_001bed48(u32 a0) {
    u8 frame[16];
    u32 s6;
    u32 s2;
    u32 s3;
    u32 s5;
    u32 s0;
    u32 v0_0;
    u32 v0_1;
    u32 a3_2;
    u32 fp;
    u32 s7;
    u32 t2;
    u32 t3;
    u32 t4;
    u32 v0_3;
    u32 t4_4;
    u32 fp_5;
    u32 s7_6;
    u32 sp;
    u32 fp_7;
    u32 s7_8;
    u32 sp_9;
    u32 v0_10;
    u32 t6;
    s6 = (a0 + 0x268);
    func_001bc778(s6);
    s2 = ((u32)&D_0032bb30 + 0x36f8);
    s3 = 0;
    s5 = (u32)&D_0036dc88;
    do {
        s0 = *(u16*)(s2);
        v0_0 = func_001b8e88(*(u16*)(s2));
        if ((*(u16*)((v0_0 + 2)) == 3)) {
            v0_1 = func_00177850(*(u32*)((a0 + 0x9e0)));
            if (((s32)(*(u8*)((v0_1 + 0x12))) != 0)) {
                a3_2 = 0;
                fp = 3;
                s7 = 3;
                t2 = *(s16*)((v0_0 + 4));
                t3 = *(u8*)((v0_1 + 0x12));
                t4 = 0;
                v0_3 = (v0_1 + 0x34);
                do {
                    t4_4 = (t4 + 1);
                    a3_2 = ((*(u16*)(v0_3) ^ t2) ? a3_2 : (a3_2 + 1));
                    t4 = t4_4;
                    v0_3 = (v0_3 + 2);
                } while (((s32)(((s32)(t4_4) < (s32)(t3))) != 0));
                fp_5 = fp;
                s7_6 = s7;
            } else {
                fp_5 = 3;
                s7_6 = 3;
                sp = (u32)frame;
            }
            fp_7 = fp_5;
            s7_8 = s7_6;
            sp_9 = sp;
        } else {
            if ((*(u32*)((*(u32*)((a0 + 0x9e0)) + 0xb50)) == 3)) {
                s0 = *(u16*)(s5);
            }
            fp_7 = 3;
            s7_8 = 3;
            sp_9 = (u32)frame;
        }
        v0_10 = func_001bc780(s6, s0, 0, a3_2);
        t6 = (s3 + 1);
        *(u8*)((v0_10 + 6)) = t6;
        s2 = (s2 + 2);
        s3 = t6;
        s5 = (s5 + 2);
    } while (((s32)(((s32)(t6) < (s32)(4))) != 0));
    return v0_10;
}
