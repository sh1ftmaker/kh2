// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_0035f608 asm("D_0035f608");
extern "C" u32 func_00294000(u32) asm("func_00294000");
extern "C" u32 func_002a99c8(u32) asm("func_002a99c8");
extern "C" u32 func_002fde18(u32, u32, u32) asm("func_002fde18");

// 0x002a9100 Tz::JmQuest::ChkQuestInfo()
u32 lift_002a9100() asm("_ZN2Tz7JmQuest12ChkQuestInfoEv");
u32 lift_002a9100() {
    u32 v0;
    u32 v0_0;
    u32 s2;
    u32 s1;
    u32 s0;
    u32 v0_1;
    u32 t3;
    u32 s1_2;
    u32 s1_3;
    u32 t3_4;
    u32 t5;
    u32 s1_5;
    u32 s2_6;
    u32 s1_7;
    v0 = func_00294000(8);
    v0_0 = func_002fde18(*(u32*)(&D_0035f608), 0, 0x304);
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        s2 = 0;
        s1 = 0;
        s0 = (v0 + 0x10);
        do {
            v0_1 = func_002a99c8(s0);
            if ((v0_1 != 0)) {
                if (((s32)(s1) != 0)) {
                    t3 = (s1 << 2);
                    if ((*(s8*)((t3 + *(u32*)(&D_0035f608))) != *(u16*)(s0))) {
                        *(u8*)(((t3 + *(u32*)(&D_0035f608)) + 4)) = *(u8*)(s0);
                        *(u8*)(((t3 + *(u32*)(&D_0035f608)) + 5)) = 0xffffffff;
                        *(u16*)(((t3 + *(u32*)(&D_0035f608)) + 6)) = 0;
                        s1_2 = (s1 + 1);
                        s1 = s1_2;
                        t3 = (s1_2 << 2);
                    }
                    t3_4 = t3;
                } else {
                    *(u8*)((*(u32*)(&D_0035f608) + 4)) = *(u8*)(s0);
                    *(u8*)((*(u32*)(&D_0035f608) + 5)) = 0xffffffff;
                    *(u16*)((*(u32*)(&D_0035f608) + 6)) = 0;
                    s1_3 = (s1 + 1);
                    s1 = s1_3;
                    t3_4 = (s1_3 << 2);
                }
                t5 = (t3_4 + *(u32*)(&D_0035f608));
                if ((*(u16*)((t5 + 2)) != *(u16*)((s0 + 2)))) {
                    *(u8*)((t5 + 4)) = *(u8*)(s0);
                    *(u8*)(((t3_4 + *(u32*)(&D_0035f608)) + 5)) = 0xffffffff;
                    *(u16*)(((t3_4 + *(u32*)(&D_0035f608)) + 6)) = *(u16*)((s0 + 2));
                    s1_5 = (s1 + 1);
                    s1 = s1_5;
                    t3_4 = (s1_5 << 2);
                }
                *(u8*)(((t3_4 + *(u32*)(&D_0035f608)) + 4)) = *(u8*)(s0);
                *(u8*)(((t3_4 + *(u32*)(&D_0035f608)) + 5)) = s2;
                *(u16*)(((t3_4 + *(u32*)(&D_0035f608)) + 6)) = *(u16*)((s0 + 2));
                s1 = (s1 + 1);
            }
            s2_6 = (s2 + 1);
            s0 = (s0 + 0x10);
            s2 = s2_6;
            v0_0 = v0_1;
        } while (((s32)(((s32)(s2_6) < (s32)(*(u32*)((v0 + 8))))) != 0));
        s1_7 = s1;
    } else {
        s1_7 = 0;
    }
    *(u32*)(*(u32*)(&D_0035f608)) = s1_7;
    return v0_0;
}
