// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_001d56c8(u32) asm("func_001d56c8");
extern "C" u32 func_00276c18() asm("func_00276c18");
extern "C" u32 func_00294000(u32) asm("func_00294000");

// 0x002a8870 Tz::JmMiniGame::isEnable(int)
u32 lift_002a8870(u32 a0) asm("_ZN2Tz10JmMiniGame8isEnableEi");
u32 lift_002a8870(u32 a0) {
    u32 v0;
    u32 s0;
    u32 v0_0;
    u32 t5;
    u32 s3;
    u32 v0_1;
    u32 s3_2;
    u32 v0_3;
    u32 s3_4;
    u32 s0_5;
    v0 = func_00294000(7);
    s0 = 0;
    v0_0 = *(u32*)((v0 + 8));
    if (((s32)(*(u32*)((v0 + 8))) > 0)) {
        do {
            if (((s32)(a0) >= 0)) {
                t5 = (s0 << 3);
                s3 = (v0 + 0x10);
                if ((*(u16*)((t5 + s3)) == a0)) {
                    v0_1 = func_001d56c8(*(u16*)(((t5 + s3) + 6)));
                    if (((((u32)(*(u8*)(v0_1)) < (u32)(2)) ^ 1) != 0)) {
                        break;
                    }
                    if (((s32)(func_00276c18()) != 0)) {
                        break;
                    }
                    v0_0 = *(u32*)((v0 + 8));
                }
                s3_4 = s3;
            } else {
                s3_2 = (v0 + 0x10);
                v0_3 = func_001d56c8(*(u16*)((((s0 << 3) + s3_2) + 6)));
                if (((((u32)(*(u8*)(v0_3)) < (u32)(2)) ^ 1) != 0)) {
                    break;
                }
                if (((s32)(func_00276c18()) != 0)) {
                    break;
                }
                s3_4 = s3_2;
                v0_0 = *(u32*)((v0 + 8));
            }
            s0_5 = (s0 + 1);
            s0 = s0_5;
        } while (((s32)(((s32)(s0_5) < (s32)(v0_0))) != 0));
    }
    return ((s32)(s0) < (s32)(v0_0));
}
