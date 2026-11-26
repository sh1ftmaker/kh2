// FIXME(lane): not matching; origin: lift (machine-written, unreviewed).
// Scores are in nonmatching/SCORES.tsv. Not linked; see docs/PLAN.md K1.
#include "common/types.h"

extern "C" u32 D_003520c0 asm("D_003520c0");
extern "C" u32 func_0018ca48(u32) asm("func_0018ca48");
extern "C" u32 func_001d87b8(u32) asm("func_001d87b8");
extern "C" void func_0016be98(u32, u32) asm("func_0016be98");
extern "C" void func_001ccf18(u32, u32, u32) asm("func_001ccf18");
extern "C" void func_001d86a0(u32, u32) asm("func_001d86a0");

// 0x001cd078 func_001cd078
void func_001cd078(u32 a0) asm("_ZN2YS8PRIZE_TT10ExecDamageEPNS_6DAMAGEE");
void func_001cd078(u32 a0) {
    u32 s2;
    u32 s3;
    u32 v0;
    u32 s1;
    u32 loc_0;
    if (((s32)(*(u32*)(&D_003520c0)) != 0)) {
        if (((s32)((*(u32*)((*(u32*)((a0 + 0x14)) + 0x588)) & 0x80)) != 0)) {
            s2 = 0;
            s3 = 0;
        } else {
            s2 = 1;
            s3 = 2;
        }
        v0 = func_0018ca48(*(u8*)((a0 + 0x26)));
        switch (v0) {
        case 0:
        case 2:
        case 3:
            s1 = 3;
            break;
        case 4:
        case 5:
        case 14:
            s1 = 0xf;
            break;
        case 1:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        default:
            s1 = 0;
            break;
        }
        if (((s32)(((s32)(func_001d87b8(s2)) < (s32)(s1))) != 0)) {
            s1 = func_001d87b8(s2);
        }
        if (((s32)(s1) > 0)) {
            func_001d86a0(-(s1), s2);
            func_0016be98((u32)&loc_0, *(u32*)((a0 + 0x14)));
            func_001ccf18((u32)&loc_0, s3, s1);
        }
    }
    return;
}
