// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 func_0016a070(u32) asm("func_0016a070");
extern "C" u32 func_0016c028(u32) asm("func_0016c028");
extern "C" u32 func_001849b8(u32, u32) asm("func_001849b8");
extern "C" u32 func_001aec40() asm("func_001aec40");
extern "C" u32 func_002bc188(u32, u32) asm("func_002bc188");

// 0x0016c168 func_0016c168
void func_0016c168(u32 a0, u32 a1) asm("func_0016c168");
void func_0016c168(u32 a0, u32 a1) {
    u32 v0;
    u32 v0_0;
    u32 v0_1;
    u32 v0_2;
    u32 t7;
    u32 t7_3;
    u32 t7_4;
    v0 = func_001849b8(a0, a1);
    if (((s32)(v0) != 0)) {
        v0_0 = func_001aec40();
        if (((s32)(v0_0) != 0)) {
            v0_1 = func_0016a070(a0);
            switch (v0_1) {
            case 1:
            case 14:
                v0_1 = *(s16*)((v0_0 + 0xe));
                break;
            case 2:
                v0_1 = *(s16*)((v0_0 + 0x10));
                break;
            case 3:
                v0_1 = *(s16*)((v0_0 + 0x12));
                break;
            case 4:
                v0_1 = *(s16*)((v0_0 + 0x16));
                break;
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            default:
                v0_2 = ((s32)(func_0016a070(a0)) < (s32)(0x10)) ? *(s16*)((v0_0 + 0x14)) : *(s16*)((v0_0 + 0x16));
                v0_1 = v0_2;
                break;
            }
            if ((a1 != 4)) {
                if (((s32)(a1) == 0)) {
                    t7 = *(u8*)((a0 + 0x7fc));
                    *(u8*)((a0 + 0x7fc)) = (t7 + 1);
                    a1 = (a1 + (t7 & 3));
                } else {
                    if ((a1 == 0xd)) {
                        t7_3 = *(u8*)((a0 + 0x7fc));
                        *(u8*)((a0 + 0x7fc)) = (t7_3 + 1);
                        a1 = ((t7_3 & 1) + 0xd);
                    }
                }
            } else {
                t7_4 = *(u8*)((a0 + 0x7fc));
                *(u8*)((a0 + 0x7fc)) = (t7_4 + 1);
                a1 = (a1 + (t7_4 & 3));
            }
            func_002bc188(((v0_1 * 0x3e8) + (v0 << 4)) + a1, func_0016c028(a0));
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}
